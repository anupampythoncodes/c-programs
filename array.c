#include<stdio.h>
#include<conio.h>
int main(){
	int i,size=5;
	int arr[size];
	for(i=0;i<size;i++){
		arr[i]=i;
	}
	for(i=0;i<size;i++){
		printf("%d",arr[i]);
	}
	size++;
	arr[size-1]=5;
	for(i=0;i<size;i++){
		printf(" %d",arr[i]);
	}
	
}
