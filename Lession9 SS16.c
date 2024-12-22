#include<stdio.h>
void add(int *arr, int *size, int index, int value);
int main(){
	int arr[5]={2,5,1,8,7};
	int size = 5;
	int a, index;
	printf("nhap vi tri muon them: ");
	scanf("%d", &index);
	if(index<0||index>size){
		printf("khong hop le\n");
		return 1;
	}
	printf("nhap gia tri muon them: ");
	scanf("%d", &a);
	add(arr, &size, index, a);
	printf("mang sau khi them gia tri: \n");
	for (int i = 0; i<size; i++){
		printf("arr[%d]=%d\n", i, arr[i]);
		
	}
	return 0;
}
void add(int *add, int *size, int index, int value){
	for(int i = *size; i>index; i--){
		arr[i]=arr[i-1];
		
	}
	arr[index]=value;
	(*size)++;
}