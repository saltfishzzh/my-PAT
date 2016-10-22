//
//  main.c
//  1009
//
//  Created by Icarus on 16/2/11.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int expo;
    double coef;
}poly;

int main()
{
    int k1, k2;
    poly *a, *b;
    int i,j;
    int max;
    poly *c;
    int zhishu, xishu;
    int count;
    
    while(scanf("%d", &k1) != EOF)
    {
        a = (poly *)malloc(k1 * sizeof(poly));
        for(i = 0; i < k1; i ++)
        {
            scanf("%d %lf", &a[i].expo, &a[i].coef);
        }
        scanf("%d", &k2);
        b = (poly *)malloc(k2 * sizeof(poly));
        for(i = 0; i < k2; i ++)
        {
            scanf("%d %lf", &b[i].expo, &b[i].coef);
        }
        max = a[0].expo + b[0].expo;
        c = (poly *)malloc((max + 1) * sizeof(poly));
        for(i = 0; i <= max; i ++)
        {
            c[i].expo = i;
            c[i].coef = 0;
        }
        for(i = 0; i < k1; i ++)
        {
            for(j = 0; j < k2; j ++)
            {
                zhishu = a[i].expo + b[j].expo;
                c[zhishu].coef += a[i].coef * b[j].coef;
            }
        }
        count = 0;
        for(i = 0; i <= max; i ++)
        {
            if(c[i].coef != 0)
            {
                count ++;
            }
        }
        printf("%d", count);
        for(i = max; i >= 0; i --)
        {
            if(c[i].coef != 0)
            {
                printf(" %d %.1lf", i, c[i].coef);
            }
        }
        printf("\n");
    }
    return 0;
}