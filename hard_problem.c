#include<stdio.h>
#include<math.h>
#include<limits.h>


int min(int a, int b) {
    return (a < b) ? a : b;
}

int func(int n,int h[],int dp[]){
	if(n==0) return 0;
	if(dp[n]!=-1){
		return dp[n];
	}
	else{
		int j1 = func(n-1,h,dp)+ abs(h[n]-h[n-1]);
		int j2 = INT_MAX;
		if(n>1){
			j2= func(n-2,h,dp)+ abs(h[n]-h[n-2]);
		}
		dp[n]=min(j1,j2);
	}
	return dp[n];
}

int main(){
	int i,n=6;
	
	int h[] = {30,10,60,10,60,50};
	int dp[n];
	for(i=0;i<n;i++){
		dp[i]=-1;
	}
	printf("%d",func(n-1,h,dp));
}
