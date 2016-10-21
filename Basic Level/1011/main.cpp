//
//  main.cpp
//  1011
//
//  Created by Icarus on 16/1/25.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    int n,i;
    double a,b,c;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        if(a+b>c)
            cout<<"Case #"<<i+1<<": true"<<endl;
        else
            cout<<"Case #"<<i+1<<": false"<<endl;
    }
    system("pause");
    return 0;
}