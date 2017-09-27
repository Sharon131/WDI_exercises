//Program obliczaj¹cy liczbê e do zadanego przybli¿enia. Z rekurencyjna silnia
#include<iostream>
#include<cmath>

using namespace std;

long long silnia(int n)
{
	long long k;
	if(n==0 || n==1)
	{
		return 1;
	}
	else
	{
		k=n*silnia(n-1);
		return k;
	}
}

int reszta(int c)						//funkcja obliczajaca, jakie potrzebne jest n, aby otrzymaæ zadan¹ dok³adnoœæ
{
	long long n=1;							//pomocnicza do wyliczenia silni i sprawdzenia
	int i=1;							//okresli, jakiej liczby silnia jest potrzebna dla zadanej dokladnosci						
	while(n<pow(10,c))
	{
		i++;
		n*=i;
	}
	return i;
}

int main()
{
	double e=0;			//zmienna przechowuj¹ca zadan¹ wartoœæ
	int c;				//zmienna przechowujaca potege lczby 10, wyznaczajacej dokladnosc, z jaka ma byc wyznacona liczba e
	cout << "Podaj, z jaka dokladnoscia po przecinku chcesz poznac liczbe e" << endl;
	cin >> c;
	int n=reszta(c);					//zmienna przechowujaca, jakiej liczby silnia konieczna, aby otrzymac zadana dok³¹dnoœæ
	cout << "Potrzebna liczba: " << n << endl;
	
	for(int g=0;g<=n;g++)
	{
		e+=1.0/silnia(g);
	}
	cout.precision(c+1);
	cout << "Liczba e z zadanym przyblizeniem jest rowna: "  << e << endl;
	return 0;
}

