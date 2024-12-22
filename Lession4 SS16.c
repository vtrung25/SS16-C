#include<stdio.h>
void mang(int *arr, int size);
int main(){
	int arr[5]= {2,5,1,8,9};
	mang(arr,5);
	return 0;
	
}
mang(int *arr, int size){
	for(int i = 0; i<size; i++){
		printf("arr[%d]=%d\n",i,*(arr+i));
	}
}