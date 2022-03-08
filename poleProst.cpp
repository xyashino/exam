#include<iostream>
#include<iomanip>
using namespace std;
 
double funkcja(double x)
{
     return x*x+x+2;
}
 
double Pole(int a, int b, int n)
{
  double x = (b-a)/(double)n;
  double suma;
  double srodek = a+(b-a)/(2.0*n);
 
  for(int i=0;i<n;i++)
  {
      suma+=funkcja(srodek);
      srodek+=x;  
  }
  return suma*x;
}
 
int main()
{
  int a, b, n;
  cout<<"Podaj przedział [a, b]\na = ";
  cin>>a;
  cout<<"b = ";
  cin>>b;
  cout<<"Podaj liczbę prostokatow: ";
  cin>>n;
 
  if(!(a<b))
    cout<<"To nie jest przedział!";
  else
    cout<<"Pole figury wynosi: "<<fixed<<setprecision(2)<<Pole(a, b, n);  

  return 0;
}
