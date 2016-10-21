//
//  main.cpp
//  1010
//
//  Created by 张倬豪 on 16/4/4.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;

int main()
{
    int a,b;
    int flag = 0;
    b = 1;
    while(cin>>a>>b)
    {
        if(b>0)
            if(flag ==0)
            {
                cout<<a*b<<' '<<b-1;
                flag = 1;
            }
            else cout<<' '<<a*b<<' '<<b-1;
    }
    if(flag ==0)
        cout<<"0 0";
    system("pause");
    return 0;
}