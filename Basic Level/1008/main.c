//
//  main.c
//  1008
//
//  Created by Icarus on 16/1/24.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,m,i,j,a[200],temp;
    
    scanf("%d%d",&n,&m);
    for (i=0;i<n;i++) scanf("%d",&a[i]);
    
    for (i=1;i<=m;i++) {
        temp=a[n-1];
        for (j=n-1;j>0;j--) a[j]=a[j-1];
        a[0]=temp;
    }
    for (i=0;i<n-1;i++) printf("%d ",a[i]);
    printf("%d",a[n-1]);
    return 0;
}
