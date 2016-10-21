//
//  main.c
//  1012
//
//  Created by Icarus on 16/1/25.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,i,a[1005],a1=0,a2=0,a3=0,a5=0,flag=1,cnt=0,fl1,fl2,fl3,fl4,fl5;
    double a4=0;
    
    scanf("%d",&n);
    fl1=fl2=fl3=fl4=fl5=0;
    for (i=0;i<n;i++) {
        scanf("%d",&a[i]);
        if (a[i]%5==0&&a[i]%2==0) {a1+=a[i]; fl1=1;}
        if (a[i]%5==1) {a2+=flag*a[i],flag=-flag; fl2=1;}
        if (a[i]%5==2) {a3++; fl3=1;}
        if (a[i]%5==3) {a4+=a[i],cnt++; fl4=1;}
        if (a[i]%5==4) {a5=(a5>=a[i])?a5:a[i]; fl5=1;}
    }
    
    if (fl1==1) printf("%d ",a1); else printf("N ");
    if (fl2==1) printf("%d ",a2); else printf("N ");
    if (fl3==1) printf("%d ",a3); else printf("N ");
    if (fl4==1) printf("%.1lf ",1.0*a4/cnt); else printf("N ");
    if (fl5==1) printf("%d",a5); else printf("N");
    return 0;
}