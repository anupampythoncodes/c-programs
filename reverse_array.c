#include<stdio.h>
#include<stdlib.h>
int size= 10;
int i;
int del_start(int arr[]){
	for(i= 0;i<size;i++){
		arr[i] = arr[i+1];
	}size--;
	return arr[size];
}

int reverse(int arr[]){
	int temp;
	for(i=0;i<size/2;i++){
		temp = arr[i];
		arr[i]= arr[size-1-i];
		arr[size -i- 1] = temp;
	}
	return arr[size];
}
int del_end(int arr[]){
	size--;	
}
int del_position(int arr[]){
	int position;
	printf("\nenter the position");
	scanf("%d",&position);
	for(i=position;i<size;i++){
		arr[i]=arr[i+1];
	}
	size--;
	return arr[size];
}
int main(){
	int arr[size];
	for(i=0;i<10;i++){
		arr[i]=i;
	}
	reverse(arr);
//	del_start(arr);
//	del_end(arr);
	del_position(arr);
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	
}
