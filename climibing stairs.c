THIS IS A CODE USED FOR LEETCODE IN DYNAMIC PROGRAMMING (DP) AND I WROTE IT IN THE C PROGRAMMING APPLICATION 
its logic is easy and the code is easy to read too
#include<stdio.h>
int main(){
	int n;
	 
	printf("enter number of steps: ");
	scanf("%d",&n);
	int dp[n+1];
	dp[1]=1;
	dp[2]=2;
	//i is the number of different ways to reach stairs number i
	//
	for(int i=3;i<=n;i++){
		dp[i]=dp[i-1]+ dp[i-2];
	}	
	
	printf("number of ways: %d",dp[n]);
}
