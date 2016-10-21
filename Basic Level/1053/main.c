//
//  main.c
//  1053
//
//  Created by Icarus on 16/3/15.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,d,k,psb,ept,i,j,day;
    double limit,temp;
    
    scanf("%d%lf%d",&n,&limit,&d);
    psb=0;
    ept=0;
    for (i=0;i<n;i++) {
        scanf("%d",&k);
        day=0;
        for (j=0;j<k;j++) {
            scanf("%lf",&temp);
            if (temp<limit) day++;
        }
        if (day*2>k) {
            if (k>d) ept++;
            else psb++;
        }
    }
    printf("%.1f%% %.1lf%%\n",psb*100.0/n,ept*100.0/n);
    return 0;
}
