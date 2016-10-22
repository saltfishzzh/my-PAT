//
//  main.c
//  1027
//
//  Created by Icarus on 16/3/22.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include<stdio.h>
int main(){
    int r,g,b;
    char rst[6]={'0','0','0','0','0','0'};
    scanf("%d %d %d",&r,&g,&b);
    
    if(r%13<10) rst[1]='0'+r%13;
    else rst[1]='A'+r%13-10;
    r=r/13;
    if(r%13<10) rst[0]='0'+r%13;
    else rst[0]='A'+r%13-10;
    
    if(g%13<10) rst[3]='0'+g%13;
    else rst[3]='A'+g%13-10;
    g=g/13;
    if(g%13<10) rst[2]='0'+g%13;
    else rst[2]='A'+g%13-10;
    
    if(b%13<10) rst[5]='0'+b%13;
    else rst[5]='A'+b%13-10;
    b=b/13;
    if(b%13<10) rst[4]='0'+b%13;
    else rst[4]='A'+b%13-10;
    
    printf("#%c%c%c%c%c%c\n",rst[0],rst[1],rst[2],rst[3],rst[4],rst[5]);
    return 0;
}