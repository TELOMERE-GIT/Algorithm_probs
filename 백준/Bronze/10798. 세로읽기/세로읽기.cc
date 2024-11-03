#include<iostream>
#include<string>
using namespace std;

int main(){
	char arr[16][16];
	for(int i=0; i<16; i++){
		for(int j=0; j<16; j++){
			arr[i][j]='.';
		}
	}
	int i=0;
	while(cin.eof()!=true){
		cin.getline(arr[i],16);
		i++;
	}
	for(int i=0; i<16; i++){
		for(int j=0; j<16; j++){
			if(arr[j][i]!='.'&&arr[j][i]!=NULL) cout<<arr[j][i];
		}
	}
}