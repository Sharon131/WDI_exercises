//Program wyszukujacy lczby zaprzyajznione mniejsze niz 10^6
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int a,b; 			//Liczby dprawdzane, czy sa zaprzyjaznione
	int flag=1;			//flaga przejsc, aby nie wypisywalo tej samej pary dwa razy
	cout << "Otrzymane liczby zaprzyjaznione: "  << endl;
	
	for(int h=2;h<1000000;h++)
	{
		a=1;							//suma dzielnikow sprawdzanej wlasnie liczby h
		for(int g=2;g<=sqrt(h);g++)
		{
			if(h%g==0)
			{
				a+=g;
			}
			if(g!=sqrt(h) && h%g==0)
			{
				a+=h/g;
			}
		}
		b=1;							//suma dzilnikow liczby a
		for(int g=2;g<=sqrt(a);g++)
		{
			if(a%g==0)
			{
				b+=g;
			}
			if(g!=sqrt(a) && a%g==0)
			{
				b+=a/g;
			}
		}
		if(b==h && b!=a)
		{
			if(flag%2==1)							//aby nie wypisywalo dwa razy tej samej pary. I tak robi i pomija niektore w ogole
			{
				cout << "Dla liczby sprawdzanej: " << h << endl;
				cout << a << "\t" << b << endl;
			}
			
			flag++;
		}
		
	}
	return 0;
}

