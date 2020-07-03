#include <stdio.h>

int main() {
    int numbers[10];
    int i, j, k, m, n = 10;  

    // 读入给定的数字
	for(j = 0; j < 10; j++) {
		scanf("%d", &numbers[j]); 
		for(k = j-1; k >= 0; k--) {
			if(numbers[k] < numbers[k+1]) {
				m = numbers[k];
				numbers[k] = numbers[k+1];
				numbers[k+1] = m;
			}
		}
	}
	
	for(i = 0; i < 10; i++) {
		printf("%d", numbers[i]);
		if(i < 9) {
			printf(" ");
		}
	}
	
    
    return 0;
}
