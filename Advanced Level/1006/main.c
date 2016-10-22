//
//  main.c
//  1006
//
//  Created by Icarus on 16/2/9.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    int i,n;
    char name[16],in[10],out[10],el[9]="24:00:00",lt[9]="00:00:00",max1[16],max2[16];
    scanf("%d",&n);
    for (i=0;i<n;i++) {
        scanf("%s%s%s",name,in,out);
        if (strcmp(el,in)>0) {
            strcpy(el,in);
            strcpy(max1,name);
        }
        if (strcmp(out,lt)>0) {
            strcpy(lt,out);
            strcpy(max2,name);
        }
    }
    printf("%s %s",max1,max2);
    return 0;
}
