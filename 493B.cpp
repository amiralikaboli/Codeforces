#include <bits/stdc++.h>

using namespace std;

vector <int> first,sec;

int main(){
	int n;
	cin >> n;
	int last=0;
	long long sum=0;
	for (int i=0;i<n;++i){
		int x;
		cin >> x;
		sum+=x;
		if (x>0){
			last=1;
			first.push_back(x);
		}
		else if (x<0){
			last=2;
			sec.push_back(-x);
		}
	}
	if (sum>0){
		cout << "first" << endl;
		return 0;
	}
	if (sum<0){
		cout << "second" << endl;
		return 0;
	}
	for (int i=0;i<min(first.size(),sec.size());++i){
		if (first[i]<sec[i]){
			cout << "second" << endl;
			return 0;
		}
		if (first[i]>sec[i]){
			cout << "first" << endl;
			return 0;
		}
	}
	if (first.size()>sec.size()){
		cout << "first" << endl;
		return 0;
	}
	if (first.size()<sec.size()){
		cout << "second" << endl;
		return 0;
	}
	if (last==1)
		cout << "first" << endl;
	else
		cout << "second" << endl;
	return 0;
}