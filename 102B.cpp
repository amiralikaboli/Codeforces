#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	if (s.size()==1){
		cout << 0;
		return 0;
	}
	int sum=0;
	for (int i=0;i<s.size();++i)
		sum+=s[i]-'0';
	for (int i=1; ;++i){
		if (sum<10){
			cout << i;
			return 0;
		}
		int x=sum;
		sum=0;
		while (x!=0){
			sum+=x%10;
			x/=10;
		}
	}
}