#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#define MAX_SIZE 101
#define SWAP(x, y, t) ((t) = (x), (x) = (y), (y) = (t))
void sort(int [], int);
void main(void)
{
	int i, n;
	int list[MAX_SIZE];
	printf("Enter the number of numbers to generate: ");
	scanf("%d", &n);
	if(n < 1 || n > MAX_SIZE) {
		fprintf(stderr, "Improper value of n\n");
		exit(EXIT_FAILURE);
	}
	srand(time(NULL));
	for(i = 0; i < n; i++) {
		list[i] = rand() % 1000;
		printf("%d ", list[i]);
	}
	sort(list, n);
	printf("\n\nSorted array:\n");
	for(i = 0; i < n; i++){
		printf("%d ",list[i]);
	}
	printf("\n");
}
void sort(int list[], int n){
	int temp =0, min = 0, j;
	for(int i = 0; i < (n -1); i++){
		min = i;
		for(int j = 1; j < n; j++){
			if(list[j] < list[min]){
				min = j;
			}
			SWAP(list[i], list[min], temp);
		}
	}
}
