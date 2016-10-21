//
//  main.c
//  1022
//
//  Created by Icarus on 16/1/26.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include <stdio.h>

int main()
{
    int a,b,c,d,i,n=0;
    int s[100];
    scanf("%d %d %d",&a,&b,&d);
    c = a + b;
    while(c!=0)
    {
        s[n++]=c%d;
        c=c/d;
    }
    for(i=n-1;i>=0;i--)
        printf("%d",s[i]);
    if(n==0) printf("0");
    return 0;
}
