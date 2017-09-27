//Progra obliczajacy silnie rekurencyjnie
#include<iostream>

using namespace std;

int silnia(int n)
{
	int k=0;					//pomocnicza, do pokazania kolejnych krokow silnii podczas rekurencji
	if(n==1 || n==0)
	{
		return 1;
		cout << "Zwracana liczba jest rowna 1" << endl;
	}
	else
	{
		cout << "Obliczanie silnia(n-1) dla n= " << n << endl;
		k=n*silnia(n-1);
		cout << "Zwracana czesc silnii: " << k << endl; 
		return k;
	}
	
}

int main()
{
	int n;					//liczba, od ktorej bedzie liczona silnia
	cout << "Podaj liczbe, ktorej silnie chcesz policzyc: " << endl;
	cin >> n;
	cout << "Silnia z podanej liczby jest rowna: " << silnia(n) << endl;
 	
	return 0;
}

