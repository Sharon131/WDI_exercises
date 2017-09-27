//Program wypelniajacy zadana tablice randomowymi liczbami z przedzialu 0-M. Rozwiazanie proste.
#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	int tab[30];
	int m;					//gorna granica losowania
	cout << "Podaj gorna granice losowania: " << endl;
	cin >> m;
	int n;					//ilosc liczb losowych do wprowadzenia
	cout << "Podaj, ile liczb z tego przedzialu chcesz miec w tablicy: " << endl;
	cin >> n;
	int last;				//zmienna przechowujaca ostatnia wylosowana liczbe
	
	for(int g=0;g<n;g++)
	{
		tab[g]=rand()%(m+1);
		last=tab[g];
	}
	
	for(int h=n;h<30;h++)
	{
		tab[h]=last;
	}
	
	cout << "Dana tablica wyglada nastepujaco: " << endl;
	
	for(int i=0;i<30;i++)
	{
		cout << tab[i] << endl;
	}
	
	return 0;
}

