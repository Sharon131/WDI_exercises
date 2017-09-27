//Program srawdzajacy ile w przedziale 0-N jest liczb majacych w rozkladzie na czynniki pierwsze tylko 2,3,5
#include<iostream>

using namespace std;

int main()
{
	int n;			//liczba wyznaczajaca koniec przedzialu
	cout << "Podaj liczbe, ktora bedzie stanowila koniec przedzialu: " << endl;
	cin >> n;
	int num;			//pomocnicza do obliczen, aby mozna bylo zachoc n
	int flag=0;			//liczba przechowujaca ilosc szukanych liczb do tej pory;
	
	cout << "W tym przedziale znaleziono nastepujace liczby spelniajace podany warunek: " << endl;
	
	for(int g=1;g<=n;g++)
	{
		num=g;
		while(num!=1 && num%2==0)
		{
			num/=2;
		}
		while(num!=1 && num%3==0)
		{
			num/=3;
		}
		while(num!=1 && num%5==0)
		{
			num/=5;
		}
		if(num==1)
		{
			cout << g << endl;
			flag++;
		}
	}
	cout << "Ogolem tych liczb znaleziono: " << flag << endl;
	
	return 0;
}

