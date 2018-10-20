#include<bits/stdc++.h>

#define forn(i,n) for(int i=0; i<(int)(n); i++)

using namespace std;

vector<int>v[10005];
bool visit[10005];

void DfsVisit(int k)
{
	visit[k]=true;
	
	forn(i,v[k].size())
	{
		int g=v[k][i];
		if(visit[g]==false)
		{
			DfsVisit(g);
		}
	}
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
	
	int t;
	cin>>t;
	
	int  m,n,l,x,y,z;
	
	forn(i,t)
	{
		cin>>m>>n>>l;
		
    forn(i,m+1)
	{
		visit[i]=false;
		v[i].clear();
    }
    forn(i,n)
    {
    	cin>>x>>y;
		v[x].push_back(y);
	}
	forn(i,l)
	{
		cin>>z;
		DfsVisit(z);
	}
	int count=0;
	forn(i,m+1)
	{
		if(visit[i])
		{
		count++;
	   }
	}
	cout<<count<<endl;
   }
	
return 0;
}
