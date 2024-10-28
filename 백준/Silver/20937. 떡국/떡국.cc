#include<bits/stdc++.h>
using namespace std;

bool desc(int a, int b){
	return a>b;
}

int main(){
	int N;
	cin>>N;
	int arr1[50001]={0};
	for(int i=0; i<N; i++){
		int x;
		cin>>x;
		arr1[x]++;
	}
	sort(arr1,arr1+50001, desc);
	cout<<arr1[0];
}