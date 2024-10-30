#include<bits/stdc++.h>
using namespace std;

unsigned long long d[100][100];

int main(){
	int N;
	cin>>N;
	int **arr=new int *[N+1];
	for(int i=0; i<=N; i++)
		arr[i]=new int [N+1];
		
	for(int i=0; i<N; i++){ //세로 
		for(int k=0; k<N; k++){  //가로 
			int x;
			cin>>x;
			arr[i][k]=x;
		}
	}
	d[0][0]=1;
	for(int i=0; i<N; i++){
		for(int k=0; k<N; k++){
			if(i==N-1&& k==N-1) break;
			
			if(k+arr[i][k]<N) {
				d[i][k+arr[i][k]]+=d[i][k];
			}
			if(i+arr[i][k]<N){
				d[i+arr[i][k]][k]+=d[i][k];
			} 
		}
	}

	cout<<d[N-1][N-1];
}