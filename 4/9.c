#include <stdio.h>

void swap(int *a, int *b) {
    int c;
    if(*a <= *b){
        c = *a;
        *a = *b;
        *b = c;
    }
}

int main() {
    int numbers[10];
    int i, j, m, n = 10;
    
    // �������������
    for(i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    for(i = 0; i < n; i++) {
        for(j = 0; j < n-1; j++) {
            swap(&numbers[j], &numbers[j + 1]);
        }
    }
    for(i = 0; i < n; i++) {
        printf("%d", numbers[i]);
        if(i != n - 1) printf(" ");
    }
    


    return 0;
}
