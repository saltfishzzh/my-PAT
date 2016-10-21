//
//  main.c
//  1026
//
//  Created by Icarus on 16/1/27.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include <stdio.h>

int main()
{
    int a,b,c,hh,mm,ss;
    scanf("%d %d",&a,&b);
    c=(b-a)/100;
    if((b-a)%100>=50)
        c++;
    hh=c/3600;
    mm=c%3600/60;
    ss=c%60;
    printf("%02d:%02d:%02d\n",hh,mm,ss);
    return 0;
}