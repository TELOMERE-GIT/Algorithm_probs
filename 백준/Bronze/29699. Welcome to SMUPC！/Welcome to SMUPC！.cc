#include<iostream>
using namespace std;

int main(){
	int N;
	cin>>N;
	
	char str[15]="WelcomeToSMUPC";
	//int x=N%15;
	//cout<<x;
	int findN=N%14;
	if(findN==0) cout<<'C';
	else cout<<str[findN-1];
}