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
	int g,h;
	
	for(int i=1;i<10;i++)
	{
		h=i;
		g=0;
		//cout << i << endl;
		for(int j=0;j<1;j++)
		{
			g+=pow(h%10,1);
			h=h/10;
			//cout << g << endl;
		}
		if(odd(g) && g==i)
		{
			cout << "Dana liczba spelnia ten warunek: " << g << endl;
		}
	}
	
	cout << " Nie spelniaja tego warunku " << endl;	
	/*int t;
	cout << "Podaj liczbe, która chcesz sprawdzic, czy jest pierwsza:" << endl;
	cin >> t;
	
	if(odd(t))
	{
		cout << "Podana liczba jest liczba pierwsza" << endl;
		cout << odd(t) << endl;
	}
	else
	{
		cout << "Podana liczba nie jest liczba pierwsza" << endl;
		cout << odd(t) << endl;
	}*/
	return 0;
}

