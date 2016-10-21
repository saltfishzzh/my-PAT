//
//  main.c
//  1051
//
//  Created by Icarus on 16/3/13.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main() {
    double r1,r2,p1,p2,r,p;
    
    scanf("%lf%lf%lf%lf",&r1,&p1,&r2,&p2);
    r=r1*r2*cos(p1+p2);
    p=r1*r2*sin(p1+p2);
    if (r>=0.005||r<=-0.005) printf("%.2lf",r);
    else printf("0.00");
    if (p<=-0.005) printf("%.2lfi",p);
    else if (p>=0.005) printf("+%.2lfi",p);
    else printf("+0.00i");
    return 0;
}
