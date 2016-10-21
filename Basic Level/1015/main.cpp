//
//  main.cpp
//  1015
//
//  Created by Icarus on 16/1/26.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include <stdlib.h>
#include <iostream>
#include <malloc.h>

using namespace std;

struct student
{
    int num;
    int d;
    int c;
};

int comp(const void *a, const void *b)
{
    if((*(student*)a).d+(*(student*)a).c != (*(student*)b).d+(*(student*)b).c)
        return ((*(student*)b).d+(*(student*)b).c)-((*(student*)a).d+(*(student*)a).c);
    else if((*(student*)a).d != (*(student*)b).d)
        return (*(student*)b).d-(*(student*)a).d;
    else return (*(student*)a).num-(*(student*)b).num;
}

int main()
{
    int n,l,h,i;
    int n1=0,n2=0,n3=0,n4=0;
    scanf("%d %d %d",&n,&l,&h);
    student *p1 = (student *)malloc(100000*sizeof(student));
    student *p2 = (student *)malloc(100000*sizeof(student));
    student *p3 = (student *)malloc(100000*sizeof(student));
    student *p4 = (student *)malloc(100000*sizeof(student));
    student temp;
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&temp.num,&temp.d,&temp.c);
        if((temp.d>=l)&&(temp.c>=l))
        {
            if((temp.d>=h)&&(temp.c>=h))
                p1[n1++] = temp;
            else if(temp.d>=h)
                p2[n2++] = temp;
            else if(temp.d>=temp.c)
                p3[n3++] = temp;
            else p4[n4++] = temp;
        }
    }
    qsort(p1,n1,sizeof(student),comp);
    qsort(p2,n2,sizeof(student),comp);
    qsort(p3,n3,sizeof(student),comp);
    qsort(p4,n4,sizeof(student),comp);
    printf("%d\n",n1+n2+n3+n4);
    for(i=0;i<n1;i++)
        printf("%d %d %d\n",p1[i].num,p1[i].d,p1[i].c);
    for(i=0;i<n2;i++)
        printf("%d %d %d\n",p2[i].num,p2[i].d,p2[i].c);
    for(i=0;i<n3;i++)
        printf("%d %d %d\n",p3[i].num,p3[i].d,p3[i].c);
    for(i=0;i<n4;i++)
        printf("%d %d %d\n",p4[i].num,p4[i].d,p4[i].c);
    system("pause");
    return 0;
}