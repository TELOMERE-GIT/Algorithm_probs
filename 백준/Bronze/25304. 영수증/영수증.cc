#include<iostream>

using namespace std;

int main(){
    int sum;
    int N;

    cin>>sum;
    cin>>N;
    
    int Result=0;
    
    for(int i=0; i<N; i++){
        int price;
        int num;
        
        cin>>price>>num;

        Result+= price*num;
    }
        if(Result==sum) cout<<"Yes";
        else cout<<"No";
}
