#include <bits/stdc++.h>

using namespace std;

#define pii pair<int,int>

const int MaxAi=1E5+10;
set <int> st;
vector <int> num;
vector <int> ind[MaxAi];

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		int x;
		cin >> x;
		if (st.find(x)==st.end()){
			st.insert(x);
			num.push_back(x);
		}
		ind[x].push_back(i);
	}
	for (int j=0;j<num.size();++j){
		int x=num[j];
		for (int i=2;i<ind[x].size();++i)
			if (ind[x][1]-ind[x][0]!=ind[x][i]-ind[x][i-1]){
				st.erase(x);
				break;
			}
	}
	cout << st.size() << endl;
	for (set<int>::iterator it=st.begin();it!=st.end();++it){
		int x=*it;
		cout << x << " " << (ind[x].size()==1 ? 0 : ind[x][1]-ind[x][0]) << endl;
	}
}