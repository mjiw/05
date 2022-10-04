#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num=0;
	int m=0;
	
	printf("정수 하나를 입력하시오:");
	scanf("%d",&num);
	
	if(num>0){
		printf("절대값은 %d입니다.",num);
	}
	else if(num<0){
		m=num*-1;
		printf("절대값은 %d입니다.",m);
	}
	else{
		printf("0입니다.");
	}
	return 0;
}
