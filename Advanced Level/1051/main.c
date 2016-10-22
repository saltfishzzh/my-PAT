//
//  main.c
//  1051
//
//  Created by Icarus on 16/3/28.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int m,n,k,i,j;
    
    scanf("%d%d%d",&m,&n,&k);
    for (j=1;j<=k;j++) {
        int s[1005];
        for (i=0;i<n;i++) scanf("%d",&s[i]);
        int ok=1,pop=0,b=0,a=1;
        while (b<n) {
            if (a==s[b]) {a++;b++;}
            else if (pop>0&&s[pop]==s[b]) 
        }
    }
    return 0;
}
