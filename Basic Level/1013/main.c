//
//  main.c
//  1013
//
//  Created by Icarus on 16/1/25.
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
    int m,n,cnt,i,a[20000];
    
    scanf("%d%d",&m,&n);
    i=2;
    cnt=0;
    while (cnt<=n+1) {
        if (prime(i)) a[cnt++]=i;
        i++;
    }
    cnt=0;
    for (i=m;i<=n;i++) {
        cnt++;
        if (cnt%10!=0&&i!=n) printf("%d ",a[i-1]);
        if (cnt%10==0&&i==n) printf("%d\n",a[i-1]);
        else
        if (cnt%10==0) printf("%d\n",a[i-1]);
        else
        if (i==n) printf("%d",a[i-1]);
    }
    return 0;
}
