//
//  main.c
//  1052
//
//  Created by Icarus on 16/3/13.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char s[5][70];
    int i,j,k,num[5],temp1,temp2,temp,bo,boo;
    for (i=0;i<3;i++) gets(s[i]);
    strcpy(s[3],s[1]);
    strcpy(s[4],s[0]);
    for (i=0;i<5;i++) {
        temp1=0;temp2=0;
        for (j=0;j<strlen(s[i]);j++) if (s[i][j]=='[') temp1++; else if (s[i][j]==']') temp2++;
        num[i]=temp1<=temp2?temp1:temp2;
    }
    int (*a)[5],n;
    scanf("%d",&n);
    a=(int (*)[10])malloc(n*10*sizeof(int));
    for (i=0;i<n;i++) {
        bo=0;
        for (j=0;j<5;j++) {
            scanf("%d",&a[i][j]);
            if (a[i][j]>num[j]||a[i][j]<=0) {
                printf("Are you kidding me? @\\/@\n");
                bo=1;
                break;
            }
        }
        if (bo==0) {
            for (j=0;j<5;j++) {
                temp=0;
                k=0;
                while (k<strlen(s[j])){
                    if (s[j][k]=='[')
                    {
                        temp++;
                        if (temp==a[i][j]) {
                            k++; boo=1;
                            while (s[j][k]!=']'||boo==1) {printf("%c",s[j][k]); k++; boo=0;}
                            break;
                        }
                        else {
                            k++; boo=1;
                            while (s[j][k]!=']'||boo==1) {k++; boo=0;}
                        }
                        k++;
                    }
                    else k++;
                }
                if (j==0) printf("(");
                if (j==3) printf(")");
            }
            printf("\n");
        }
    }
    return 0;
}
