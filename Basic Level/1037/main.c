//
//  main.c
//  1037
//
//  Created by Icarus on 16/2/2.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include <stdio.h>
int main() {
    char str[50];
    gets(str);
    int g1 = 0, s1 = 0, k1 = 0;
    int g2 = 0, s2 = 0, k2 = 0;
    int i = 0;
    while(str[i] != '.')
        g1 = 10 * g1 + str[i++] - '0';
    ++i;
    while(str[i] != '.')
        s1 = 10 * s1 + str[i++] - '0';
    ++i;
    while(str[i] != ' ')
        k1 = 10 * k1 + str[i++] - '0';
    ++i;
    while(str[i] != '.')
        g2 = 10 * g2 + str[i++] - '0';
    ++i;
    while(str[i] != '.')
        s2 = 10 * s2 + str[i++] - '0';
    ++i;
    while(str[i] != '\0')
        k2 = 10 * k2 + str[i++] - '0';
    int g = g2 - g1, s = s2 - s1, k = k2 - k1;
    if(k < 0) {
        --s;
        k += 29;
    }
    if(s < 0) {
        --g;
        s += 17;
    }
    if(g < 0) {
        g = g1 - g2;
        s = s1 - s2;
        k = k1 - k2;
        if(k < 0) {
            --s;
            k += 29;
        }
        if(s < 0) {
            --g;
            s += 17;
        }
        g = -g;
    }
    printf("%d.%d.%d", g, s, k);
    
    return 0;
}