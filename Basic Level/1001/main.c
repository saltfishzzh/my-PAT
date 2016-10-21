//
//  main.c
//  1001
//
//  Created by Icarus on 16/1/24.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,m;
    
    scanf("%d",&n);
    
    m=0;
    while (n!=1) {
        if (n%2==0) n=n/2;
        else n=(3*n+1)/2;
        m++;
    }
    printf("%d\n",m);
}
