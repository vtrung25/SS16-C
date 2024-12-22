#include<stdio.h>
void search(int *arr, int size, int value);
int main(){
	int arr[5]={2,5,1,9,10};
	int a;
	printf("nhap gia tri can tim: ");
	scanf("%d", &a);
	search(arr,5,a);
	return 0;
}
void search(int *arr, int size, int value){
	int flag = 0;
	for(int i = 0;i<size;i++){
		if(arr[i]==value){
			printf("Gia tri %d o vi tri thu %d\n", value, i+1);
			flag = 1;
			break;
		}
	}
	if(!flag){
		printf("khong co gia tri nay trong mang\n", value);
	}
}