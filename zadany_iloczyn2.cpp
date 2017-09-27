//Program znajdujacy pare o zanadym ioczynie w tablicy dwuwymiarowej
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
	srand(time(NULL));
	int t;								//rozmiar tablicy
	cout << "Podaj rozmiar badanej tablicy: " << endl;
	cin >> t;
	int **tab=new int*[t];
	
	for(int h=0;h<t;h++)
	{
		tab[h]=new int[t];
		for(int g=0;g<t;g++)
		{
			tab[h][g]=rand()%20;
			while(tab[h][g]==0)
			{
				tab[h][g]=rand()%20;
			}
		}
	}
	
	int il;						//zadany iloczyn
	cout << "Podaj iloczyn: " << endl;
	cin >> il;
	int a,b;							//sprawdzane do iloczynu
	
	cout << "Zadany iloczyn tworza odpowiednie pary:" << endl;
	for(int i=0;i<t;i++)
	{
		for(int j=0;j<t;j++)
		{
			a=tab[i][j];
			if(il%a==0)
			{
				for(int k=i;k<t;k++)
				{
					for(int l=+1;l<t-1;l++)
					{
						b=tab[k][l];
						if(a*b==il)
						{
							cout << a << "\t" << b << endl;
						}
					}
				}
			}
		}
	}
	
	cout << "Wygenerowana tablica do sprawdzenia, co jest nie tak, jak trzeba:" << endl;
	for(int y=0;y<t;y++)
	{
		for(int z=0;z<t;z++)
		{
			cout << tab[y][z] << "\t";
		}
		cout << endl;
	}
	return 0;
}

