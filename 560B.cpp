#include <iostream>

using namespace std;

int board[5],paint[5][5];

int main (){
	cin >> board[0] >> board[1];
	cin >> paint[0][0] >> paint[0][1];
	cin >> paint[1][0] >> paint[1][1];
	for (int i=0;i<=1;++i)
		for (int j=0;j<=1;++j)
			for (int l=0;l<=1;++l)
				if (paint[0][i]+paint[1][j]<=board[l] && max(paint[0][1-i],paint[1][1-j])<=board[1-l]){
					cout << "YES";
					return 0;
				}
	cout << "NO";
	return 0;
}