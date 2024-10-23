#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int R, C, N;
	cin>>R>>C>>N;
	int ans=0;
	int sit[5000]={};
	for(int i=0; i<R; i++){
		int check=0;
		for (int j=0; j<C; j++){
			scanf("%1d",&sit[j]);
			if(sit[j]==0) {
				check++;
			}
			else check=0;
			if(check>=N) {
				ans++;	
			}
		}
	}
	cout<<ans;
}