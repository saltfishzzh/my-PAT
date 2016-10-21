//
//  main.cpp
//  1033
//
//  Created by Icarus on 16/1/28.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

bool brokenKeys[257];

int main()
{
    char str[100005];
    memset(brokenKeys, 0, sizeof(brokenKeys));
    gets(str);
    for (int i = 0; str[i]; ++i) {
        char ch = str[i];
        brokenKeys[ch] = 1;
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch - 'A' + 'a';
            brokenKeys[ch] = 1;
        }
    }
    char ch;
    while(scanf("%c",&ch) != EOF){
        if(brokenKeys[ch] == 0){
            if (ch >= 'A' && ch <= 'Z' && brokenKeys['+'] == 1) {
                continue;
            }
            cout << ch;
        }
    }
    return 0;
}