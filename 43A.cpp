#include <iostream>

using namespace std;

int a=0,b=0;

int main (){
	int n;
	cin >> n;
	string s,r,t;
	cin >> t;
	++a;
	for (int i=0;i<n-1;++i){
		cin >> s;
		if (s==t)
			++a;
		else{
			r=s;
			++b;
		}
	}
	if (a>b)
		cout << t;
	else
		cout << r;
}