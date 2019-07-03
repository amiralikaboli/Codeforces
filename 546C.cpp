#include <bits/stdc++.h>

using namespace std;

deque <int> a,b;

int fact(int n){
	if (n==1)
		return 1;
	return fact(n-1)*n;
}

int main(){
	int n;
	cin >> n;
	int t1,t2;
	cin >> t1;
	for (int i=0;i<t1;++i){
		int x;
		cin >> x;
		a.push_back(x);
	}
	cin >> t2;
	for (int i=0;i<t2;++i){
		int x;
		cin >> x;
		b.push_back(x);
	}
	for (int i=0;i<fact(n);++i){
		if (a.size()==n){
			cout << i << " " << 1;
			return 0;
		}
		if (b.size()==n){
			cout << i << " " << 2;
			return 0;
		}
		if (a[0]>b[0]){
			a.push_back(b[0]);
			a.push_back(a[0]);
			a.pop_front();
			b.pop_front();
		}
		else if (a[0]<b[0]){
			b.push_back(a[0]);
			b.push_back(b[0]);
			a.pop_front();
			b.pop_front();	
		}
		//cerr << a.size() << " " << b.size() << endl;
	}
	cout << -1;
}