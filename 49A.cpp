#include <bits/stdc++.h>

using namespace std;

char c[100+10];
bool b[30];

int main(){
	b[0]=b[4]=b[8]=b[14]=b[20]=b[24]=true;
	cin.getline(c,sizeof(c));
	int ind;
	for (int i=0;i<100+10;++i)
		if (c[i]=='?'){			
			ind=i;
			break;
		}
	string t="";
	for (int i=0;i<ind;++i){
		if (c[i]>='A' && c[i]<='Z')
			t+=c[i]-'A'+'a';
		else if (c[i]==' ')
			continue;
		else
			t+=c[i];
	}
	if (b[t[t.size()-1]-'a']==true)
		cout << "YES";
	else
		cout << "NO";
}