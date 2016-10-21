//
//  main.c
//  1005
//
//  Created by Icarus on 16/1/24.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include <stdio.h>


int main() {
    int num[101];
    int i, k, n, len;
    for(i = 0; i < 101; i ++) {
        num[i] = -1;
    }
    scanf("%d", &k);
    for(i = 0; i < k; i ++) {
        scanf("%d", &n);
        num[n] = 0;
    }
    for(i = 0; i < 101; i ++) {
        if(num[i] != 0) {
            continue;
        }
        n = i;
        while(n != 1) {
            if(n % 2 == 0) {
                n = n / 2;
                if(n <= 100) {
                    num[n] = 1;
                }
            } else {
                n = 3 * n + 1;
                n = n / 2;
                if(n <= 100) {
                    num[n] = 1;
                }
            }
        }
    }
    for(i = 0, len = 0; i < 101; i ++) {
        if(num[i] == 0) {
            len ++;
        }
    }
    for(i = 100; i > 1; i --) {
        if(num[i] == 0) {
            len--;
            if(len!= 0) {
                printf("%d ", i);
            } else {
                printf("%d", i);
                break;
            }
        }
    }
}

