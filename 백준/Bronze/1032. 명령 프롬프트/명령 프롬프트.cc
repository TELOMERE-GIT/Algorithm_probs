#include<iostream>
#include<string>
using namespace std;

int main(){
    string input;
    int N;
    cin>>N;
    char arr[51];
    cin>>input;
    int len=input.length();
    for(int i=0; i<len; i++){
    	arr[i]=input[i];
	}
	for(int i=0; i<N-1; i++){
		cin>>input;
		for(int i=0; i<len; i++){
    		if(arr[i]!=input[i]) arr[i]='?';
		}
	}
	for(int i=0; i<len; i++){
		cout<<arr[i];
	}
}