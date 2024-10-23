#include<string>
#include<iostream>
using namespace std;

int main(){
	int N;
	int i = 0;
	
	cin>>N;
	
	unsigned int temp = 665;
	string temp_str;
	
	while(i!=N){
		temp++;
		temp_str=to_string(temp);
		if(string::npos!=temp_str.find("666")){
			i++;
		}
	}
	cout<<temp;
}