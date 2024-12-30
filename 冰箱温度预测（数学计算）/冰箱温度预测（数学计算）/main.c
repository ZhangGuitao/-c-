//  main.c
//  冰箱温度预测（数学计算）
//
//  Created by 小张621 on 2024/12/21.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    float t=0,h=0,m=0,T=0;
    
    printf("请输入时间h,m: ");
    scanf("%f %f",&h,&m);
    
    t=h+m/60;
    T=(4*t*t)/(t+2)-20;
    
    printf("%.2f\n",T);
    return 0;
}
