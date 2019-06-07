#include <bits/stdc++.h>

using namespace std;

const int MaxN=100+10;
int a[MaxN];
vector <int> less_zero,great_zero,zero;

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		int x;
		cin >> x;
		if (x==0)
			zero.push_back(x);
		else if (x>0)
			great_zero.push_back(x);
		else
			less_zero.push_back(x);
	}
	if (less_zero.size()%2==0){
		int x=*less_zero.rbegin();
		cerr << "x:" << x << endl;
		less_zero.pop_back();
		zero.push_back(x);
	}
	if (great_zero.size()==0){
		int x=*less_zero.rbegin();
		less_zero.pop_back();
		great_zero.push_back(x);
		x=*less_zero.rbegin();
		less_zero.pop_back();
		great_zero.push_back(x);
	}
	cout << less_zero.size() << " ";
	for (int i=0;i<less_zero.size();++i)
		cout << less_zero[i] << " ";
	cout << endl;
	cout << great_zero.size() << " ";
	for (int i=0;i<great_zero.size();++i)
		cout << great_zero[i] << " ";
	cout << endl;
	cout << zero.size() << " ";
	for (int i=0;i<zero.size();++i)
		cout << zero[i] << " ";
}