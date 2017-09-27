//Program wypelniajacy zadana tablice randomowymi liczbami z przedzialu 0-M. Rozwiazanie inteligentniejsze.
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
	srand(time(NULL));
	int tab[30];
	int m;					//gorna granica losowania
	cout << "Podaj gorna granice losowania: " << endl;
	cin >> m;
	int n;					//ilosc liczb losowych do wprowadzenia
	cout << "Podaj, ile liczb z tego przedzialu chcesz miec w tablicy: " << endl;
	cin >> n;
	int *last = new int[n];				//tablica przechowuja n wylosowanych liczb
	
	for(int g=0;g<n;g++)
	{
		last[g]=rand()%(m+1);
	}
	
	int index;						//zmienna przechowuja losowy indeks tablicy last
	for(int h=0;h<30;h++)
	{
		index=rand()%n;
		tab[h]=last[index];
	}
	
	cout << "Dana tablica wyglada nastepujaco: " << endl;
	
	for(int i=0;i<30;i++)
	{
		cout << tab[i] << endl;
	}
	
	return 0;
}

