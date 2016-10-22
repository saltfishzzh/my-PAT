//
//  main.c
//  1008
//
//  Created by Icarus on 16/2/11.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,i,a[105],sum;
    
    scanf("%d",&n);
    for (i=1;i<=n;i++) scanf("%d",&a[i]);
    a[0]=0;
    sum=0;
    for (i=0;i<n;i++) {
        if (a[i]>a[i+1]) sum+=4*(a[i]-a[i+1]);
        if (a[i]<a[i+1]) sum+=6*(a[i+1]-a[i]);
    }
    printf("%d",sum+n*5);
    return 0;
}
