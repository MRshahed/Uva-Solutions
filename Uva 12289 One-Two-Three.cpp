#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;

  for(int i=0; i<n; i++)
    {
        char a [10];
	    cin>>a;

        if ( strlen (a) == 5 )
        {
        cout<<"3"<<"\n";
        }
        else
        {
            int cnt = 0;

            if ( a [0] == 'o' ) cnt++;
            if ( a [1] == 'n' ) cnt++;
            if ( a [2] == 'e' ) cnt++;

            if ( cnt >= 2 )
			cout<<"1"<<"\n";
            else cout<<"2"<<"\n";
        }
    }

}
