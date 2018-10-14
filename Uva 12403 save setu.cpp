#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);

int n;
string a;
int d;
long int sum=0;

cin>>n;

for(int i=0; i<n; i++)
{
  cin>>a;
  if(a=="donate")
  {
  	cin>>d;
  	sum+=d;
  }
  else if(a=="report")
  {
  	cout<<sum<<endl;
  }
  else
  {
  	break;
  }
}
return 0;
}
