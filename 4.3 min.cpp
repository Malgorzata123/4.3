#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	ifstream in("liczby.txt");
	

	
		
		string liczba, najmniejsza;
	
		int minIndeks = 0;
		
		in>>liczba;
		
		najmniejsza = liczba;
		
		for(int i=1; i<1000; i++)
		{
			in>>liczba;
			
			if(liczba.length() < najmniejsza.length())
			{
				najmniejsza = liczba;
				minIndeks = i;
			} 
			else
				if(liczba.length()==najmniejsza.length())
					if(liczba < najmniejsza)
					{
						najmniejsza = liczba;
						minIndeks = i; 
					}	
		}
		
		cout<<"Najmniejsza: "<<minIndeks+1<<endl;

	
	
	
		
	return 0;
}
