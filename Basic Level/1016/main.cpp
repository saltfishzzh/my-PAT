//
//  main.cpp
//  1016
//
//  Created by Icarus on 16/1/26.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int work(string a,int da)
{
    int i,temp = 0;
    for(i=0;i<a.length();i++)
        if(a[i]==da+48)
            temp = temp*10+da;
    return temp;
}

int main()
{
    string a,b;
    int da,db,pla,plb;
    cin>>a>>da>>b>>db;
    pla = work(a,da);
    plb = work(b,db);
    cout<<pla+plb<<endl;
    system("pause");
    return 0;
}