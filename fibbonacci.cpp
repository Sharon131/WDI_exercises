//Program generuj¹cy n pierwszych wyrazów ci¹gu Fibbonacciego. Rekurencyjnie
#include<iostream>

using namespace std;

int fibb(int n)					//n-okresla ktory wyraz ciagu ma byc zwrocony
{
	if(n==0 || n==1)
	{
		return 1;
	}
	else
	{
		return fibb(n-1)+fibb(n-2);
	}
}

int main()
{
	cout << "Wpisz, ile wyrazow ciagu Fibbonacciego chcesz ujrzec: " << endl;
	int n;				//liczba okreœlaj¹ca iloœæ wyrazów ci¹gu do wypisania
	cin >> n;
	
	cout << "Oto twoj ciag: " << endl;
	for(int g=0;g<n;g++)
	{
		cout << fibb(g) << endl;
	}
	return 0;
}

