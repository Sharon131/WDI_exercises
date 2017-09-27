//Program generujacy generuje liczby ciagu Fibbonacciego mniejsze od miliona
#include<iostream>
#include<cmath>

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
	int n=0;			//zmienna przechowujaca wartosc aktualnego wyrazu ciagu
	cout << "Oto ciag Fibbnacciego o wyrazach mniejszych od miliona: " << endl;
	for(int i=0;n<pow(10,6);i++)
	{
		n=fibb(i);
		if(n<pow(10,6))
		{
			cout << n << endl;	
		}
	}
	return 0;
}


