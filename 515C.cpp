#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector <int> v;
int main (){
	int n,cnt=0;
	string s;
	cin >> n;
	cin >> s;
	for (int i=0;i<s.size ();++i){
		if (s[i]=='2')
			v.push_back(2);
		else if (s[i]=='3')
			v.push_back(3);
		else if (s[i]=='4'){
			v.push_back(3);
			v.push_back(2);
			v.push_back(2);
		}
		else if (s[i]=='5')
			v.push_back(5);
		else if (s[i]=='6'){
			v.push_back(5);
			v.push_back(3);
		}
		else if (s[i]=='7')
			v.push_back(7);
		else if (s[i]=='8'){
			v.push_back(7);
			v.push_back(2);
			v.push_back(2);
			v.push_back(2);
		}
		else if (s[i]=='9'){
			v.push_back(7);
			v.push_back(3);
			v.push_back(3);
			v.push_back(2);
		}
	}
	sort (v.begin(),v.end());
	for (int i=0;i<v.size ();++i)
		cout << v[i];
}
