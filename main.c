#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num=0;
	int m=0;
	
	printf("���� �ϳ��� �Է��Ͻÿ�:");
	scanf("%d",&num);
	
	if(num>0){
		printf("���밪�� %d�Դϴ�.",num);
	}
	else if(num<0){
		m=num*-1;
		printf("���밪�� %d�Դϴ�.",m);
	}
	else{
		printf("0�Դϴ�.");
	}
	return 0;
}
