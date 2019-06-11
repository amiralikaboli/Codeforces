#include <iostream>
using namespace std;
const int Max=100+10;
char a[Max][Max];
int main (){
	int m,n;
	cin >> m >> n;
	for (int i=0;i<m;++i)
		for (int j=0;j<n;++j)
			cin >> a[i][j];
	for (int i=0;i<m;++i){
		for (int j=0;j<n;++j)
			if (a[i][j]=='-')
				cout << "-";
			else
				if (i%2==j%2)
					cout << "B";
				else
					cout << "W";
		cout << endl;
	}
}
