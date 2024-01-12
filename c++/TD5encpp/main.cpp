#include <iostream>
#include <vector>
using namespace std;

int trouverCarDansStr (const string & chaine, const char & caract, const int & debu)
{
    size_t i (debu);
    while ( i < size(chaine) && chaine[i] != caract)
    {
        i += 1 ;
    }
    cout << "Le premier \'" << caract << "\' apparait a la " << i << " places." << endl ;
    return i ;
}


int compCaractV1 ( const string & chaine, const char & caract)
{
    int occurance (0) ;
    for (size_t i=0 ; i< size(chaine) ; i=i+1)
    {
        if (chaine[i] == caract)
            occurance += 1 ;
    }
    cout << "L'element \'" << caract << "' apparait " << occurance << " fois." << endl ;
    return occurance ;
}

void testcomptCaractV1 ()
{
    string chaine ;
    char caract ;
    cout << "Entez une chaine puis un caractere a rechercher a l'interieur." << endl ;
    cin >> chaine ;
    cin >> caract ;
    compCaractV1(chaine, caract) ;
}

int comptCaractV2 (const string & chaine, const char & caract)
{
    int occurences, pos, (o);
    while (true)
    {
        pos = trouverCarDansStr(chaine,caract,pos) ;

    }
}

int main()
{
    cout << "Hello Coline you are amazing !" << endl;
    trouverCarDansStr("il fait beau",'a',0) ;
    cout << compCaractV1("il fait beau",'a') ;
}
