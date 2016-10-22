//
//  main.c
//  1002
//
//  Created by Icarus on 16/2/5.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int k,x,i,j,b[1001],cnt;
    double y,a[1001];
    for (i=0;i<1001;i++) {a[i]=0; b[i]=0;}
    
    for (i=1;i<=2;i++) {
        scanf("%d",&k);
        for (j=0;j<k;j++) { scanf("%d%lf",&x,&y); a[x]+=y; b[x]=1;}
    }
    for (i=0;i<1001;i++) if (b[i]==1&&a[i]!=0.0) cnt++;
    printf("%d",cnt);
    for (i=1001;i>=0;i--) if (b[i]==1&&a[i]!=0.0) {
        printf(" %d %.1lf",i,a[i]);
    }
    return 0;
}
