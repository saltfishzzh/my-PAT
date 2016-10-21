//
//  main.cpp
//  1018
//
//  Created by Icarus on 16/1/26.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    int n,i;
    int a1=0,a2=0,a3=0;
    int aJ=0,aC=0,aB=0,bJ=0,bC=0,bB=0;
    char x,y,blank;
    cin>>n;
    for(i=0;i<n;i++)
    {
        scanf(" %c %c",&x,&y);
        if((x=='C')&&(y=='J')) {a1++; aC++; continue;}
        if((x=='J')&&(y=='B')) {a1++; aJ++; continue;}
        if((x=='B')&&(y=='C')) {a1++; aB++; continue;}
        if((x=='C')&&(y=='C')) {a2++; continue;}
        if((x=='J')&&(y=='J')) {a2++; continue;}
        if((x=='B')&&(y=='B')) {a2++; continue;}
        if((x=='C')&&(y=='B')) {a3++; bB++; continue;}
        if((x=='B')&&(y=='J')) {a3++; bJ++; continue;}
        if((x=='J')&&(y=='C')) {a3++; bC++; continue;}
    }
    cout<<a1<<" "<<a2<<" "<<a3<<endl;
    cout<<a3<<" "<<a2<<" "<<a1<<endl;
    if((aB>=aC)&&(aB>=aJ))
        cout<<"B";
    else if(aC>=aJ)
        cout<<"C";
    else
        cout<<"J";
    if((bB>=bC)&&(bB>=bJ))
        cout<<" B";
    else if(bC>=bJ)
        cout<<" C";
    else
        cout<<" J";
    system("pause");
    return 0;
}