#include <bits/stdc++.h>

using namespace std;

double m[10],w[10],p[10];
double hs,hu;

int main(){
	for (int i=0;i<5;++i)
		cin >> m[i];
	for (int i=0;i<5;++i)
		cin >> w[i];
	cin >> hs >> hu;
	p[0]=500;
	p[1]=1000;
	p[2]=1500;
	p[3]=2000;
	p[4]=2500;
	double sum=0;
	for (int i=0;i<5;++i)
		sum+=max(.3*p[i],(1-m[i]/250)*p[i]-50*w[i]);
	sum+=hs*100-hu*50;
	cout << sum;
}