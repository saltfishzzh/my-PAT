//
//  main.c
//  1005
//
//  Created by Icarus on 16/2/9.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i,sum;
    char a[200];
    char dtoe[10][20]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    sum=0;
    scanf("%s",a);
    for (i=0;i<strlen(a);i++) sum+=a[i]-'0';
    if(sum<10){
        printf("%s\n",dtoe[sum]);
    }
    else if(sum<100){
        printf("%s ",dtoe[sum/10]);
        printf("%s\n",dtoe[sum%10]);
    }
    else if(sum<1000){
        printf("%s ",dtoe[sum/100]);
        printf("%s ",dtoe[sum%10/10]);
        printf("%s\n",dtoe[sum%10]);
    }
    return 0;
}
