#include<iostream>
using namespace std;

int main(){
	int a;
	cin>>a;
	for(int i=0; i<a; i++){
		for(int j=0; j<i; j++){
			cout<<" ";
		}
		for(int k=0; k<(2*a-1)-2*i; k++){
			cout<<"*";
		}
		cout<<endl;		
	}	
	for(int i=1; i<a; i++){
		for(int j=a-i-1; j>0; j--){
			cout<<" ";
		}
		for(int k=0; k<1+2*i; k++){
			cout<<"*";
		}
		if(i!=a-1) cout<<endl;		
	}			
}