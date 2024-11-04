#include <iostream>

using namespace std;

int main(void){
    
    int N;
    cin>>N;
    
    int arr[7];
    for(int i=0; i<8; i++){
        arr[7-i]=N%2;
        N=N/2;
    }
    
    int ans=0;
    for(int i=0; i<8; i++){
        if(arr[i]==1){
            ans++;
        }
    }
    
    cout<<ans;
}