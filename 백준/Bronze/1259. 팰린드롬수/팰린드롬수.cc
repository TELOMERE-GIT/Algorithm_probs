#include<iostream>
#include<string>
using namespace std;

int main(){
	string a;
	bool check;
    while(1){
    	check=true;
    	cin>>a;
    	if(a=="0") return 0;
    	else{
    		int len=a.length();
    		//cout<<"len="<<len<<endl;
    		for(int i=0; i<len/2; i++){
    			if(a[i]==a[len-i-1]) continue;
    			else{
    				check=false;
    				break;
				}
			}
		}
		if(check==true) cout<<"yes";
		else cout<<"no";
		cout<<endl;
	}
}