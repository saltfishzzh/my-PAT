//
//  main.c
//  1007
//
//  Created by Icarus on 16/1/24.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int prime(int n)
{
    int i;
    for (i=2;i<=sqrt(n);i++) if (n%i==0) return 0;
    return 1;
}

int main(int argc, const char * argv[]) {
    int i,n,j,p[100000],count;
    
    scanf("%d",&n);
    j=0;
    for (i=2;i<=n;i++) if (prime(i)) p[j++]=i;
    count=0;
    for (i=0;i<j-1;i++) if (p[i+1]-p[i]==2) count++;
    printf("%d",count);
    return 0;
}
