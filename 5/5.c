#include <stdio.h>
#include <string.h>
void swap (char *b, char *c);
int main() {
    char name[10][21];
    int i, j, m = 10;
    for(i = 0; i < m; i++) {
        scanf("%s", name[i]);    
    }
    for(j = 0; j < m; j++) {
        for(i = 0; i < m-1; i ++) {
            if(strcmp(name[i], name[i + 1]) > 0){
                swap(name[i], name[i + 1]);    
            }
        }
    }
    for(i = 0; i < m; i++) {
        printf("%s", name[i]);  
		if(i != m-1) printf("\n");   
    }
    return 0;
}


void swap(char b[], char c[]) {
    int i; 
    char ch; 
    for(i = 0; i <= 20; i++) { 
    	ch = b[i];
    	b[i] = c[i];
    	c[i] = ch;
    }
}
