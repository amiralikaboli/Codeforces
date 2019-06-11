#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
bool a[30];

int main(){
	for(int i=0; i<30; i++)
		a[i] = false;

	char x;
	int cnt = 0;
	while(x!='}'){
		scanf(" %c", &x);
		if(x!=',' && x!='{' && x!='}'){
			if(!a[x-'a'])
				cnt++;
			a[x-'a']=true;
		}
	}
	cout << cnt << endl;
}