//
//  main.c
//  1002
//
//  Created by Icarus on 16/1/24.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char s[200];
    int i,j,sum,a[10];
    char num[10][5]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    
    scanf("%s",s);
    
    sum=0;
    for (i=0;i<strlen(s);i++) sum+=s[i]-48;
    i=0;
    while (sum>0) {
        a[i]=sum%10;
        sum=sum/10;
        i++;
    }
    i--;
    for (j=i;j>0;j--) printf("%s ",num[a[j]]);
    printf("%s",num[a[0]]);
}
