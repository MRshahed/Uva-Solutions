#include<bits/stdc++.h>
using namespace std;

int main ()
{
ios_base::sync_with_stdio(false);
cin.tie(0);

	string s;
    for(int  i=1; i<1000; i++)
	{
	    cin>>s;
		if(s=="*")
		{
		break;
		}
		
		if(s=="Hajj")
		{
		cout<<"Case "<<i<<": "<<"Hajj-e-Akbar"<<endl;
      	}

		else if(s=="Umrah")
		{
		cout<<"Case "<<i<<": "<<"Hajj-e-Asghar"<<endl;
	    }
	}
    return 0;
}
