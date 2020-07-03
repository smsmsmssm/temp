#include <stdio.h>

int main() {
    int matrix_a[10][10];
    int matrix_b[10][10];
    int m, n;
	scanf("%d%d", &m, &n);
    int i, j, digit;
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix_a[i][j]);
        }
    }
	for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            scanf("%d", &matrix_b[i][j]);
        }
    }
    int sum[m][m];
    for(i = 0; i < m; i++) {
        for(j = 0; j < m; j++) {
            sum[i][j] = 0;
        }
    }
    for(i = 0; i < m; i++) {
        for(j = 0; j < m; j++) {
            for(digit = 0; digit < n; digit++)
            sum[i][j] = sum[i][j] + matrix_a[i][digit] * matrix_b[digit][j];
        }
    }
    for(i = 0; i < m; i++) {
        for(j = 0; j < m; j++) {
            printf("%d", sum[i][j]);
            if(j != m - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
