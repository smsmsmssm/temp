#include <stdio.h>
#include <string.h>
int main() {
    int i = 0;
    int counter = 0;
	char temp[10][3];
    char name[3];
    char status[3] = {0}; 
    while (scanf("%s", name) != EOF){
        strcpy(temp[i], name);
        i++;
    }
    
    int j, a; 
    for (j = 0; j < 3; j++){
        //printf("%d\n", (temp[0][j] == 'w'));
        if((temp[0][j] == 'w')){
            counter += 2;
            status[1] = 1; 
    	} else if((temp[0][j] == 'r')){
            counter += 4;
            status[2] = 1; 
    	} else if((temp[0][j] == 'x')){
            counter += 1;
            status[0] = 1; 
    	}
    }
    for(a = 0; a < 10; a++){
        if ((temp[a][0] == '+' && temp[a][1] == 'r' && status[2] == 0)) {
            counter += 4;
            status[2] = 1; 
        } else if((temp[a][0] == '+' && temp[a][1] == 'w' && status[1] == 0)){
            counter += 2;
            status[1] = 1; 
        } else if((temp[a][0] == '+' && temp[a][1] == 'x' && status[0] == 0)){
            counter += 1;
            status[0] = 1; 
        } else if((temp[a][0] == '-' && temp[a][1] == 'r' && status[2] == 1)){
            counter -= 4;
            status[2] = 0; 
        } else if((temp[a][0] == '-' && temp[a][1] == 'w' && status[1] == 1)){
            counter -= 2;
            status[1] = 0; 
        } else if((temp[a][0] == '-' && temp[a][1] == 'x' && status[0] == 1)){
            counter -= 1;
            status[0] = 0; 
        }
    }
    
    printf("%d", counter);
    return 0;
}
