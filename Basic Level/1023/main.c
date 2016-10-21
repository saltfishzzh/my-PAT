//
//  main.c
//  1023
//
//  Created by Icarus on 16/1/26.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include <stdio.h>

int main()
{
    int a[10];
    int n,i,j;
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(i=1;i<10;i++)
        if(a[i]>0)
        {
            printf("%d",i);
            a[i]--;
            break;
        }
    for(i=0;i<10;i++)
        for(j=0;j<a[i];j++)
            printf("%d",i);
    return 0;
}
