#include <iostream>
#include<algorithm>
using namespace std;

void erotos( int n,int m  ){
	int i,j;
	bool was[m];
	for ( i=n; i<=m;i++ )
		was[i]=false;
	for ( i=n; i<=m; i++ )
	{
		if ( was[i]==false )
		for ( j=i*i; j<=m; j+=i )
		{
			was[j]=true;
		}
	}
	for ( i=n; i<m; i++ )
		{
		if ( !was[i] )
			cout<<i<<" ";
		}
}
int main()
{
	int n,m;
	cin >>n>>m;
	erotos(n,m);


	return 0;
}
