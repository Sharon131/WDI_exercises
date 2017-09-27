#include<iostream>

using namespace std;

int main()
{
	int x;			//badana liczba
	cin >> x;
	int x1=x;			//pomocnicza do operowania, potrzebne jest zachowanie liczby x do porownania
	int sum=0;		//pomocnicza do sprawdzania, czy liczba x jest palindromem
	
	while(x1!=0)
	{
		sum*=10;
		sum+=x1%10;
		x1/=10;
	}
	//cout << sum << endl;			//sprawdzenie
	if(x==sum)
	{
		cout << "Podana liczba jest palindromem" << endl;
	}
	return 0;
}

