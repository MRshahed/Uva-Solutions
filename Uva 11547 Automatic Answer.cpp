#include<bits/stdc++.h>
using namespace std;
main()
{
int t,n,i;

cin>>t;

for(i=0; i<t; i++)
{
cin>>n;

n=n*567;
n/=9;
n+=7492;
n*=235;
n/=47;
n-=498;
n/=10;
n%=10;
n=abs(n);
cout<<n<<endl;
}
return 0;
}
