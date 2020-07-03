#include <stdio.h>
#include <string.h>


int main() {
	char before[100];
    scanf("%s", before);
    char calculate[100][100];
    char status[3] = {0}; 
    int i, count=0;
    while(scanf("%s",calculate[count]) != EOF) {
        count++;
    }
    
    int result=0;
    for(i = 0; i < 3; i++) {
        if(before[i] == 'r') {
			result += 4;
			status[2] = 1; 
		}
        if(before[i] == 'w') {
			result += 2;
			status[1] = 1; 
		}
        if(before[i] == 'x') {
			result += 1;
			status[0] = 1; 
		}
    }
    //计算后的结果
    for(i = 0; i < count; i++) {
    	if(calculate[i][0] == '+') {
            if(calculate[i][1] == 'r' && status[2] == 0) {
				result += 4; 
				status[2] == 1; 
			}
            if(calculate[i][1] == 'w' && status[1] == 0) {
				result += 2;
				status[1] == 1; 
			}
            if(calculate[i][1] == 'x' && status[0] == 0) {
				result += 1;
				status[0] == 1; 
			}
        } else if(calculate[i][0] == '-') {
            if(calculate[i][1] == 'r' && status[2] == 1) {
				result -= 4;
				status[2] == 0; 
			}
            if(calculate[i][1] == 'w' && status[1] == 1) {
				result -= 2;
				status[1] == 0;
			}
            if(calculate[i][1] == 'x' && status[2] == 1) {
				result -= 1;
				status[0] == 0;
			}
        }    
    }
    
    printf("%d",result);
    return 0;
}
