//
//  main.cpp
//  1019
//
//  Created by Icarus on 16/1/26.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    int n,temp;
    int a,b,c,d,x,y;
    cin>>n;
    do{
        a=n/1000;
        b=(n%1000)/100;
        c=(n%100)/10;
        d=n%10;
        if((a==b)&&(b==c)&&(c==d))
        {
            cout<<a<<a<<a<<a<<" - "<<a<<a<<a<<a<<" = 0000"<<endl;
            system("pause");
            return 0;
        }
        if(b>a) {temp=a; a=b; b=temp;}
        if(c>a) {temp=a; a=c; c=temp;}
        if(d>a) {temp=a; a=d; d=temp;}
        if(c>b) {temp=b; b=c; c=temp;}
        if(d>b) {temp=b; b=d; d=temp;}
        if(d>c) {temp=c; c=d; d=temp;}
        x = a*1000+b*100+c*10+d;
        y = a+b*10+c*100+d*1000;
        n = x-y;
        printf("%04d - %04d = %04d\n",x,y,n);
    }while(n!=6174);
    
    system("pause");
    return 0;
}