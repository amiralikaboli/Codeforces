#include <bits/stdc++.h>

using namespace std;

bool check_pal(int x){
	if (x/1000!=x%10)
		return false;
	if ((x/100)%10!=(x%100)/10)
		return false;
	if ((x/100)%10>=6)
		return false;
	return true;
}

int main(){
	string s;
	cin >> s;
	int x=(s[0]-'0')*1000+(s[1]-'0')*100+(s[3]-'0')*10+(s[4]-'0');
	for (int i=x+1;i<2400;++i)
		if (check_pal(i)==true){
			if (i/100<10)
				cout << 0;
			cout << i/100;
			cout << ":";
			if (i%100<10)
				cout << 0;
			cout << i%100;
			return 0;
		}
	cout << "00:00";
}