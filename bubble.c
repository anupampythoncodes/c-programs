#include<stdio.h>
#include<stdlib.h>

int bubble(int arr[],int n){
	int i,j,m;
	for(i=0;i<n-1;i++){
		 m=-1;
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				m=0;
			}
		}
		if(m == -1){
			break;
		}
	}
	return arr[n];	
}
int main(){
	int n,i;
	printf("enter the size of array\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements of array - \n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	bubble(arr,n);
	printf("sorted array\n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
