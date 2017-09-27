//Program sprawdzajacy, czy wszystkie elementy tablicy zawieraja przynajmniej jedna cyfre nieparzysta. Zadanie 5 z 3. cwiczen
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

bool niep(int a)
{
	int num=a;				//zmienna pomocnicza do obliczen, chociazby liczby cyfr
	int digit=0;			//zmienna informujaca, ile cyfr ma podana liczba
	int d=0;				//zmienna przechowujaca aktualna cyfre liczby
	
	while(num!=0)
	{
		num/=10;
		digit++;
	}
	num=a;
	
	for(int y=0;y<digit;y++)
	{
		d=num%10;
		num/=10;
		if(d%2!=0)
		{
			return true;
		}
	}
	return false;
	
}

int main()
{
	srand(time(NULL));
	int t;						//wymiar tablicy
	cout << "Podaj liczbe elementow badanej tablicy: " << endl;
	cin >> t;
	int *tab= new int[t];			//badana tablica wypelniana losowymi obiektami
	int flag=0;						//liczba informujaca, czy w tablicy znajduja sie elementy nie speniajace warunku. Wtedy=1
	
	for(int g=0;g<t;g++)
	{
		tab[g]=rand();
		if(!niep(tab[g]))
		{
			cout << "Warunek nie zostal spelniony. Istnieje element tej tablicy nie zawierajacy nieparzystych cyfr" << endl;
			flag=1;
			break;
		}
	}
	if(!flag)
	{
		cout << "Warunek zostal spelniony. Kazdy element tablicy zawiera przyjnajmniej jedna liczbe nieparzysta." << endl;
	}
	
	cout << "Wylosowana tablica ma nastepujace elementy: " << endl;
	for(int i=0;i<t;i++)
	{
		cout << tab[i] << endl;
	}
	return 0;
}

