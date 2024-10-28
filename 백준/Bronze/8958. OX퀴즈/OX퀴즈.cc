#include<iostream>
#include<string>
using namespace std;

int main(){
	int x;
	cin>>x;
	
	for(int j=0; j<x; j++){
		string arr;
		cin>>arr;
		int len=arr.length();
		int res=0;
		int sum=0;
		for (int i=0; i<len; i++){
			if(i==0&&arr[i]=='O'){
				sum++;
				res+=sum;
			}
			else if(i>0){
				if(arr[i]=='O'&&sum==0){
					sum++;
					res+=sum;
				}
				else if(arr[i]==arr[i-1]&&sum!=0){
					sum++;
					res+=sum;
				}
				else{
					sum=0;
				}
			}
			//cout<<res;
		}
		cout<<res<<endl;
	}

}