#include<stdio.h>

//Dynamic programming for fibonacci series 
int fib(int n, int dp[]){
	if(n<=1) return n;
	if(dp[n] != -1){
		return dp[n];
	}
	else{
		dp[n] = fib(n-1,dp) + fib(n-2,dp);
	}
	return dp[n];
}


int main(){
	int i,n;
	printf("Enter the number to find that term:- ");
	scanf("%d",&n);
	int dp[n+1];
	for(i=0;i<=n;i++){
		dp[i] = -1;
	}
	printf("\nHere's the term:- %d",fib(n,dp));
}
