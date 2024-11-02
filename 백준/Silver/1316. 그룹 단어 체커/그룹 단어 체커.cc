#include<iostream>
#include<string>
using namespace std;
int arr1[100000];
int arr2[100000];
int main(){
	int alp[28]={0,};
	char cha1;
	int cnt=0;
	int n;
	int N;
	int check;
	string S;
	cin>>N;
	for(int i=0; i<N; i++){
		cin>>S;
		check=0;
		for(int j=0; j<28; j++){
			alp[j]=0;
		}
		for(int k=0; k<S.length(); k++){
			cha1=S[k];
			n=cha1-'a';
			if(k>0&&alp[n]==1&&S[k-1]==S[k]){
				continue;
			}
			else if(alp[n]==0){
				alp[n]=1;
			}
			else if(k>0&&alp[n]==1&&S[k-1]!=S[k]){
				check=1;
				break;
			}
		}
		if(check==0) cnt++;
	}
	cout<<cnt;
}