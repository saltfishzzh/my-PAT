//
//  main.cpp
//  1014
//
//  Created by Icarus on 16/1/25.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i,l1,l2,k,h;
    string s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    l1 = s1.length();
    if(l1>s2.length())
        l1 = s2.length();
    l2 = s3.length();
    if(l2>s3.length())
        l2 = s4.length();
    for(i=0;i<l1;i++)
    {
        if((s1[i]==s2[i]) && (s1[i]>='A') && (s1[i]<='G'))
        {
            switch(s1[i])
            {
                case 'A':cout<<"MON ";break;
                case 'B':cout<<"TUE ";break;
                case 'C':cout<<"WED ";break;
                case 'D':cout<<"THU ";break;
                case 'E':cout<<"FRI ";break;
                case 'F':cout<<"SAT ";break;
                case 'G':cout<<"SUN ";break;
            }
            k = i;
            break;
        }
    }
    for(i=k+1;i<l1;i++)
    {
        if((s1[i]==s2[i]) && (s1[i]>='0') && (s1[i]<='9'))
        {
            h = s1[i] - '0';
            if(h<10)
                cout<<'0'<<h<<':';
            else
                cout<<h<<':';
            break;
        }
        if((s1[i]==s2[i]) && (s1[i]>='A') && (s1[i]<='N'))
        {
            h = s1[i] - 'A' + 10;
            if(h<10)
                cout<<'0'<<h<<':';
            else
                cout<<h<<':';
            break;
        }
    }
    for(i=0;i<l2;i++)
    {
        if((s3[i]==s4[i]) && (((s3[i]>='A') && (s3[i]<='Z')) || ((s3[i]>='a') && (s3[i]<='z'))))
        {
            if(i<10)
                cout<<'0'<<i;
            else
                cout<<i;
            break;
        }
    }
    system("pause");
    return 0;
}
