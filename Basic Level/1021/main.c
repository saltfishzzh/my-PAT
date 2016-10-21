//
//  main.c
//  1021
//
//  Created by Icarus on 16/1/26.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main()
{
    int n,i;
    char a[1000];
    int s[10]={0};
    scanf("%s",a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        s[a[i]-48]++;
    }
    for(i=0;i<10;i++)
        if(s[i]>0)
            printf("%d:%d\n",i,s[i]);
    return 0;
}