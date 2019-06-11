#include <iostream>

using namespace std;

const int INF=1000*1000*1000+7;

int main (){
	long long x,y,n;
	cin >> x >> y >> n;
	if (n%6==1){
		cout << (INF+x)%INF;
		return 0;
	}
	if (n%6==2){
		cout << (INF+y)%INF;
		return 0;
	}
	if (n%6==3){
		cout << (2*INF+y-x)%INF;
		return 0;
	}
	if (n%6==4){
		cout << (INF-x)%INF;
		return 0;
	}
	if (n%6==5){
		cout << (INF-y)%INF;
		return 0;
	}
	if (n%6==0){
		cout << (2*INF+x-y)%INF;
		return 0;
	}
}