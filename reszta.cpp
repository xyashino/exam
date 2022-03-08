#include<iostream>
using namespace std;



const int NOMINALY[]={50000,20000,10000,5000,2000,1000,500,200,100,50,20,10,5,2,1};
const int N=15;

int main()
{
    double kwota;
    int reszta[N];
    
    cout<<"Podaj kwote w zl : ";
    cin>>kwota;
    cout<<endl;
    
    kwota*=100;
    
    
    for(int i=0;i<N;i++){
        reszta[i]=(int)kwota/NOMINALY[i];
        kwota=(int)kwota%NOMINALY[i];
    }
    
    for(int i=0;i<N;i++){
        if(reszta[i]!=0){
            
            if(NOMINALY[i]>=100)
            cout << NOMINALY[i]/100 << "zl - "<<reszta[i]<<" szt."<<endl;
            else
            cout << NOMINALY[i] << "gr - "<<reszta[i]<<" szt."<<endl;
        }
    }
    
    return 0;
}
