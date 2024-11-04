#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int t,n, m;
	cin>>t;
	
	for(int i=0; i<t; i++){
		cin>>n>>m;
		if(n>m/2) n=m-n;
		unsigned long long sun=1, mom=1;
		for(int i=0; i<n; i++){
			sun*=m;
			mom*=i+1;
			m--;
		}
		
		printf("%lld",sun/mom);
		if(i!=t-1) cout<<endl;
	}
}