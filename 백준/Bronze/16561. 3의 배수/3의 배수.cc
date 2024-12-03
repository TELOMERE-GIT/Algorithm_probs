#include<iostream>
using namespace std;

int main(){
	int a,b;
	int cnt=0;
	cin>>a;
	for(int i=3; i<=3000; i+=3){
		for(int j=3; j<=3000; j+=3){
			for(int k=3; k<=3000; k+=3){
				b=i+j+k;
				if(b==a) cnt++;
				else if(b>a) break;
			}
		}
	}
	cout<<cnt;
}