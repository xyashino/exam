#include <iostream>
#include <cmath>

using namespace std;

const double precyzja=0.000001;


double pierwiastek(double pole,double precyzja){
    
    double a=1., b=pole;
    
    while(fabs(a-b)>=precyzja){
        
        a = (a+b)/2;
        b = pole/a;
    }
    
    return a;
}



int main()
{
    double liczba;
    cout<<"Podaj liczbę, z ktorej chcesz wyznaczyc pierwiastek: ";
    cin>>liczba;
    
    
    cout<<"Pierwiastek liczby "<<liczba<<" to "<<fixed<<pierwiastek(liczba ,precyzja);
    return 0;
}
