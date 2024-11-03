#include<iostream>
#include<string>
using namespace std;

int main(){
	//string arr[8]={"c=","c-","dz=","d-","lj","nj","s=","z="};
	string a;
	cin>>a;
	int cnt=0;
	for(int i=0; i<a.length(); i++){
		if(a[i]=='c'){
			if(a[i+1]=='='||a[i+1]=='-'){
				cnt++;
				i++;
			}
			else cnt++;
		}
		else if(a[i]=='d'){
			if(a[i+1]=='-'){
				cnt++;
				i++;
			}
			else if(a[i+1]=='z'&&a[i+2]=='='){
				cnt++;
				i+=2;
			}
			else cnt++;
		}
		else if(a[i]=='l'){
			if(a[i+1]=='j'){
				cnt++;
				i++;
			}
			else cnt++;
		}
		else if(a[i]=='n'){
			if(a[i+1]=='j'){
				cnt++;
				i++;
			}
			else cnt++;
		}
		else if(a[i]=='s'){
			if(a[i+1]=='='){
				cnt++;
				i++;
			}
			else cnt++;
		}
		else if(a[i]=='z'){
			if(a[i+1]=='='){
				cnt++;
				i++;
			}
			else cnt++;
		}
		else{
			cnt++;
		}
	}
	cout<<cnt;
}