#include<iostream>
using namespace std;

int main(){
	int T, k, n, tmp=0;
	int arr[15][15]={0};
	cin>>T;
	for(int j=0; j<=14; j++){//세로 
		for(int k=1; k<=14; k++){//가로 
			if(j==0) arr[j][k]=k;
			else{
				for(int l=1; l<=k; l++){
					tmp+=arr[j-1][l];
				}
				arr[j][k]=tmp;
			}
			tmp=0;
		}
	}
	for(int i=0; i<T; i++){
		cin>>k>>n;
		cout<<arr[k][n]<<endl;
	}
}