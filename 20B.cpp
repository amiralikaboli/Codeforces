#include <bits/stdc++.h>

using namespace std;

int main(){
	double a,c;
	long long b;
	cin >> a >> b >> c;
	long long delta=b*b-4*a*c;
	cout << fixed << setprecision(12);
	if (a==0){
		if (b==0 && c==0)
			cout << -1;
		else if (b==0 && c!=0)
			cout << 0;
		else if (b!=0){
			cout << 1 << endl;
			cout << -c/b;
		}
	}
	else if (delta<0){
		cout << 0;
	}
	else if (delta==0){
		cout << 1 << endl;
		cout << -b/(2*a);
	}
	else{
		double r1=(sqrt(delta)+b)/(-2*a);
		double r2=(sqrt(delta)-b)/(2*a);
		cout << 2 << endl;
		cout << min(r1,r2) << endl;
		cout << max(r1,r2) << endl;
	}
}