#include<stdio.h>
#include<conio.h>
int binary(int a[],int key,int low,int high){	
	while(low<=high){
		int mid = (low +high)/2;
		if(a[mid]==key){
	    return mid;
		}
		else if(a[mid]>key){
			high = mid-1;
		}
		else{
			low = mid+1;
		}
	}
	return -1;
}
int main(){
	int key= 3;
	int n= 10;
	int i,low=0,high=9;
	int a[n];
	for(i=0;i<n;i++){
		a[i]=i;
	}
	int result = binary(a,key,low,high);
	if(result ==-1){
		printf("element not found");
	}
	else{
		printf("element found at %d",result);
	}
}
