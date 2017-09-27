//Program sprawdzaj¹y ile ró¿nych liczb podzielnych przez 7 mozna uzyskac poprzez wykreœlenie dowolnych cyfr z liczby o niepowtarzaj¹cych
//sie cyfrach z wylaczeniem 0
#include<iostream>
#include<cmath>

using namespace std;

int flag;				//ilosc liczb podzielnych przez 7 uzyskanych poprzez wykreslenie cyfr. Po znalezieniu takiej liczby flag jest ++

int rewrite(int num, int pos)			//num-liczba przepisywana; pos-pozycja, z ktorej ma zostac usunieta liczba. Usuwana jedna
{
	int pom=0;							//pomocnicza do przepisywania
	int digit=0,num2=num;
	
	while(num2!=0)
	{
		num2/=10;
		digit++;
	}
	
	int i=0;
	for(int f=1;f<=digit;f++)			//pozycja przepisywana
	{
		if(f!=pos)
		{
			pom+=num%10*pow(10,i);
			//cout << pom << endl;
			i++;
		}
		num/=10;
	}
	return pom;
}

void rewrite2(int num, int n)		//num-wykreslana liczba; n-ilosc wykreslanych cyfr;
{
	cout << "n rowne: " << n << endl;
	int num2=num;
	int digit=0;
	
	while(num2!=0)
	{
		num2/=10;
		digit++;
	}
	
	if(n==0 && num%7==0)
	{
		flag++;
		cout << num << endl;
	}
	if(n==1)
	{
		for(int y=1;y<=digit;y++)
		{
			num2=rewrite(num,y);
			cout << "Num2 jest równe: " << num2 << endl;
			if(num2%7==0)
			{
				flag++;
				cout << num2 << endl;
			}
		}
	}
	if(n>1)
	{
		for(int z=1;z<=digit;z++)
		{
			num2=rewrite(num,z);
			cout << "Po rewrite1: " <<num2<< " z: "<< z <<endl;
			rewrite2(num2,n-1);

		}
		
	}
}

int main()
{
	int num;			//podana liczba, dla ktorej jest sprawdzany algorytm
	cout << "Podaj badana liczbe o niepowtarzajacych sie cyfrach z wylaczeniem 0: " << endl;
	cin >> num;
	flag=0;			
	int num2=num;			/*liczba otrzymana poprzez wykreslenie jakis cyfr z num, sprawdzana, czy jest podzielna przez 7. Poczatkowo
							rowne num, aby okreslic ilosc cyfr podanej liczby*/
	int digit=0;			//informuje, ile cyfr ma podana liczba num. koniecznie dla dalszej czesci algortytmu
	
	while(num2!=0)
	{
		num2/=10;
		digit++;
	}
	
	//cout << "Dana liczba ma cyfr: " << digit << endl;			//sprawdzenie, czy dziala
	
	/*for(int g=0;g<digit;g++)					//g-ilosc cyfr, ktore beda wykreslane
	{
		for(int h=0;h<g=;h++)				//h-numer wykreslanej cyfry
		{
			for(int i=0;i<digit,i++)		//i-numer pozycji wkreslanej
			{
				num2=rewrite(num2,i);
			}
		}
		if(num2%7==0)
		{
			flag++;
		}
		
	}*/
	
	for(int t=0;t<digit;t++)			//t-ilosc liczb wykreslanych
	{
		rewrite2(num,t);
	}
	cout << "Z danej liczby mozna utworzyc liczb podzielnych przez 7: " << flag << endl;
	
	return 0;
}

