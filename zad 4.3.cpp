#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	ifstream in("liczby.txt");
	
	string liczby[1000];
	string najwieksza = liczby[0];
	int najwiekszaIndeks = 0;
	string najmniejsza = liczby[0];
	int najmniejszaIndeks = 0;
	for(int i = 0; i < 1000; i++)
	{
		in>>liczby[i];
	}
	for(int i = 1; i < 1000; i++)
	{
		if(liczby[i].length() > najwieksza.length() || (liczby[i].length() == najwieksza.length() && liczby[i] > najwieksza ))
		{
		
			najwieksza = liczby[i];
			najwiekszaIndeks = i; 
		}
	
	}
	for(int i = 1; i < 1000; i++)
	{
		if ((liczby[i].length() < najmniejsza.length()) || ((liczby[i].length() == najmniejsza.length()) && (liczby[i] < najmniejsza))) 
		{	
			
			//cout<<i; //to siê nie wyœwietla w ogóle :( 
			najmniejsza = liczby[i];
			najmniejszaIndeks = i;

		}
	}
	cout<<najwiekszaIndeks+1<<endl<<endl;
	cout<<najmniejszaIndeks+1<<endl; 
 
}
