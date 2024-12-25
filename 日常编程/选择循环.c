#include <stdio.h>

//写一个选择函数zgt 
void select(int zgt[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (zgt[j] < zgt[min]) min = j;
        }
        if (min!= i) {
            int t = zgt[i];
            zgt[i] = zgt[min];
            zgt[min] = t;
        }
    }
}

//定义一个数组lmy 
int main() {
    int lmy[10] = {7 ,2 , 4 , 5 , 2 ,  621, 724 , 2006 ,666 ,8687 };
    select(lmy, 10);
    for (int k = 0; k < 10; k++)
	{
	  printf("%d ", lmy[k]);
    }
	
	return 0;
}
