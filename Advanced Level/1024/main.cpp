//
//  main.cpp
//  1024
//
//  Created by Icarus on 16/2/27.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


string add(string s,string rev)
{
    string res="";
    int k = s.size();
    int sum,carry=0;
    int i;
    for(i=k-1;i>=0;i--)
    {
        sum = s[i]+rev[i]-'0'-'0'+carry;
        res.insert(res.begin(),sum%10+'0');
        carry = sum/10;
    }
    if(carry)res.insert(res.begin(),carry+'0');
    return res;
}

bool isPalindromic(string& s,string& rev)
{
    rev = s;
    reverse(rev.begin(),rev.end());
    if(s==rev) return true;
    s = add(s,rev);
    return false;
}

int main()
{
    string s,rev;
    int k;
    cin>>s>>k;
    int i;
    for(i=0;i<k;i++)
    {
        if(isPalindromic(s,rev))
        {
            break;
        }
    }
    cout<<s<<endl<<i<<endl;
    system("PAUSE");
    return 0;
}
