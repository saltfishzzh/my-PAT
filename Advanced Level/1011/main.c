//
//  main.c
//  1011
//
//  Created by Icarus on 16/2/11.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include<stdio.h>
float maxF(float w,float t,float l){
    if(w>=t&&w>=l){
        printf("W ");
        return w;
    }
    else if(t>=w&&t>=l){
        printf("T ");
        return t;
    }
    else{
        printf("L ");
        return l;
    }
}
int main(){
    int i,j;
    float w,t,l,profit;
    profit=1.0;
    for(i=0;i<3;i++){
        scanf("%f %f %f",&w,&t,&l);
        profit=profit*maxF(w,t,l);
    }
    profit=(profit*0.65-1)*2;
    printf("%.2f\n",profit);
    return 0;
}