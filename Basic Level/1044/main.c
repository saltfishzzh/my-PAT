//
//  main.c
//  1044
//
//  Created by Icarus on 16/2/2.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include<stdio.h>
#include<string.h>
#include<memory.h>

int main()
{
    char digital[2][13][5]=
    {
        {"tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec"},
        {"none","tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou"}
    },num[20],result[20],*p_result;
    int i,j,n,temp=0,flag=0;
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        flag=0;
        temp=0;
        p_result=NULL;
        gets(num);
        if(num[0]>='0'&&num[0]<='9')
        {
            p_result=result+19;
            *p_result='\0';
            sscanf(num,"%d",&temp);
            do
            {
                if(flag==1&&*(p_result+1)=='t')
                    *p_result='\0';
                p_result-=strlen(digital[flag][temp%13]);
                memcpy(p_result,digital[flag][temp%13],strlen(digital[flag][temp%13]));
                p_result--;
                *p_result=' ';
                temp/=13;
                if(flag==0)
                    flag=1;
            }
            while(temp>0);
            printf("%s\n",p_result+1);
            flag=0;
        }
        else
        {
            while(flag<2)
            {
                for(j=0;j<13;j++)
                {
                    p_result=strstr(num,digital[flag][j]);
                    if(p_result!=NULL)
                        break;
                }
                j%=13;
                temp+=j*(flag==0?1:13);
                flag++;
            }
            printf("%d\n",temp);
        }
    }
}