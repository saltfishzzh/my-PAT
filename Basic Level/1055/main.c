//
//  main.c
//  1055
//
//  Created by Icarus on 16/3/13.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct {
        char name[10];
        int h;
    } a[10000],temp;

void fill_in(int len,int begin,int end)
{
    int i;
    if (len%2==0) {
        for (i=len-1;i>=1;i-=2) {
            printf("%s ",a[begin+i].name);
        }
        for (i=0;i<=len-4;i+=2) {
            printf("%s ",a[begin+i].name);
        }
        printf("%s",a[begin+i].name);
    }
    if (len%2==1&&len!=1) {
        for (i=len-2;i>=1;i-=2) {
            printf("%s ",a[begin+i].name);
        }
        for (i=0;i<=len-3;i+=2) {
            printf("%s ",a[begin+i].name);
        }
        printf("%s",a[begin+i].name);
    }
    if (len==1) printf("%s",a[begin].name);
    printf("\n");
}

int main(int argc, const char * argv[]) {
    int n,i,j,pai,lie,last,begin,end;
    scanf("%d%d",&n,&pai);
    for (i=0;i<n;i++) {
        scanf("%s%d",a[i].name,&a[i].h);
    }
    for(j=0;j<=n-1;j++)  {
        for(i=0;i<=n-j-1;i++)
            if(a[i].h<a[i+1].h||(a[i].h==a[i+1].h&&strcmp(a[i].name,a[i+1].name)>0))    {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
    }
    lie=n/pai;
    last=n-(pai-1)*lie;
    begin=0;end=last-1;
    fill_in(last,begin,end);
    for (i=1;i<=pai-1;i++) {
        begin=end+1;
        end=begin+lie-1;
        fill_in(lie, begin, end);
    }
    return 0;
}
