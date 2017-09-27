//Inteligentniejszy sposob znalezienia liczb doskonalych wedlug sposobu Euklidesa
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
	int sum=0;			//zmienna przechowujaca sumy poteg dwojek
	int k=0;				//zmienna przechowujaca, w ktorym kroku jestesmy
	cout << "Obliczone liczby doskonale: " << endl;
	
	while(sum<1000000)
	{
		sum=0;
		for(int g=0;g<=k;g++)
		{
			sum+=pow(2,g);
		}
		if(odd(sum))
		{
			sum*=pow(2,k);
			if(sum>1000000)
			{
				break;
			}
			cout << sum << endl;
		}
		k++;
	}
	
	return 0;
}

