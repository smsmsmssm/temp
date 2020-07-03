#include <stdio.h>
#include <math.h>


int main() {
    int matrix[100][100];
    int m, n, i, j, x;
    scanf("%d %d", &m, &n);
    for(i = 0; i < m; i++) {
    	for(j = 0; j < n; j++) {
    		scanf("%d", &matrix[i][j]);
		}
	}
	x = 0;
	int cnt = 0; 
	while(m-2*x >= 0 && n-2*x >= 0) {
		for(i = x; i <= n-1-x; i++) {
			printf("%d", matrix[x][i]);
			cnt++; 
			if(cnt != m*n) {
				printf(" "); 
			}
		}
		for(j = x+1; j <= m-1-x; j++) {
			printf("%d", matrix[j][n-1-x]);  
			cnt++; 
			if(cnt != m*n) {
				printf(" "); 
			}
		}
		if(m-2*x > 1) {
			for(i = n-2-x; i >= x; i--) {
				printf("%d", matrix[m-1-x][i]);
				cnt++; 
				if(cnt != m*n) {
					printf(" "); 
				}
			}
		}
		if(n-2*x > 1) {
			for(j = m-2-x; j >= x+1; j--) {
				printf("%d", matrix[j][x]);		
				cnt++; 
				if(cnt != m*n) {
					printf(" "); 
				}
			}
		}
		x++;
	}
    return 0;
}
