//Program liczacy silnie nierekurencyjnie i bez funkcji
#include<iostream>

using namespace std;

int main()
{
	int n;							//zmienna, ktorej silnia ma byc policzona
	cout << "Podaj liczbe, ktorej silnie, chcesz policzyc: " << endl;
	cin >> n;
	int num=n;					//pomocnicza do liczenia silnii
	
	if(n==1 || n==0)
	{
		cout << "Silnia z danej liczby jest rowna: 1" << endl;
	}
	else
	{
		while(n>1)
		{
			n-=1;
			num*=n;
		}
		cout << "Silnia z danej liczby jest rowna: " << num << endl; 
	}
	
	return 0;
}

