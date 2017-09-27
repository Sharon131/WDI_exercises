//Program znajdujacy liczby doskonale
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int sum;					//Zmienna przechowujaca sume dzielnikow
	cout << "Liczby doskonale z tego przedzialu: " << endl;
	for(int h=2;h<1000000;h++)
	{
		sum=1;
		for(int g=2;g<=sqrt(h);g++)
		{
			if(h%g==0)
			{
				sum+=g;
			}
			if(g!=sqrt(h) && h%g==0)
			{
				sum+=h/g;
			}
		}
		if(sum==h)
		{
			cout << h << endl;
		}
	}
	return 0;
}

