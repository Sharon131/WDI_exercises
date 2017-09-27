//Program obliczajacy liczbe e z dokladnoscia do 1000 mniejsc po przecinku
#include<iostream>
#include<cmath>
#include<sstream>

using namespace std;

int reszta(int c)						//funkcja obliczajaca, jakie potrzebne jest n, aby otrzymaæ zadan¹ dok³adnoœæ
{
	unsigned long long n=1;							//pomocnicza do wyliczenia silni i sprawdzenia
	int i=1;							//okresli, jakiej liczby silnia jest potrzebna dla zadanej dokladnosci						
	while(n<pow(10,c) && i<20)
	{
		i++;
		n*=i;
	}
	return i;
}

int main()
{
	string e;			//zmienna przechowuj¹ca zadan¹ wartoœæ
	int c;				//zmienna przechowujaca potege lczby 10, wyznaczajacej dokladnosc, z jaka ma byc wyznacona liczba e
	cout << "Podaj, z jaka dokladnoscia po przecinku chcesz poznac liczbe e" << endl;
	cin >> c;
	int n=reszta(c);					//zmienna przechowujaca, jakiej liczby silnia konieczna, aby otrzymac zadana dok³¹dnoœæ
	//cout << "Potrzebna liczba: " << n << endl;
	unsigned long long num=1;						//pomocnicza do obliczen silnii w petli nastenego ulamka. Teoretycznie po modyfikacji niepotrzbne
	unsigned long long l=2,m=1;						//pomocnicze. l-licznik ulamka zwyklego, m-mianownik
	//long long w=0;								//zmienna czasowo przetrzymujaca NWW
	
	
	for(int g=2;g<=n && g<19;g++)
	{
		//cout << "for nr: " << g << endl;
		num*=g;
		//cout << "num jest rowne: " << num << endl;
		//w=NWW(m,num);
		m=num;
		l=l*g+1;
		//cout << "l: " << l << " m: " << m << " w: " << w << endl << endl;
	}
	
	ostringstream ss;				//zamiana na stringa
	ss << l/m;
	e = ss.str();
	//string str;						//pomocniczy do petli przy dzieleniu
	e+='.';
	//cout << "l: " << l << " m: " << m << endl << endl;
	
	for(int g=1;g<=c;g++)
	{
		l=l%m;
		l*=10;
		ostringstream ss;
		ss << l/m;
		e+=ss.str();
	}
	
	cout << "Liczba e z zadanym przyblizeniem jest rowna: "  << e << endl;

	return 0;
}


