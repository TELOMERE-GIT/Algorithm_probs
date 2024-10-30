#include<iostream>
using namespace std;

int dp[12];
int main(){
	int T;
	int n;
	cin>>T;
	
	dp[1]=1;
	dp[2]=2;
	dp[3]=4;
	
	for(int k=1; k<12; k++ ){
		if(dp[k]==0){
			dp[k]=dp[k-3]+dp[k-2]+dp[k-1];
		}
	}	
	for(int i=0; i<T; i++){
		cin>>n;
		cout<<dp[n]<<endl;
	}
}