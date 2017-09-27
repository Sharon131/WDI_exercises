//Fibbonacci nierekurencyjnie
#include<iostream>

using namespace std;

int main()
{
	int n;							//liczba wyrazow ciagu do wyswietlenia
	cout << "Podaj liczbe wyrazow ciagu Fibbonacciego, ktore chcesz poznac: " << endl;
	cin >> n;
	int a1=1, a2=1;				//pierwsze wyrazy ciagu fibbonacciego
	
	cout << "Oto " << n << " pierwszych wyrazow ciagu Fibbonacciego :" << endl;
	cout << a1 << endl << a2 << endl;
	
	for(int g=2;g<n;g++)
	{
		a2+=a1;
		a1=a2-a1;
		cout << a2 << endl;
	}
	cout << "KONIEC" << endl;
	return 0;
}

