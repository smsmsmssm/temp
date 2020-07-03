#include <stdio.h>
#include <math.h>

void swap(int*a,int*b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main() {
    int numbers[100];
    int i, j, m, n = 10;  
    
    // 读入给定的数字
    for(i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
        for(j = i; j >= 1; j--) {
        	if(numbers[j] > numbers[j-1]) {
            	swap(&numbers[j], &numbers[j-1]);
        	}
        }
    }
    
    for(m = 0; m < 10; m++){
        printf("%d", numbers[m]);
        if(m != 9) {
            printf(" ");
        }
    }
    return 0;
}
