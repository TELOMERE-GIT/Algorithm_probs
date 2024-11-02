#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	int x;
	cin>>x;
	int arrN[20000]={0,};
	int arrM[20000]={0,};
	int A,B;
	int amax=-1;
	int bmin=2147483647;
	for(int i=0; i<x; i++){
		int cnt=0;
		cin>>A>>B;
		for(int j=0; j<A; j++){
			cin>>arrN[j];
			if(amax<arrN[j]) amax=arrN[j];
			if(arrN[j]==1&&j!=0) {
				A--, j--;
			}
		}
		for(int j=0; j<B; j++){
			cin>>arrM[j];
			if(arrM[j]<bmin) bmin=arrM[j];
			if(arrM[j]>amax) {
				B--,j--;
			}
		}
		sort(arrM,arrM+B);
		for(int j=0; j<A; j++){
			if(arrN[j]<bmin) continue;
			for(int k=0; k<B; k++){
				if(arrN[j]>arrM[k]) cnt++;
				else break;
			}
		}
		cout<<cnt<<endl;
	}
}