//Program wyznaczaj�cy liczb� Eulera z zadanym przybli�eniem i nie wykorzystuj�cy funkcji silnia(mniej pami�ci zu�yje)
#include<iostream>
#include<cmath>

using namespace std;

int reszta(int c)						//funkcja obliczajaca, jakie potrzebne jest n, aby otrzyma� zadan� dok�adno��
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
	double e=2;			//zmienna przechowuj�ca zadan� warto��
	int c;				//zmienna przechowujaca potege lczby 10, wyznaczajacej dokladnosc, z jaka ma byc wyznacona liczba e
	cout << "Podaj, z jaka dokladnoscia po przecinku chcesz poznac liczbe e" << endl;
	cin >> c;
	int n=reszta(c);					//zmienna przechowujaca, jakiej liczby silnia konieczna, aby otrzymac zadana dok��dno��
	cout << "Potrzebna liczba: " << n << endl;
	double num=1.0;						//pomocnicza do obliczen
	
	for(int g=2;g<=n;g++)
	{
		num/=g;
		e+=num;
	}
	cout.precision(c+1);
	cout << "Liczba e z zadanym przyblizeniem jest rowna: "  << e << endl;
	return 0;
}

