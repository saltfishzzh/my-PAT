//
//  main.c
//  1017
//
//  Created by Icarus on 16/1/26.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i,n,a[2000],m,t;
    char s[2000];
    
    scanf("%s%d",s,&n);
    m=0;
    for (i=0;i<strlen(s);i++) {
        a[i]=((s[i]-48)+m*10)/n;
        m=((s[i]-48)+m*10)-a[i]*n;
    }
    if (a[0]==0) t=1; else t=0;
    if (strlen(s)==1&&s[0]<n+48) printf("0 %d",m);
    else {
    for (i=t;i<strlen(s);i++) printf("%d",a[i]);
    printf(" %d",m);
    }
    return 0;
}