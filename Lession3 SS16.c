#include<stdio.h>
int sum(int *a, int *b);
int main(){
	int a = 25;
	int b = 9;
	sum(&a,&b);
	return 0;
	
}
sum(int *a, int *b){
	int result=*a+*b;
	printf("tong 2 so a va b la %d", result);
	return result;
}