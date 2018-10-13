#include<iostream>
using namespace std;
main()
{
	int c,a,b,sum=0;
	cin>>c;
	for(int i=1;i<=c;i++)
	{
		cin>>a>>b;	
		for(int j=a;j<=b;j++)	
		{
			if(j%2 !=0)
			{
			    sum=sum+j;
			}
		}
		cout<<"Case"<<" "<<i<<":"<<" "<<sum<<endl;
	}
	return 0;
}
