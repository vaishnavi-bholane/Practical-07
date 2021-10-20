
#include<iostream>
using namespace std;

int main()
{
	char a[4][4];
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<=i; j++)
		{
			a[i][j] = '*';
		}
	
	}
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<=i; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}


}
