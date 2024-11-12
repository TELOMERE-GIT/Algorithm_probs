#include<iostream>
using namespace std;

int main(){
	int c, k, p;
	cin>>c>>k>>p;
	long long int C,ans, sum=0;
	for(int i=0; i<=c; i++){
		C=i*i;
		ans=k*i+p*C;
		sum+=ans;	
	}
	cout<<sum;	
}	