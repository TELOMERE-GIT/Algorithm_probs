#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int jx,jy, bx,by; //조규현 좌표, 백승환 좌표
	int jr,br; //조규현 류재명 거리, 백승환 류재명 거리
	 
	int T;
	cin>>T;
	for(int i=0; i<T; ++i){
		cin>>jx>>jy>>jr>>bx>>by>>br;
		double dist=sqrt(abs(jx-bx)*abs(jx-bx)+abs(jy-by)*abs(jy-by));
	
		if((jr+br)<dist) cout<<"0"<<endl; //멀어서 안만나는 경우 
		else if(dist==0 && jr==br) cout<<"-1"<<endl; //겹치는 경우 
		else if(dist==abs(jr-br)) cout<<"1"<<endl; //내접 
		else if((jr+br)==dist) cout<<"1"<<endl; //외접 
		else if(dist<abs(jr-br)) cout<<"0"<<endl; //가까워서 안만나는 경우 
		else cout<<"2"<<endl;
	}
	return 0;
}