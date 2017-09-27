//Wyszukiwanie pierwiastka rownania x^2=a metod¹ Newtona 
#include<iostream>

using namespace std;

int main()
{
	float a;
	cout << "Podaj liczbe dodatnia a: " << endl;
	cin >> a;		//Dla ulatwienia przyjmujemy np. liczbe a=5*/ update: a jest jednak wpisywane
	float up=a;		//gorna graica przedzialu, w ktorym szukamy
	float down=0;			//dolna granica przedzialu, w ktorym szukamy
	float x1=0.1,x2;
	float eps=0.001;			//dokladnosc
		
	do
	{
		x2= 0.5*x1+a/(2*x1);
		x1=x2;
	}
	while(x1*x1-a > eps);
	
	cout << "Obliczony pierwiastek jest rowny: " << x1 << endl;
	
	return 0;
}

