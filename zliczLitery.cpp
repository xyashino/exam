#include<fstream>
#include<string>
using namespace std;

const string alfabet_w="AĄBCĆDEĘFGHIJKLŁMNŃOÓPQRSŚTUVWXYZŹŻ";

int main()
{
    int i,j;
    string napis;
    int Liczniki[35];
    
     for (i=0;i<35;i++)
     Liczniki[i]=0;
     
     
     
    ifstream wejscie ("dane.txt");
    
    while (!wejscie.eof())
    {
        getline(wejscie, napis);
        
        for (i=0;i<napis.size(); i++)
        {
            j=alfabet_w.find(toupper(napis[i]));
            if(j>=0 && j<35)
            Liczniki[j]++;
        }
    }
    
    wejscie.close();
    
    ofstream wyjscie ("wynikzliczania.txt");
    
    for (i=0;i<35; i++)
    {
        if(Liczniki[i]!=0)
        wyjscie<<alfabet_w[i]<<" - "<< Liczniki[i]<<endl;
    }
    
    wyjscie.close();
    return 0;
}
