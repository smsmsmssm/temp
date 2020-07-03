#include <stdio.h>
#include <string.h>
int main() {
    char pms[3];
    char change_pms[100][3];
    int i, j, a, b, c; //文件本来的权限值
    i = j = a = b = c = 0; 
    
    //输入当前文件权限 
    scanf("%s\n", pms);
    //printf("%s", pms);
    //输入添加或者删除的文件权限
    int sum = 0; 
    while (scanf("%s\n",change_pms[sum++]) != EOF) ;
    //判断原文件的权限，用十进制表示
    for (i = 0; i < strlen(pms); i++) {
        if (pms[i] == 'r') {
            b += 4;
        } else if (pms[i] == 'w') {
            b += 2;
        } else {
            b += 1;
        } 
    }
    //printf("%d\n", a);
   /* for (i = 0; i <= strlen(change_pms[i]); i++) 
    {
        j = 0;
        if (change_pms[i][j] == '+') 
        {
           if (change_pms[i][j + 1] == 'r') 
           {
                printf("111");
               b = b + 4;   
            } else if (change_pms[i][j + 1] == 'w') 
           {
                printf("222");
                b = b + 2;
            } else 
           {
               printf("222");
                b = b + 1;
            }
        } 
        /*else {
            printf("00");
            if (change_pms[i][j + 1] == 'r') {
                b = b - 4;   
            } else if (change_pms[i][j + 1] == 'w') {
                b = b - 2;
            } else {
                b = b - 1;
            }
        }*/
    for (i = 0; i < sum-1; i++) {
        j = 0;
        if (change_pms[i][j] == '+') {
            if (change_pms[i][j+1] == 'r' && ((b&4) == 0)) {
               b += 4;   
            } else if (change_pms[i][j+1] == 'w' && ((b&2) == 0)) {
                b += 2;
            } else if (change_pms[i][j+1] == 'x' && ((b&1) == 0)) {
                b += 1;
            }
        } else {
            if (change_pms[i][j+1] == 'r' && ((b&4) > 0)) {
               b -= 4;   
            } else if (change_pms[i][j+1] == 'w' && ((b&2) > 0)) {
                b -= 2;
            } else if (change_pms[i][j+1] == 'x' && ((b&1) > 0)) {
                b -= 1;
            }
        }
    }
    /*for (i = 0; i < 4; i++) {
            printf("%c-%c\n",change_pms[i][0], change_pms[i][1]);
    }*/
    //printf("%d\n", strlen(change_pms[0]);
    //printf("%d\n", b);
    //printf("%d\n", c);
    printf("%d", b);
    return 0;
}
