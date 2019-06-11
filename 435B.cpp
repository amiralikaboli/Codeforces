#include <iostream>

using namespace std;

int k;
int len;
string s;

int find_mx(int st,int x){
	int mx=-1;
	int ind;
	for (int i=st;i<=min(len,st+x);++i)
		if (mx<s[i]){
			mx=s[i];
			ind=i;
		}
	return ind;
}

int main(){
	cin >> s >> k;
	len=s.size()-1;
	int index=0;
	while(k>0 && index<=len){
		//cerr << s << "\n";
		int ind=find_mx(index,k);
		int x=s[ind];
		if (s[ind]>s[index]){
			for (int i=ind-1;i>=index;--i)
				s[i+1]=s[i];
			s[index]=x;
			k-=ind-index;
		}
		++index;
	}
	cout << s;
}