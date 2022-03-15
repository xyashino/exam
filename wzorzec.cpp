#include <iostream>
using namespace std;

int szukajWzorca(string wzorzec, string tekst)
{
	for(int i=0;i <= tekst.size() - wzorzec.size();i++)
	{
		int n = 0;
		for(int j=0;j<wzorzec.size();j++)
		{
			if(wzorzec[j] != tekst[i + n])
				break;
			if(j == wzorzec.size() - 1)
				return i+1;
			n++;
		}
	}
	return -1;
}
int main()
{
	string wzorzec, tekst;
	cout<<"Podaj tekst: ";
	cin>>tekst;
	cout<<"Podaj wzorzec: ";
	cin>>wzorzec;
	
	int wynik = szukajWzorca(wzorzec, tekst);
	
	if(wynik != -1){
	    cout<<"Wzorzec znaleziono na pozycji "<<wynik;
	}
	    
	
	else{
	    cout<<"Wzorca nie znaleziono";
	}
		
	    
	return 0;
}
