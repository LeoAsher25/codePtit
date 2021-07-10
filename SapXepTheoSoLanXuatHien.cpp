#include <bits/stdc++.h>
using namespace std;

int a[100007];
int n, k;
vector < pair <int, int> > v;

bool cmp(pair <int, int> x, pair <int, int> y)
{
	if(x.first == y.first) return x.second < y.second;
	return x.first > y.first;
}

void init(){
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> k;
		a[k] ++;
	}	
	for(int i = 0; i < oo; i++)
	{
		if(a[i])
		{
			v.push_back(make_pair(a[i], i));
			a[i] = 0;
		}
	}
}
void process(){

	sort (v.begin(), v.end(), cmp);
	for(int i = 0; i < v.size(); i++)
	{
		for(int j = 0; j < v[i].first; j++) 
			cout << v[i].second << " ";
	}
	v.clear();
}

int main()
{
	int t; 
	cin >> t;
	while (t-- )
	{
		init();
		process();
		cout << endl;
	}
}


