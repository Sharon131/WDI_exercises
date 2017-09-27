//Program znajdujacy liczby zaprzyjaznione inteligentniejsza metda (metoda Eulare)
#include<iostream>
#include<cmath>

using namespace std;

bool odd(int a)
{
	if((a%2==0 && a!=2)||a==1)
	{
		return false;
	}
	for(int g=3;g<=sqrt(a) && a!=3;g++)
	{
		if(a%g==0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int p,q,r;		//Liczby, ktore sprawdzamy, czy as pierwsze dla wzoru eulera
	int n,k;		//
	int one=0,two=0;	//liczby zaprzyjaznione
	
	cout << "Znalezione liczby zaprzyjaznione to:" << endl;
	
	while(one<1000000 && two < 1000000)
	{
		cout << "n: " << n << endl;
		while(one<1000000 && two < 1000000 && k<=n)
		{
			cout << "k: " << k << endl;
			p=(pow(2,k)+1)*pow(2,n+1-k)-1;
			q=(pow(2,k)+1)*pow(2,n+1)-1;
			r=pow(pow(2,k)+1,2)*pow(2,2*n+2-k)-1;
			one=pow(2,n+1)*p*q;
			two=pow(2,n+1)*r;
			cout << "Obliczenia: " << endl << "p: " << p << "\t" << "r: " << r << "\t" << "q: " << q << endl;
			
			if(one>1000000 || two >1000000)
			{
				break;
			}
			
			if(odd(p) && odd(q) && odd(r))
			{
				cout << one << "\t" << two << endl;
			}
			k++;
		}
		k=0;
		n++;
		cout << endl;
	}
	
	return 0;
}

