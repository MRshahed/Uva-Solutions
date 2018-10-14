#include<bits/stdc++.h>
using namespace std;

int main ()
{
   string a;
    
    for(int i=1; i<3000; i++)
    {
		cin>>a;
		if(a=="#")
		{
			break;
		}
		
		if (a=="HELLO")
		{
			cout<<"Case "<<i<<": "<<"ENGLISH"<<endl;
		}
		else if(a=="HOLA")
		{
			cout<<"Case "<<i<<": "<<"SPANISH"<<endl;
		}
		else if(a=="HALLO")
		{
			cout<<"Case "<<i<<": "<<"GERMAN"<<endl;
		}
		else if(a=="BONJOUR")
		{
			cout<<"Case "<<i<<": "<<"FRENCH"<<endl;
		}
		else if(a=="CIAO")
		{
		  cout<<"Case "<<i<<": "<<"ITALIAN"<<endl;
		}
		else if(a=="ZDRAVSTVUJTE")
		{
			cout<<"Case "<<i<<": "<<"RUSSIAN"<<endl;
		}
		else
		{
			cout<<"Case "<<i<<": "<<"UNKNOWN"<<endl;
		}
	}
    return 0;
}
