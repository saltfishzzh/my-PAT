//
//  main.c
//  1045
//
//  Created by Icarus on 16/2/2.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include<stdio.h>
#include<stdlib.h>

int comp(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}

int main(){
    int N;
    scanf("%d", &N);
    int arr[N], arr_s[N];
    for(int i=0; i<N; ++i){
        scanf("%d", &arr[i]);
        arr_s[i] = arr[i];
    }
    qsort(arr_s, N, sizeof(int), comp);
    int max = 0, cnt =0;
    int mainnum[N];
    for(int i=0; i<N; ++i){
        if(arr[i] > max) max = arr[i];
        if(arr[i] == arr_s[i] && arr[i] == max){
            mainnum[cnt++] = arr[i];
        }
    }
    printf("%d\n", cnt);
    for(int i=0; i<cnt; ++i){
        if(i == 0) printf("%d", mainnum[i]);
        else printf(" %d", mainnum[i]);
    }
    printf("\n");
    return 0;
}