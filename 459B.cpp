#include <iostream>

using namespace std;

int b[222222];

int main (){
	int x=0,m=1000*1000*1000+10;
	long long t_x=0,t_m=0;
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		cin >> b[i];
		if (x==b[i])
			++t_x;
		if (x<b[i]){
			x=b[i];
			t_x=1;
		}
		if (m==b[i])
			++t_m;
		if (m>b[i]){
			m=b[i];
			t_m=1;
		}
	}
	cout << x-m << " ";
	if (x==m)
		cout << t_x*(t_x-1)/2;
	else
		cout << t_x*t_m;
}