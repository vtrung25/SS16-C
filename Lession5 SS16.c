#include<stdio.h>
void mang(int *arr, int size, int index, int value1);
int main(){
	int arr[5]={2,5,1,8,9};
	int value2, index;
	printf("nhap vi tri muon sua: ");
	scanf("%d", &index);
	if (index<0||index>=5){
		printf("khong co vi tri nay trong mang\n");
		return 1;
	}
	printf("nhap gia tri muon sua: ");
	scanf("%d", &value2);
	mang(arr,5,index,value2);
	return 0;
}
void mang(int *arr, int size, int index, int value1){
	arr[index-1]=value1;
	for(int i=0; i<5; i++){
		printf("arr[%d]=%d\n", i,arr[i]);
	}
}