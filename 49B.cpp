#include <bits/stdc++.h>

using namespace std;

int find_mx_digit(int n){
	int x=n;
	int mx=0;
	while (x){
		mx=max(mx,x%10);
		x/=10;
	}
	return mx+1;
}

int len(int n,int k){
	int x=n;
	int l=0;
	while (x){
		x/=k;
		++l;
	}
	return l;
}

int mabna(int n,int k){
	vector <int> digit;
	while (n){
		digit.push_back(n%10);
		n/=10;
	}
	int x=0;
	for (int i=digit.size()-1;i>=0;--i){
		x*=k;
		x+=digit[i];
	}
	return x;
}

int main(){
	int a,b;
	cin >> a >> b;
	int mxa=find_mx_digit(a);
	int mxb=find_mx_digit(b);
	int mx=max(mxa,mxb);
	int x=mabna(a,mx);
	int y=mabna(b,mx);
	cout << len(x+y,mx);
}