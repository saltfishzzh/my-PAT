//
//  main.c
//  1034
//
//  Created by Icarus on 16/1/29.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include<stdio.h>

long Gcd(long a,long b){
    long temp;
    if(a<0)
        a=-a;
    if(b<0)
        b=-b;
    while(b!=0){
        temp=a%b;
        a=b;
        b=temp;
    }
    return a;
}

void featureNormalize(long *k,long *a,long *b){
    long gcd=Gcd(*a,*b);
    *a=*a/gcd;
    *b=*b/gcd;
    if(*a<0){
        *a=-*a;
        if(*a>=*b){
            *k=(*a)/(*b);
            *a=(*a)%(*b);
            *k=-*k;
        }else{
            *a=-*a;
            *k=0;
        }
    }else{
        if(*a>=*b){
            *k=(*a)/(*b);
            *a=(*a)%(*b);
        }else{
            *k=0;
        }
    }
}

void output(long k,long a,long b){
    if(k<0){
        printf("(%ld",k);
        if(a==0){
            printf(")");
        }else{
            printf(" %ld/%ld)",a,b);
        }
    }else if(k>0){
        if(a>0){
            printf("%ld %ld/%ld",k,a,b);
        }else if(a==0){
            printf("%ld",k);
        }
    }else{
        if(a>0){
            printf("%ld/%ld",a,b);
        }else if(a==0){
            printf("0");
        }else{
            printf("(%ld/%ld)",a,b);
        }
    }
}

int main(int argc,char *argv[]){
    long a1,b1,a2,b2,a3,b3;
    long k1,k2,k3;
    long n,m,p,q;
    char opt[4]={'+','-','*','/'};
    scanf("%ld/%ld %ld/%ld",&a1,&b1,&a2,&b2);
    n=a1;
    m=b1;
    p=a2;
    q=b2;
    featureNormalize(&k1,&a1,&b1);
    featureNormalize(&k2,&a2,&b2);
    for(long i=0;i<4;i++){
        output(k1,a1,b1);
        switch (opt[i]){
            case '+':
                a3=n*q+p*m;
                b3=m*q;
                printf(" + ");
                break;
            case '-':
                a3=n*q-p*m;
                b3=m*q;
                printf(" - ");
                break;
            case '*':
                a3=n*p;
                b3=m*q;
                printf(" * ");
                break;
            case '/':
                a3=n*q;
                b3=m*p;
                printf(" / ");
                break;
        }
        output(k2,a2,b2);
        printf(" = ");
        if(opt[i]=='/'&&b3==0){
            printf("Inf\n");
        }else{
            if(b3<0){
                b3=-b3;
                a3=-a3;
            }
            featureNormalize(&k3,&a3,&b3);
            output(k3,a3,b3);
            printf("\n");
        }
    }
    return 0;
}