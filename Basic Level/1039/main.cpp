//
//  main.cpp
//  1039
//
//  Created by Icarus on 16/2/2.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include<iostream>
#include<map>
#include<string>
int main(void){
    using namespace std;
    string str_solder,str_buyer;
    map<char,int> solder;
    map<char,int> buyer;
    cin>>str_solder>>str_buyer;
    for(auto c:str_solder)
        ++solder[c];
    for(auto c:str_buyer)
        ++buyer[c];
    
    int lack=0;
    
    for(auto p:buyer){
        if(p.second>solder[p.first])
            lack+=(p.second-solder[p.first]);
        
    }
    if(lack==0)
        cout<<"Yes "<<(str_solder.size()-str_buyer.size());
    else
        cout<<"No "<<lack;
    system("pause");
}