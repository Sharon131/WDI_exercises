//Program generujacy sito Eratostenesa
#include<iostream>

using namespace std;

int main()
{
	int n;						//liczba, do ktroej ma byc wygenerowane sito Eratostenesa
	cout << "Podaj, do jakiej liczby chcesz wygenerowac sito Eratostenesa: " << endl;
	cin >> n;
	bool *tab= new bool[n];			//sito jako tablica. Zawiera informacjê, czy dany indeks jest liczb¹ pierwsza, czy nie
	
	tab[0]=false;
	tab[1]=false;
	
	for(int g=2;g<n;g++)
	{
		tab[g]=true;
	}
	
	for(int h=2;h<n;h++)
	{
		for(int i=h+1;i<n;i++)
		{
			if(i%h==0 && tab[i]==true)
			{
				tab[i]=false;
			}
		}
	}
	
	cout << "Oto sito Eratostenesa do zadanej liczby: " << endl << "Liczba" << "\t" << "Czy pierwsza?" << endl;
	
	for(int j=0;j<n;j++)
	{
		string slowo;
		if(tab[j]==1)
		{
			slowo="Tak";
		}
		else
		{
			slowo="Nie";
		}
		cout << j << "\t" << slowo << endl;
	}
	return 0;
}

