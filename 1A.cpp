#include <iostream>

using namespace std;

int pow(int n,int k){ if(k==0) return 1; int cnt=pow(n,k/2); if(k%2==0) return cnt*cnt; else return n*cnt*cnt;}

int main (){
	long long n,m,a;
	cin >> m >> n >> a;
	cout << ((m+a-1)/a)*((n+a-1)/a);
}