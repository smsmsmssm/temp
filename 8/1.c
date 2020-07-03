#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d\n", &n);

    char names[n][101];
    char max[101];

    int z;.
    for (int i = 0; i < n; i++) { //gets(names[i]);
         z = 0;
         while (scanf("%c", &names[i][z]) != EOF && names[i][z] != '\n') {
             z++;
         }
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = i; j < n; j++) {
            max == names[j];
            if (strlen(names[i]) > strlen(names[j])) {
                strcpy(max, names[i]);
            }
        }
    }
    
    printf("%s", max);
    
    return 0;
}
