//
//  main.c
//  1054
//
//  Created by Icarus on 16/3/14.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    int n,i,j,lglnum,len,point,bo;
    double lglsum,temp;
    char a[10];
    
    scanf("%d",&n);
    lglnum=lglsum=0;
    for (i=0;i<n;i++) {
        scanf("%s",a);
        len=strlen(a);
        for (j=len;j<10;j++) a[j]='\0';
        bo=1;
        for (j=0;j<len;j++) if (((a[j]<='9'&&a[j]>='0')||a[j]=='.'||a[j]=='-')==0) {
            printf("ERROR: %s is not a legal number\n",a);
            bo=0;
            break;
        }
        j=0; point=1;
        if (a[0]=='-') j++;
        if (a[j]=='.') {
            printf("ERROR: %s is not a legal number\n",a);
            continue;
        }
        while (j<len&&bo) {
            if (a[j]=='.'&&point) {
                point=0;
                if (a[j+1]=='\0'||a[j+3]!='\0') {
                    printf("ERROR: %s is not a legal number\n",a);
                    bo=0;
                    break;
                }
                j++;
            }
            else if (a[j]=='.'&&point==0) {
                printf("ERROR: %s is not a legal number\n",a);
                bo=0;
                break;
            }
            j++;
        }
        if (bo) {
            temp=atof(a);
            if (temp<=1000&&temp>=-1000) {
                lglnum++;
                lglsum+=temp;
            }
            else {
                printf("ERROR: %s is not a legal number\n",a);
            }
        }
    }
    if (lglnum==0) printf("The average of 0 numbers is Undefined\n");
    else if(lglnum==1) printf("The average of %d number is %.2lf\n",1,lglsum);
    else printf("The average of %d numbers is %.2lf\n",lglnum,lglsum/lglnum);
    return 0;
}
