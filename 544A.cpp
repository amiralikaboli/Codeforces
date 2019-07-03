#include <bits/stdc++.h>

using namespace std;

bool mark[30];
vector <int> ind;

int main(){
	int k;
	string s;
	cin >> k >> s;
	int t=0;
	for (int i=0;i<s.size();++i)
		if (mark[s[i]-'a']==false){
			ind.push_back(i);
			//cerr << i << " ";
			mark[s[i]-'a']=true;
		}
	//cerr << endl;
	for (int i=0;i<30;++i)
		mark[i]=false;
	if (ind.size()<k){
		cout << "NO";
		return 0;
	}
	cout << "YES" << endl;
	for (int i=0;i<k-1;++i){
		for (int j=ind[i];j<ind[i+1];++j){
			cout << s[j];
		}
		cout << " ";
	}
	for (int i=ind[k-1];i<s.size();++i)
		cout << s[i];
}