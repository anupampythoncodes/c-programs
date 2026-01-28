#include<stdio.h>

int fact(int n){
	if(n==0){
		return 0;
	}
	else if(n==1){
		return 1;
	}
	else{
		return fact(n-1)+fact(n-2);
	}
}
int main(){
	printf("%d",fact(10));
}
