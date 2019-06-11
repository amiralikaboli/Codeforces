#include <iostream>

using namespace std;

int card[5][111];
bool out[5][111];
pair <string,pair <int,int> > p[111];

int main(){
	int k,ind=0;
	string home,away;
	cin >> home >> away >> k;
	int t,num;
	char c,color;
	for (int i=0;i<k;++i){
		cin >> t >> c >> num >> color;
		int x;
		if (c=='h')
			x=0;
		else
			x=1;
		if (color=='y' && out[x][num]==false){
			++card[x][num];
			if (card[x][num]==2){
				out[x][num]=true;
				p[ind].second.first=num;
				p[ind].second.second=t;
				if (c=='h')
					p[ind].first=home;
				else
					p[ind].first=away;
				++ind;
			}
		}
		if (color=='r' && out[x][num]==false){
			out[x][num]=true;
			p[ind].second.first=num;
			p[ind].second.second=t;
			if (c=='a')
				p[ind].first=away;
			else
				p[ind].first=home;
			++ind;
		}
	}
	for (int i=0;i<ind;++i)
		cout << p[i].first << " " << p[i].second.first << " " << p[i].second.second << endl;	
}