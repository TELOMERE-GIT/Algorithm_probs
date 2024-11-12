#include<iostream>
using namespace std;

int main(){
	int arr[6];
	for(int i=0; i<6; i++){
		cin>>arr[i];
	}
	int ansx, ansy;
	if(arr[0]==arr[2]) ansx=arr[4];
	else if(arr[0]==arr[4]) ansx=arr[2];
	else ansx=arr[0];
	
	if(arr[1]==arr[3]) ansy=arr[5];
	else if(arr[1]==arr[5]) ansy=arr[3];
	else ansy=arr[1];
	
	cout<<ansx<<" "<<ansy;
}