#include<stdio.h>
int X(int a)
{
	if(a == 0 ){
		return 0;
	} else if (a == 1) {
		return 1;
	} else {
		return X(a - 1) + X(a - 2);
	}
}
int main(void)
{
	int a, b = 2;
	printf("please entwer a number!!!!\n");
	scanf("%d", &a);
	while( a < 2){
		printf("please entwer a number!!!!\n");
		scanf("%d", &a);
	}
	int list[a];
	list[0] = 0;
	list[1] = 1;
	/*test1*/
	while( b != (a+1)){
		list[b] =	(list[b-1] + list[b-2]);
		b++;
	}
	printf("answer = %d\n", list[a]);
	/*test2*/
	printf("answer = %d\n", X(a));
	return 0;
}
