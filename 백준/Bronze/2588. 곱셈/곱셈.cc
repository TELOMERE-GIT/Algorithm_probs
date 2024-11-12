#include<iostream>
using namespace std;

void insert(int x,int* arr){
	arr[2]=x-((x/10)*10);
	arr[1]=(x-(x/100)*100)/10;
	arr[0]=x/100;
}

int main(){
	int arr[3],ans[4];
	int tmp1,tmp2=0,a,b,x=3;
	cin>>a>>b;
	insert(b,arr);
	for(int k=2; k>=0; k--){
		ans[2-k]=a*arr[k];
	}
	ans[3]=ans[0]+10*ans[1]+100*ans[2];
	for(int i=0; i<4; i++){
		cout<<ans[i]<<endl;
	}
}