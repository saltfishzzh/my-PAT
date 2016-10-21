//
//  main.c
//  1040
//
//  Created by Icarus on 16/2/2.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include<stdio.h>
#include<string.h>
int main(void){
    char str[100005];
    unsigned num_t=0;
    unsigned num_at=0;
    unsigned num_pat=0;
    gets(str);
    for(int i=strlen(str)-1;i>=0;--i){
        if(str[i]=='T')
            ++num_t;
        else if(str[i]=='A')
            num_at=(num_at+num_t)%1000000007;
        else
            num_pat=(num_at+num_pat)%1000000007;
    }
    printf("%d",num_pat);
    return 0;
}