//
//  main.cpp
//  1032
//
//  Created by Icarus on 16/1/28.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include <cstdio>
#include <cstring>
#include <algorithm>

int total[100005];

int main(){
    int n;
    scanf("%d",&n);
    
    int num;
    int score;
    memset(total, 0, sizeof(total));
    for (int i = 0; i < n; ++i) {
        scanf("%d%d",&num,&score);
        total[num] += score;
    }
    
    int maxNum = 1;
    int maxScore = total[1];
    for (int i = 2; i <= n; ++i) {
        if (total[i] > maxScore) {
            maxNum = i;
            maxScore = total[i];
        }
    }
    
    printf("%d %d\n",maxNum,maxScore);
    
    
    return 0;
}