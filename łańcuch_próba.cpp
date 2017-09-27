//Program testowy do wyprobowania ³añcuchów odsy³aczowych
#include<iostream>

struct point
{
	int x;
	int y;
	point *next;
};

using namespace std;

int main()
{
	point* first;
	first=new point;
	point* n1=new point;
	point* n2;
	
	int n;													//liczba punktow(wezlow lancucha)
	int a, b;												//pomocnicze do wpisania do struktury
	cout << "Ile punktow chcesz wprowadzic? " << endl;
	cin >> n;
	cout << "Podaj kolejno wspolrzedne x i y wybranych punktow, z ktorych chcesz stworzyc lancuch: " << endl;
	cin >> a >> b;
	first->x=a;
	first->y=b;
	n1=first;
	
	for(int i=1;i<n;i++)
	{
		n2=new point;
		n1->next=n2;
		cin >> a >> b;
		n2->x=a;
		n2->y=b;
		n2->next=NULL;
		n1=n2;
	}
	
	cout << "A teraz wypisanie podanego lancucha: " << endl;
	
	n1=first;
	while(n1!=NULL)
	{
		cout << n1->x << "\t" << n1->y << endl;
		n1=n1->next;
	}
	
	return 0;
}

