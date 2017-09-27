//Program wyszukuj¹cy w tablicy jednowymiarowej parê o zadanym iloczynie
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
	srand(time(NULL));
	int t;					//wielkoœæ tablicy
	cout << "Podaj, jak duza ma byc tablica do sprawdzenia" << endl;
	cin >> t;
	int *tab=new int[t];				///sprawdzana tablica. Elementy enerowane losowo
	
	for(int g=0;g<t;g++)
	{
		tab[g]=rand()%20;
		while(tab[g]==0)
		{
			tab[g]=rand()%20;
		}
	}
	int il;					//zadany iloczyn
	cout << "Podaj liczbe, ktora bedzie iloczynem szukanej pary: " << endl;
	cin >> il;
	int a,b;				//pomocnicze do sprawdzania, czy sa rowne iloczynowi
	
	cout << "Oto znalezione pary: " << endl;
	for(int h=0;h<t-1;h++)
	{
		//cout << "h jest rowne: " << h << endl;
		a=tab[h];
		//cout << "a jest rowne: " << a<< endl;
		if(il%a==0)
		{
			//cout << "il: " << il << endl; 
			for(int i=h+1;i<t;i++)
			{
				//cout << "i jest rowne:" << i << endl;
				b=tab[i];
				if(a*b==il && i!=h)
				{
					cout << a << "\t" << b << endl;
				}
			}
		}
	}
	cout << "Wygenerowana tablica do sprawdzenia: " << endl;
	for(int j=0;j<t;j++)
	{
		cout << tab[j] << endl;
	}
	return 0;
}

