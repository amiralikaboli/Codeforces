#include <iostream>

using namespace std;

char stack[50]={'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m',',','.','/'};

int main (){
	char c;
	string s;
	cin >> c >> s;
	int ind;
	if (c=='R')
		ind=-1;
	else
		ind=1;
	for (int i=0;i<s.size();++i)
		for (int j=0;j<30;++j)
			if (stack[j]==s[i])
				cout << stack[j+ind];
}