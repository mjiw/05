#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	int count=0;
	
	printf("input a string:");
	scanf("%c",&c);
	
	while((c=getchar())!='\n') //�Է� ���ڰ� ���๮�ڰ� ���ö����� �ݺ�  
	{
		if(c>=48&&c<=57){
			count+=1;
		} 
		else{
		
		}
	}
	
	printf("the number of digits is %d",count);


	return 0;
}
