#include <bits/stdc++.h>

using namespace std;

set <int> st;
map <string,int> mp;

int main(){
	string s;
	int cnt=0;
	int ans=0;
	while (getline(cin,s)){
		if (s[0]=='-'){
			s=s.substr(1,s.size()-1);
			st.erase(mp[s]);
		}
		else if (s[0]=='+'){
			s=s.substr(1,s.size()-1);
			mp[s]=cnt++;
			st.insert(mp[s]);
		}
		else{
			int ind=-1;
			for (int i=0;i<s.size();++i)
				if (s[i]==':'){
					ind=i;
					break;
				}
			int l=s.size()-ind-1;
			ans+=l*st.size();
		}
	}
	cout << ans;
}