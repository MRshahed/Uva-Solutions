#include<bits/stdc++.h>
using namespace std;

int main ()
{
ios_base::sync_with_stdio(false);
cin.tie(0);

 long long int n;
  int arr[3];
  cin>>n;

  for(int i=1; i<=n; i++)
  {
  	cin>>arr[0]>>arr[1]>>arr[2];
	
	vector<int>a(arr,arr+3);
	sort(a.begin(),a.end());
	
	cout<<"Case "<<i<<": "<<a[1]<<endl;
  }

return 0;
}
