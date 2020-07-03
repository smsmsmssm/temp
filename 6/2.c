#include <stdio.h>
#include <string.h>
int main() {
    int r, w, x, i; 
    r = w = x = 0; 
    char sign[3];
    char temp[2];
    scanf("%s\n", sign);
    for (i = 0; i < strlen(sign); i++) {
        if (sign[i] == 'r') {
            r = 1;
        }
        if (sign[i] == 'w') {
            w = 1;
        }
        if (sign[i] == 'x') {
            x = 1;
        }
    }
    
    while (scanf("%s", temp) != EOF) {
        if (strcmp(temp, "+x") == 0 && x == 0) {
            x++;
        }
        if (strcmp(temp, "-x") == 0 && x == 1) {
            x--;
        }
        if (strcmp(temp, "+r") == 0 && r == 0) {
            r++;
        } 
        if (strcmp(temp, "-r") == 0 && r == 1) {
            r--;
        }
		if (strcmp(temp, "+w") == 0 && w == 0) {
            w++;
        }
		if (strcmp(temp, "-w") == 0 && w == 1) {
            w--;
        }
    }
    
    printf("%d\n", r*4 + w*2 + x);

    return 0;
}
