//
//  main.c
//  1050
//
//  Created by Icarus on 16/2/2.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int cmp(int *a,int *b)
{
    if (*a>*b) return -1;
    else if (*a==*b) return 0;
    else return 1;
}

int main(int argc, const char * argv[]) {
    int i,j,N,*a,m,n,p,q,**b,cnt;
    
    scanf("%d",&N);
    a=(int *)malloc(N*sizeof(int));
    for (i=0; i<N; i++) {
        scanf("%d",a+i);
    }
    qsort(a, N, sizeof(a[0]), cmp);
    for (i=sqrt(N);i>=1;i--) if (N%i==0) {n=i;m=N/i;break;}
    b=(int **)malloc(m*sizeof(int *));
    for (i=0;i<m;i++) b[i]=(int *)malloc(n*sizeof(int));
    p=0;q=0; cnt=0;
    for (i=0;i<m;i++) for (j=0;j<n;j++) b[i][j]=-1;
    while (1) {
        while (q<n&&b[p][q]==-1) {b[p][q]=a[cnt++];q++;} q--; p++;
        while (p<m&&b[p][q]==-1) {b[p][q]=a[cnt++];p++;} p--; q--;
        while (q>=0&&b[p][q]==-1) {b[p][q]=a[cnt++];q--;} q++; p--;
        while (p>=0&&b[p][q]==-1) {b[p][q]=a[cnt++];p--;} p++; q++;
        if (cnt==N) break;
    }
    for (i=0;i<m;i++) {
        for (j=0;j<n-1;j++) printf("%d ",b[i][j]);
        printf("%d\n",b[i][j]);
    }
    return 0;
}
