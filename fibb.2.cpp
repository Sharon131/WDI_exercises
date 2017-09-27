//Program sprawdzajacy, jakie maja byc pierwsze wyrazu ciagu Fibbonacciego, aby ktoryœ wyraz by³ równy 2016
#include<iostream>

using namespace std;

int fibb(int a, int a1, int a2)					//a-okresla ktory wyraz ciagu ma byc zwrocony
{
	if(a==0)
	{
		return a1;
	}
	if(a==1)
	{
		return a2;
	}
	if(a!=0 && a!=1)
	{
		return fibb(a-1,a1,a2)+fibb(a-2,a1,a2);
	}
}

int main()
{
	int n=0;			//zmienna przechowujaca wartosc aktualnego wyrazu ciagu
	cout << n << endl;
	for(int r=0;r<2016;r++)
	{
		for(int p=1;p<2016 && r<p ;p++)
		{
			n=fibb(0,r,p);
			for(int i=0;n<2020;i++)
			{
				n=fibb(i,r,p);
				if(n==2016)
				{
					cout << "Ciag spelnia warunek dla pierwszych wyrazow rownych: " << endl;
					cout << r << "\t" << p << endl;
					cout << "Numer tego wyrazu w ciagu jest rowny jest rowny: " << i+1 << "a index: " << i << endl;
				}
			}
		}
	}
	
	/*int a1,a2,a;					
	cout << "Podaj pierwsze wyrazu ciagu oraz ilosc wyrazow do wygenerowania: " << endl;
	while(cin>>a1>>a2>>a)																	//sprawdzenie, czy dziala jak nalezy
	{
		cout << "Ciag dla tych wyrazow ma postac: " << endl;
		for(int j=0;j<a;j++)
		{
			cout << fibb(j,a1,a2) << endl;
		}
	}*/
	
	
	return 0;
}


