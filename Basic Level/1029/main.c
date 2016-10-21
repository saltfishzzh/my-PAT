//
//  main.c
//  1029
//
//  Created by Icarus on 16/1/28.
//  Copyright © 2016年 Icarus. All rights reserved.
//
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char a[82],b[82],c[82];
    int n=0,i,j=0,k=0,flag;
    scanf("%s %s",a,b);
    for(i=0;i<strlen(a);i++)
    {
        if((a[i]==b[j])&&(j<strlen(b)))
            j++;
        else
        {
            flag = 0;
            if(islower(a[i]))
                a[i]=a[i]-32;
            for(k=0;k<n;k++)
                if(a[i]==c[k])
                    flag=1;
            if(flag==0)
                c[n++]=a[i];
        }
    }
    for(i=0;i<n;i++)
        printf("%c",c[i]);
    return 0;
}