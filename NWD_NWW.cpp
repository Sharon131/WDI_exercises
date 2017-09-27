//Program obliczajacy NWD i NWW dwoch zadanych liczb
#include<iostream>
#include<cmath>

using namespace std;

int NWD(int a,int b)
{
	int num=1;						//liczba pomocnicza
	
	while(a%2==0 && b%2==0)
	{
		num*=2;
		a/=2;
		b/=2;
	}
	
	//cout << "Num jest rorne: " << num << endl;

	for(int g=3;a!=1 && b!=1;g+=2)
	{
		while(a%g==0 && b%g==0)
		{
			num*=g;
			a/=g;
			b/=g;
			//cout << num << endl;
		}
		while(a%g==0)
		{
			a/=g;
		}
		while(b%g==0)
		{
			b/=g;
		}
	}
	return num;
}

int NWW(int a, int b)
{
	int n=NWD(a,b);
	return n*(a/n)*(b/n);
}

int main()
{
	int a,b;					//liczby, ktorych NWD i NWW beda liczone
	cout << "Podaj liczby, na ktorych chcesz dzialac: " << endl;
	cin >> a >> b;
	cout << "NWD zadanych liczb jest rowne: " << NWD(a,b) << endl;
	cout << "Natomiast NWW tych liczb jest rowne: " << NWW(a,b) << endl;
	
	return 0;
}

