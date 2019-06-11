#include <iostream>

using namespace std;

int t[15]={2,7,2,3,3,4,2,5,1,2};

int main(){
	int n;
	cin >> n;
	cout << t[n%10]*t[n/10];
}