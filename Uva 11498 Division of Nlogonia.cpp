#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,y,n1,n2;

	while(cin>>n)
	{
		if(n==0)
		{
			break;
		}
		cin>>x>>y;
		for(int i=0; i<n; i++)
		{
			cin>>n1>>n2;
			
			if(n1==x || n2==y)
			{
				cout<<"divisa"<<endl;
			}
			else if(n1>x && n2>y)
			{
				cout<<"NE"<<endl;
			}
			else if(n1<x && n2>y)
			{
				cout<<"NO"<<endl;
            }
            else if(n1<x && n2<y)
			{
				cout<<"SO"<<endl;
            }
            else
			{
				cout<<"SE"<<endl;
            }

        }
	}
	return 0;
}
