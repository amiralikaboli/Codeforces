#include <bits/stdc++.h>

using namespace std;

int main(){
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	int df;
	int kmm;
	if (a*d>b*c){
		df=a*d-b*c;
		kmm=__gcd(df,a*d);
	}
	else{
		df=b*c-a*d;
		kmm=__gcd(df,b*c);
	}
	if (a*d>b*c)
		cout << df/kmm << "/" << a*d/kmm;
	else
		cout << df/kmm << "/" << b*c/kmm; 
}