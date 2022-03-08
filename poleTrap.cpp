#include<iostream>
#include<iomanip>
using namespace std;

double funkcja(double x)
{
    return x*x+x+2;
}

double Pole(int a, int b, int n)
{
    double h = (b-a)/(double)n;
    double suma;
    double podstawa_a = funkcja(a), podstawa_b;
        
    for(int i=1;i<=n;i++)
    {
        podstawa_b = funkcja(a+h*i);
        suma += (podstawa_a+podstawa_b);
        podstawa_a = podstawa_b;
    }
    return suma*0.5*h;
}

int main()
{
    int a, b, n;
    cout<<"Podaj przedział [a, b]\na = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    cout<<"Podaj liczbę trapezów: ";
    cin>>n;
    
    if(!(a<b))
        cout<<"To nie jest przedział!";
    else
        cout<<"Pole figury wynosi: "<<fixed<<setprecision(2)<<Pole(a, b, n);    

    return 0;
}
