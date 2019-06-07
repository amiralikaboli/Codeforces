#include <iostream>

using namespace std;

char c[10][10];

int main(){
	for (int i=0;i<4;++i)
		for (int j=0;j<4;++j)
			cin >> c[i][j];
	for (int i=0;i<3;++i)
		for (int j=0;j<3;++j){
			int cck=0;
			if (c[i][j]=='.')
				++cck;
			if (c[i][j+1]=='.')
				++cck;
			if (c[i+1][j]=='.')
				++cck;
			if (c[i+1][j+1]=='.')
				++cck;
			if (cck!=2){
				//cerr << c[i][j] << c[i][j+1] << endl << c[i+1][j] << c[i+1][j+1] << endl << cck;
				cout <<  "YES";
				return 0;
			}
		}
	cout << "NO";
}