#include<stdio.h>
#include<math.h>


int main() {
    int a[10];
    int i, j, m, n = 10;

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

 
	int temp = 0; //�м����
 
	for(i = 0; i < 10; i++) {//����10��ѭ��
		for(j = i+1; j < 10; j++) {//ѭ���Ƚ�ʣ��ı���
			if(a[i] < a[j]) {//���ǰ��һ�����Ⱥ������󣬽�����������ֵ
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
 
	for(i = 0; i < 10; i++) {//ѭ����������Ժ�Ľ��
		printf("%d",a[i]);
		if(i != 9) printf(" "); 
	}
 return 0;

} 
