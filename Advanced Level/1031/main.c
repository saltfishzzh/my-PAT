//
//  main.c
//  1031
//
//  Created by Icarus on 16/3/23.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char s[90];
    int hang,lie,len,i,j,p,q;
    scanf("%s",s);
    len=strlen(s);
    hang=(len+2)/3;
    lie=(len+2)-hang*2;
    p=0;
    for (i=1;i<hang;i++){
        printf("%c",s[p]);
        for (j=1;j<=lie-2;j++) {
            printf(" ");
        }
        printf("%c\n",s[len-p-1]);
        p++;
    }
    q=len-p-1;
    for (i=p;i<=q;i++) printf("%c",s[i]);
    return 0;
}
