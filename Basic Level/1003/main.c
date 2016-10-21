//
//  main.c
//  1003
//
//  Created by Icarus on 16/1/24.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    int i,n,j,yn,pp,cp,ca,pt,ct;
    char s[200];
    
    scanf("%d",&n);
    
    for (i=1;i<=n;i++) {
        scanf("%s",s);
        yn=1;
        pp=0; cp=0;
        ca=0; pt=0; ct=0;
        
        for (j=0;j<strlen(s);j++) {
                switch (s[j]) {
                case 'P':
                    pp=j;
                    cp++;
                    break;
                case 'A':
                    ca++;
                    break;
                case 'T':
                    pt=j;
                    ct++;
                    break;
            }
        }
        if (cp+ca+ct!=strlen(s) || pt-pp<=1 || cp>1 || ct>1 || pp*(pt-pp-1)!=strlen(s)-pt-1) printf("NO\n");
        else printf("YES\n");
    }
}
