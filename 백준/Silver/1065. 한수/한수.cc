#include<iostream>
#include<cstdlib> 
using namespace std;

int main(){
	int N;
	cin>>N;
	int cnt=0;
	char str[4];//itoa 저장용 배열 
	
	//N까지의 수에 대해서 한수인지 판별
	for(int i=1; i<=N; i++){
			//예제 입출력을 보았을 때 1~99 까지는 모두 한수이다.
		if(i<100) cnt++;
		//나머지 경우 한 자리수씩 떼어내어 비교해본다. itoa 함수 사용
		else{
			int dig1,dig10,dig100;	
			int gap1,gap2;
			if(i!=1000){//세 자리 수의 경우 gap을 비교하여 등차인지 확인
				dig1=i%10;
				dig10=(i%100)/10;
				dig100=i/100;
				
				gap1=dig1-dig10;
				gap2=dig10-dig100;
				
				if (gap1==gap2) cnt++;
				else continue;
			}
			else continue; //1000은 한수가 아니므로 
		}	
	}
	cout<<cnt;
}