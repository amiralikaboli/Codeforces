#include <iostream>
#include <vector>
using namespace std;
const int Max=3*1e4+10;
int a[Max];
bool mark[Max];
vector <int> v[Max];

bool dfs (int vertex){
	mark[vertex]=true;
	for (int i=0;i<v[vertex].size ();++i)
		if (mark[v[vertex][i]]==false)
			dfs (v[vertex][i]);

}

int main (){
	int n,t;
	cin >> n >> t;
	for (int i=0;i<n-1;++i){
		cin >> a[i];
		v[i].push_back(i+a[i]);
	}
	dfs (0);
	if (mark[t-1]==true){
		cout << "YES";
		return 0;
	}
	cout << "NO";
}
