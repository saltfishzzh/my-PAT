//
//  main.c
//  1036
//
//  Created by Icarus on 16/2/2.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include <stdio.h>
int main() {
    int n;
    char ch;
    scanf("%d %c", &n, &ch);
    for(int i = 0; i < (n + 1) / 2; ++i) {
        for(int j = 0; j < n; ++j)
            if(i == 0 || i == (n - 1) / 2)
                printf("%c", ch);
            else
                if(j == 0 || j == n - 1)
                    printf("%c", ch);
                else
                    printf(" ");
        printf("\n");
    }
    
    return 0;
}