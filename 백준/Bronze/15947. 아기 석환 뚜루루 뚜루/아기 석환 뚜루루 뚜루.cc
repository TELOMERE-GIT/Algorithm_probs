#include<iostream>
using namespace std;

int main(){
	int a,share;
	cin>>a;
	share=a/14;
	if(a%14==1||a%14==13){
		cout<<"baby";
		}
	else if(a%14==2||a%14==0){
		cout<<"sukhwan";
		}
	else if(a%14==3||a%14==7||a%14==11){
			cout<<"tu";
			share+=2;
			if(share<5){
				for(int i=0; i<share; i++){
					cout<<"ru";
				}
			}
			else{
				cout<<"+ru*"<<share;
			}		
		}
	else if(a%14==4||a%14==8||a%14==12){
			cout<<"tu";
			share+=1;
			if(share<5){
				for(int i=0; i<share; i++){
					cout<<"ru";
				}
			}
			else{
				cout<<"+ru*"<<share;
			}	
		}
	else if(a%14==5){
		cout<<"very";
		}
	else if(a%14==6){
		cout<<"cute";
		}			
	else if(a%14==9){
		cout<<"in";
		}
	else if(a%14==10){
		cout<<"bed";
		}				
}	