//Program wyszukujacy metoda bisekcji rozwiazanie rownania x^x=2016 dla zadanego przedzialu.
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	float up=5.0;		//gorna granica przedzialu, w ktorym szukany jest pierwiastek
	float down=0;		//dolna granica przedzialu, w ktorym szukany jest pierwiastek
	float eps=0.000001;		//dokladnosc 
	float x1=(up+down)/2;
	
	if(pow(x1,x1)==2016)
	{
		cout << "Rozwi¹zaniem tego równania jest liczba: " << x1 << endl;
		return 0;
	}
	
	while(fabs(up-down) > eps)
	{
		x1=(up+down)/2;
		
		if(pow(x1,x1)-2016>0)
		{
			up=x1;
		}
		else
		{
			down=x1;
		}
	}
	
	cout << "Otrzymany pierwiastek jest rowny: " << x1 << endl;
	cout << "Wynik, jaki daje otrzymany pierwiastek: " << pow(x1,x1) << endl;
	
	
	/*int t;
	cin >> t;
	do
	{
		cout << pow(t,t) << endl;
		cout << "Wproadz t:	";
		cin >> t;
	}
	while(t!=0);
	*/
	
	return 0;
}

