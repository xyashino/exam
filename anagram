#include<iostream>
#include<string>
using namespace std;


//const string alfabet_w="AĄBCĆDEĘFGHIJKLŁMNŃOÓPQRSŚTUVWXYZŹŻ";
const string alfabet="ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int znajdzIndex(char znak)
{
    for(int i=0;i<alfabet.length();i++){
        if(toupper(znak) == alfabet[i]){
            return i;
        }
    }
}



string sortujWyraz(string wyraz){    
    
    int n = wyraz.length();
    
    for (int i=0;i<n-1;i++)
    {
    for (int j=0;j<n-i-1;j++)
        {
            if (znajdzIndex(wyraz[j]) > znajdzIndex(wyraz[j + 1]))
                swap(wyraz[j], wyraz[j + 1]);
        }
    }
    return wyraz;
}

int main()
{

    string wyraz1,wyraz2;
    

    
    cout<<"Podaj wyraz 1 : ";
    cin>>wyraz1;
    cout<<endl;
    
    cout<<"Podaj wyraz 2 : ";
    cin>>wyraz2;
    cout<<endl;
    
    
    
     if(sortujWyraz(wyraz1)!= sortujWyraz(wyraz2)){
         cout<<"To nie jest Anagram ! "<<endl;
         return 0;
     }
     
         cout<<"To jest Anagram ! "<<endl;

    return 0;
}
