//
//  main.c
//  1006
//
//  Created by Icarus on 16/1/24.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i,n,a[10],j,k;
    
    scanf("%d",&n);
    i=0;
    while (n>0) {
        a[i++]=n%10;
        n=n/10;
    }
    for (j=i-1;j>=0;j--) {
        switch (j) {
            case 2:
                for (k=1;k<=a[j];k++) printf("B");
                break;
            case 1:
                for (k=1;k<=a[j];k++) printf("S");
                break;
            case 0:
                for (k=1;k<=a[j];k++) printf("%d",k);
                break;
        }
    }
    return 0;
}
