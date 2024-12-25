#include <stdio.h>
#define PI 3.1415926

int main(void) {
    double R, H;
    // 输入底面半径和高
    printf("请输入圆柱体的底面半径和高（用空格隔开）：\n");
    scanf("%lf %lf", &R, &H);

    // 计算底面积
    double base_area = PI * R * R;
    // 计算表面积
    double surface_area = 2 * PI * R * R + 2 * PI * R * H;
    // 计算体积
    double volume = PI * R * R * H;

    // 输出结果
    printf("底面积：%lf\n", base_area);
    printf("表面积：%lf\n", surface_area);
    printf("体积：%lf\n", volume);

    return 0;
}
