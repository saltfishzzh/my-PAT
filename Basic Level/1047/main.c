//
//  main.c
//  1047
//
//  Created by Icarus on 16/2/2.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include<stdio.h>
int count[1001];
int main()
{
    int n,i,id,team,grade,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d-%d%d",&team,&id,&grade);
        count[team]+=grade;
    }
    for(i=1;i<=1000;i++)
    {
        if(count[max]<count[i])
        {
            max=i;
        }
    }
    printf("%d %d\n",max,count[max]);
}