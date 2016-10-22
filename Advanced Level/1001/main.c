//
//  main.c
//  1001
//
//  Created by Icarus on 16/1/26.
//  Copyright © 2016年 Icarus. All rights reserved.
//

#include<stdio.h>
int main()
{
    int a,b;
    int sum;
    while(scanf("%d%d\n",&a,&b) != EOF){
        sum = a+b;
        if(sum < 0){
            printf("-");
            sum = -sum;
        }
        if(sum>=1000000){
            printf("%d,%03d,%03d\n",sum/1000000, (sum/1000)%1000, sum%1000);
        }
        else if(sum >= 1000){
            printf("%d,%03d\n",sum/1000,sum%1000);
        } else{
            printf("%d\n", sum);
        }  
    }  
    return 0;  
}
/*∏√∫Ø ˝Ω´Õ®π˝µ˜”√int 33Hµƒ0∫≈π¶ƒ‹µ˜”√∂‘ Û±Í∆˜Ω¯––≥ı ºªØ£¨µ˜”√7∫≈∫Õ8∫≈π¶ƒ‹£¨…Ë÷√x∫ÕyŒª÷√µƒ◊Ó–°∫Õ◊Ó¥Û÷µ°£’‚æÕŒ™ Û±Í∆˜“∆∂ØΩ¯––¡À≥ı ºªØ◊º±∏°£”…”⁄0∫≈π¶ƒ‹µ˜”√ «≤‚ ‘ Û±Í«˝∂Ø≥Ã–Ú «∑Ò∞≤◊∞£¨“Ú¥À‘⁄‘À––∏√≥Ã–Ú«∞±ÿ–Î ◊œ»÷¥–– Û±Í«˝∂Ø≥Ã–Úmouse.com£¨»Ùµ˜”√∏√∫Ø ˝÷¥––¡À0∫≈π¶ƒ‹µ˜”√£¨µ±∑µªÿ÷µŒ™0 ±(º¥∑µªÿ≤Œ ˝Œ™0)£¨±Ì æŒ¥∞≤◊∞≥…π¶£¨’‚ø…ƒ‹ « Û±Í∆˜ªÚ«˝∂Ø≥Ã–Úƒ©∞≤◊∞°£’‚ ±≥Ã–ÚΩ´œ‘ æMouse or Mouse Driver Absent£¨≤¢ªÿµΩœµÕ≥°£*/