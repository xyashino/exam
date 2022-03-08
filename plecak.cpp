#include <iostream>
using namespace std;


struct przedmiot 
{
    int wart, waga;
    string nazwa;
    double rentownosc;
};

void ustawDane(przedmiot przedmiot[],string nazwa[],int wartosc[],int waga[] ,int n){
    for(int i=0;i<n;i++){
        przedmiot[i].nazwa=nazwa[i];
        przedmiot[i].wart=wartosc[i];
        przedmiot[i].waga=waga[i];
        przedmiot[i].rentownosc = przedmiot[i].wart/przedmiot[i].waga;
    }
}

przedmiot znajdzNajWartPrzedmiot(przedmiot arr[], int wagaPlecaka,int n)
    {
    
    int index=0;
    double rentownosc=0;
    
    for (int i = 0; i < n; i++)
    {
 
        
        if (arr[i].waga <= wagaPlecaka)
       {
               if( rentownosc<arr[i].rentownosc)
            {
                  rentownosc= arr[i].rentownosc;
                  index = i;
            }
           
       }
    }
    return arr[index];
}


void metodaPlecakowa (przedmiot arr[], int wagaPlecaka,int n)
{
   int wynik[n];
   int mem=wagaPlecaka;
   
   for(int i=0;i<n;i++){
       
       przedmiot item=znajdzNajWartPrzedmiot(arr,wagaPlecaka,n);
       
       wynik[i]=wagaPlecaka/item.waga;
       
       wagaPlecaka=wagaPlecaka%item.waga;
       
       if(wynik[i]>0){
        cout<<item.nazwa<<" - "<<wynik[i]<<" szt."<<endl;
       }
      
    }
};




int main (){
    
  double wagaPlecaka ;
  przedmiot kolekcja[3];
  
  string nazwaPrzedmiotu[]={"Zeszyt","Podrecznik","Chusteczki"};
  int wartPrzedmiotu[]={3000,50000,200};  // W groszach !!!
  int wagaPrzedmiotu[]={700,1000,100}; // W gramach !!!

  ustawDane(kolekcja,nazwaPrzedmiotu,wartPrzedmiotu,wagaPrzedmiotu,3);
  
  cout << "Podaj max wage plecaka (w kg) : ";
  cin >> wagaPlecaka;
  wagaPlecaka*=1000;
  
  metodaPlecakowa(kolekcja,(int) wagaPlecaka,3);
  
  return 0;
}
