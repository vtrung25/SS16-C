#include<stdio.h>
int main(){
	int a = 25;
	int *aPtr=&a;
	printf("dia chi con tro dang tro toi la : %lu\n", aPtr);
	printf("dia chi cua bien a la : %lu", &a);
	return 0;
}