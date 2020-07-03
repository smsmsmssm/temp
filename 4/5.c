#include <stdio.h>
void swap(int *a, int *b) {
	int temp = *a;
	*a = *b; 
	*b = temp; 
}
int main() {
    int numbers[10];
    int i, j, m, n = 10;

    // 读入给定的数字
    for(i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(numbers[j] < numbers[j+1]){
                swap(&numbers[j], &numbers[j+1]);
            }
        }
    }

    for(m = 0; m < 10; m++) {
        if(m != 9){
            printf("%d ", numbers[m]);
        } else {
            printf("%d", numbers[m]);
        }
        
    }

    return 0;
}
