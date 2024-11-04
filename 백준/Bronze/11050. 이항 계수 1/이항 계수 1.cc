#include<iostream>

using namespace std;

int main(){
    int N,K;
    cin>>N>>K;
    int c=1,d=1;//분자, 분모 값들을 저장할 변수
    int minN_K;
    if(N-K>K) minN_K=K;
    else minN_K=N-K;
    int tmp=1;
    for(int i=0; i<minN_K; i++){
        c*=N;
        N--;
        d*=tmp;
        tmp++;  
    }
    cout<<c/d;
}