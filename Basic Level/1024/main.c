//
//  main.c
//  1024
//
//  Created by Icarus on 16/1/26.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int charToInt(char *x)
{
    int len=strlen(x);
    int summ=0;
    for(int i=0; i<len; ++i)
    {
        summ*=10;
        summ+=(x[i]-'0');
    }
    return summ;
}
int main()
{
    char ch[210000];
    char a[200000];//底数
    char b[10000];//指数
    char flagA,flagB;//符号
    int lenA=0,lenB=0,lenC,intB;
    int idx=-1;//点的位置
    scanf("%s",ch);
    flagA=ch[0];
    lenC=strlen(ch);
    int flag=1;
    for(int i=1; i<lenC; ++i)
    {
        if(ch[i]=='.')
        {
            idx=i-1;
        }
        else if(ch[i]=='E')
        {
            flag=0;
        }
        else if(ch[i]=='+'||ch[i]=='-')
        {
            flagB=ch[i];
        }
        else if(flag)
        {
            a[lenA++]=ch[i];
        }
        else
        {
            b[lenB++]=ch[i];
        }
    }
    intB=charToInt(b);
    if(flagA=='-')
        printf("-");
    //printf("%d %d %d %d\n",lenA,lenB,idx,intB);
    if(flagB=='+')
    {
        flag=0;
        idx+=intB;
        for(int i=1; i<=lenA; ++i)
        {
            if(i<idx)
            {
                if(a[i-1]=='0'&&flag==0)
                    continue;
                else
                {
                    printf("%c",a[i-1]);
                    flag=1;
                }
            }
            else if(i==idx)
            {
                if(i==lenA)
                    printf("%c",a[i-1]);
                else
                    printf("%c.",a[i-1]);
            }
            else
                printf("%c",a[i-1]);
        }
        for(int i=0; i<idx-lenA; ++i)
            printf("0");
    }
    else
    {
        flag=0;
        idx-=intB;
        if(idx<=0)
        {
            printf("0.");
            for(int i=0; i<-idx; ++i)
                printf("0");
            for(int i=0; i<lenA; ++i)
                printf("%c",a[i]);
        }
        else
        {
            for(int i=1; i<=lenA; ++i)
            {
                if(i<idx)
                {
                    if(a[i-1]=='0'&&flag==0)
                        continue;
                    else
                    {
                        printf("%c",a[i-1]);
                        flag=1;
                    }
                }
                else if(i==idx)
                {
                    printf("%c.",a[i-1]);
                }
                else
                    printf("%c",a[i-1]);
            }
        }
    }
    return 0;
}