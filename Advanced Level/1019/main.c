//
//  main.c
//  1019
//
//  Created by Icarus on 16/2/11.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include<stdio.h>
int main(){
    long long n,b;
    int a[1000];
    scanf("%ld%ld\n", &n,&b);
    int index = 0;
    while(n != 0){
        a[index++] = n%b;
        n /= b;
    }
    int i = 0;
    int j = index - 1;
    int flag = 0;
    while(i<j){
        if(a[i] != a[j]){
            flag = 1;
            break;
        }
        i++;
        j--;
    }
    if(flag)
        printf("No\n");
    else
        printf("Yes\n");
    for(i =index-1; i> 0; i--){
        printf("%d ", a[i]);
    }
    printf("%d\n", a[0]);
    return 0;
}