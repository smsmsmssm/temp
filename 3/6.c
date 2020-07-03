#include <stdio.h>

int main() {
    int matrix[100][100];
    int m, n, i, j;
    
    scanf("%d%d", &m, &n);
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int start = 0, column = n, row = m;
    int cnt = 0;  
    while(start < column && start < row) {
        if(n == 1) {
            for(i = 0; i < m; i++) {
                if (i == m-1){
                    printf("%d", matrix[i][0]);
                } else {
              	  	printf("%d ", matrix[i][0]);
                }
            }
        } else if(m == 1) {
            for(j = 0; j < n; j++) {
                if (j == n - 1){
                    printf("%d", matrix[0][j]);
                } else {
                	printf("%d ", matrix[0][j]);
                }
            }
        } else {
	    	for(j = start; j < column; j++) {
        		printf("%d", matrix[start][j]);
        		cnt++; 
        		if(cnt != m*n) {
        			printf(" "); 
        		}
    		}
    		for(i = start+1; i < row; i++) {
       		 	printf("%d", matrix[i][column-1]);
        		cnt++; 
        		if(cnt != m*n) {
        			printf(" "); 
        		}
    		}		
    		if(start < row-1) {
				for(j = column-2; j >= start; j--) {
       		 		printf("%d", matrix[row-1][j]);
        			cnt++; 
        			if(cnt != m*n) {
        				printf(" "); 
        			}
   				}
   			}
    		if(start < column-1) {
				for(i = row-2; i > start; i--) {
        			printf("%d", matrix[i][start]);
        			cnt++; 
        			if(cnt != m*n) {
        				printf(" "); 
        			}
   				}
   			}
        }
    	start++;
    	column--;
    	row--;
    }

    return 0;
}
