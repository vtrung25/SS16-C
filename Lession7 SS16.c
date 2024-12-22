#include<stdio.h>
void sapXep(int *arr, int size){
	for(int i = 0;i<size; i++){
		for(int j = i +1; j<size; j++){
			if(arr[i]>arr[j]){
				int temp = arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
int main(){
	int arr[6]={19,25,52,9,23,17};
	int size = sizeof(arr);
	sapXep(arr,size);
	printf("mang sau khi sap xep:\n");
	for(int i = 0; i<size; i++){
		printf("%d", arr[i]);
	}
	return 0;
}