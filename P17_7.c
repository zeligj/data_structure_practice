#include<stdio.h>
#include<stdlib.h>
void F(int a)
{
	int b = 1;
	if (a != 1){
		b *= a;
		return F(--a);
	} else {
		printf("answer = %d\n", b);
	}
}

int main(void){
	int a, b = 1;
	printf("please enter a number!:");
	scanf("%d", &a);
	/*test 1*/
	if(a <=1){
		printf("answer = %d\n", b);
	} else {
		while(a != 0){
			b *= a--;
		}
		printf("answer = %d\n", b);
	}
	/*test 2*/
	if(a <=1){
		printf("answer = %d\n", b);
	} else {
		F(a);
	}
	return 0;
}
