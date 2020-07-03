#include <stdio.h>

int main() {
    int numbers[10];
    int i, j, k, o, q, max, m, n = 10;  
    // 读入给定的数字
    for(i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    for(j = 0; j < n; j++) {
    	max = j; 
        for(k = j; k < n; k++){
            if(numbers[max] < numbers[k]){
                max = k;
            }
        }
        o = numbers[j];
        numbers[j] = numbers[max];
        numbers[max] = o;
    }
    for(q = 0; q < n; q++) {
        if (q == 9) {
            printf("%d", numbers[q]);
        } else {
            printf("%d ", numbers[q]);
        }
    }

    return 0;
}
