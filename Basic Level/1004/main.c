//
//  main.c
//  1004
//
//  Created by Icarus on 16/1/24.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include <stdio.h>
#include <string.h>


int main()
{
    int n,i;
    char na[1000][20];
    char nu[1000][20];
    int grade[1000];
    int nma = 0,cma = 0,nmi = 100,cmi = 0;
    scanf("%d",&n);
    for(i = 0;i<n;i++)
    {
        scanf("%s %s %d",na[i], nu[i], &grade[i]);
        if(grade[i]>=nma)
        {
            nma = grade[i];
            cma = i;
        }
        if(grade[i]<=nmi)
        {
            nmi = grade[i];
            cmi = i;
        }
    }
    printf("%s %s\n",na[cma],nu[cma]);
    printf("%s %s\n",na[cmi],nu[cmi]);
}