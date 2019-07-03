#include <iostream>

using namespace std;

char c[10][10];

bool check(int x,int y,char ch){
	bool b=true;
	if (ch=='B')
		for (int i=x+1;i<8;++i)
			if (c[i][y]!='.')
				b=false;
	if (ch=='W')
		for (int i=0;i<x;++i)
			if (c[i][y]!='.')
				b=false;
	return b;
}

int main(){
	int b=-1;
	int w=-1;
	for (int i=0;i<8;++i)
		for (int j=0;j<8;++j)
			cin >> c[i][j];
	for (int i=0;i<8;++i)
		for (int j=0;j<8;++j){
			if (c[i][j]=='B' && check(i,j,'B')==true)
				b=i;
			if (c[i][j]=='W' && check(i,j,'W')==true && w==-1)
				w=i;
		}

	b=7-b;
	cerr << w << " " << b << endl;
	if (w>b)
		cout << "B";
	else
		cout << "A";
}