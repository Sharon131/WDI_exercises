//Program wyszukujacy dla ktorych zachodzi rownosc z zad1 z cw 2 WDI. Suma poteg cyfr liczby
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int x;			//badana liczba(pomocnicza do obliczen)
	//cin >> x;
	//int cn=x%10;
	int cn;			//ostatnia cyfra danej liczby
	int c1,c2;		//kolejne cyfry dla petli
	int sum=0;			//pomocnicza suma do sprawdzenia potem z liczba x
	
	for(int i=10;i<100;i++)
	{
		sum=0;			//wyzerowanie, aby sie dla kolejnych petli nie dodawalo do siebie
		x=i;
		cn=i%10;
		while(x!=0)
		{
			c2=x%10;
			x/=10;
			c1=x%10;
			sum+=pow(c1,c2);
		}
		sum+=pow(cn,c2);
		cout << "Suma poteg liczby " << i <<" jest rowna: " << sum << endl; 
		if(i==sum)
		{
			cout << "Te dwie liczby sa zgodne ze soba" << endl;
		}
	}
	
	return 0;
}

