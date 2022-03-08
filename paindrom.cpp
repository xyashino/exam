#include<iostream>
using namespace std;


bool czyPalindrom(string wyraz){    
        
        for(int i=0;i<=wyraz.length()/2;i++){
            if(tolower(wyraz[i]) != tolower(wyraz[wyraz.length() - i - 1])) return false;
        } 
    return true;
}

int main()
{

    string wyraz;
    
    cout<<"Podaj Palindorm : ";
    cin>>wyraz;
    cout<<endl;
    
    if(czyPalindrom(wyraz)){
         cout<<"To jest Palindorm ! "<<endl;
         return 0;
    }
     
    cout<<"To nie  jest Palindorm ! "<<endl;

    return 0;
}
