//
//  main.c
//  1038
//
//  Created by Icarus on 16/2/2.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include<stdio.h>

 int main()
 {
    int fenshu[101]={0},chafen=0;
    int num=0,temp=0;
    scanf("%d",&num);
    for(int i=0;i<num;i++) {
        scanf("%d",&temp);
        if(0<=temp && temp<=100) fenshu[temp]++;
    }
    scanf("%d",&num);
    for(int i=0;i<num;i++) {
        scanf("%d",&chafen);
        if(i) printf(" %d",fenshu[chafen]);
        else printf("%d",fenshu[chafen]);
    }
    return 0;
}