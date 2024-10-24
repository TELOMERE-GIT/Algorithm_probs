#include <iostream>
using namespace std;

int rec_splt_sum(int N){
	if(N/10==0) return N;
	else{
		return N%10+rec_splt_sum(N/10);
	}
}


int main(){
	int N;
	cin>>N;
	int N_cop=N;
	int cnt=0;
	int sum=0;
	while(N>0){
		N=N/10;
		cnt++;
	}
	N=N_cop;
	
	for(int i=N-cnt*10; i<N; i++){
		if(i+rec_splt_sum(i)==N){
			cout<<i;
			return 0;
		}
	}
	cout<<"0";
}