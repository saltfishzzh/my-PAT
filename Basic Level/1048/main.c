//
//  main.c
//  1048
//
//  Created by Icarus on 16/2/2.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include<stdio.h>
#include<string.h>
int main()
{
    char a[101],buf_b[203],*b=buf_b+100,pattern[14]="0123456789JQK";
    int i,length,a_length,b_length,a_num,b_num;
    scanf("%s%s",a,b);
    a_length=strlen(a);
    b_length=strlen(b);
    for(i=1;i<=a_length;i++)
    {
        a_num=a[a_length-i]-'0';
        b_num=b[b_length-i]-'0';
        if(b_length<i)
        {
            b_num=0;
        }
        if(i%2)
        {
            b_num+=a_num;
            b_num%=13;
        }
        else
        {
            b_num-=a_num;
            if(b_num<0)
            {
                b_num+=10;
            }
        }
        b[b_length-i]=pattern[b_num];
    }
    if(b_length<a_length)
    {
        printf("%s\n",b+b_length-i+1);
    }
    else
    {
        printf("%s\n",b);
    }
}
