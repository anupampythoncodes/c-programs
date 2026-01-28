#include<stdio.h>
#include<conio.h>
int selection(int arr[],int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				int temp = arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
int main(){
	int i,n;
	printf("enter size of array ");
	scanf("%d",&n);
	int arr[n];
	printf("\nenter the elemensts of array- ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	selection(arr,n);
	printf("\nsorted array");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
