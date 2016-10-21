//
//  main.c
//  1009
//
//  Created by Icarus on 16/1/25.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    int i,j,m,b;
    char s[100];
    
    gets(s);
    m=strlen(s)-1;
    b=0;
    for (i=(int)strlen(s)-1;i>=0;i--) {
        if (s[i]==' ') {
            b=1;
            for (j=i+1;j<=m;j++) printf("%c",s[j]);
            printf(" ");
            m=i-1;
        }
    }
    for (i=0;i<strlen(s);i++)
        if (s[i]==' ') {
            b=1;
            for (j=0;j<=i-1;j++) printf("%c",s[j]);
            break;
        }
    if (b==0) for (i=0;i<strlen(s);i++) printf("%c",s[i]);
    return 0;
}
