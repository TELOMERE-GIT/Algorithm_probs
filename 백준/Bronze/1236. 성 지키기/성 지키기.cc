#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int h,v;
	cin>>v>>h;//(세로 가로)	
	int arrh[50]={0,};
	int arrv[50]={0,};
	for(int i=0; i<v; i++){
		for(int j=0; j<h; j++){
			char x;
			cin>>x;
			if(x=='X') {
				arrh[j]=1;
				arrv[i]=1;
			}
		}
	}
	int cnth=0,cntv=0;
	for(int i=0; i<h; i++){
		if (arrh[i]==0) cnth++;
	}
	for(int i=0; i<v; i++){
		if (arrv[i]==0) cntv++;
	}
	int ans=(cnth<cntv)?cntv:cnth;
	cout<<ans;
}