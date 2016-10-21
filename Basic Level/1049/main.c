//
//  main.c
//  1049
//
//  Created by Icarus on 16/2/2.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i,n;
    double a[100005],sum;
    
    scanf("%d",&n);
    for (i=0;i<n;i++) scanf("%lf",&a[i]);
    sum=0;
    for (i=0;i<n;i++) sum+=(i+1)*(n-i)*a[i];
    printf("%.2lf",sum);
    return 0;
}