//
//  main.c
//  1043
//
//  Created by Icarus on 16/2/2.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include<stdio.h>
int count[128];
int main()
{
    char c,str[7]="PATest";
    int i,sum=0;
    while((c=getchar())!='\n')
    {
        count[c]++;
    }
    do
    {
        sum=0;
        for(i=0;i<6;i++)
        {
            if(count[str[i]]>0)
            {
                putchar(str[i]);
                count[str[i]]--;
            }
            sum+=count[str[i]];
        }
    }
    while(sum!=0);
}