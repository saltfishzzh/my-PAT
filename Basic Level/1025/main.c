//
//  main.c
//  1025
//
//  Created by Icarus on 16/1/27.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include <stdio.h>

int main()
{
    int first,n,k,temp,i,j,l;
    int data[100005];
    int next[100005];
    int list[100005];
    int final[100005];
    scanf("%d %d %d", &first, &n, &k);
    for(i=0; i<n; i++)
    {
        scanf("%d", &temp);
        scanf("%d %d",&data[temp],&next[temp]);
    }
    l=0;
    while(first!=-1)
    {
        list[l] = first;
        l++;
        first = next[first];
    }
    for(i=0;i<l;i++)
    {
        final[i] = list[i];
    }
    for(i=0;i<(l-l%k);i++)
    {
        final[i] = list[(i/k)*k+k-i%k-1];
    }
    for(i=0;i<l-1;i++)
    {
        printf("%05d %d %05d\n",final[i],data[final[i]],final[i+1]);
    }
    printf("%05d %d %d\n",final[l-1],data[final[l-1]],-1);
    return 0;
}