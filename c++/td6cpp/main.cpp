/*
#include <iostream>
#include <vector>
using namespace std;

// Exercice 1

bool isupper(const char & car)
{
    return ('A' <= car && car <= 'Z');
}

bool isLower(const char & car)
{
    return ('a' <= car && car <='z');
}

bool isdigit(const char & car)
{
    return('0'<= car && car <= '9');
}

bool  isespace(const char & car)
{
    return(car == '' && car == '/t' && car == '/n');
}

// Exercice 2

int comterdoublonV0(const string & chaine)
{
    if (size(chaine) < 2)
    {
        return 0;
    }
    int nbdoub (0);
    int compt (1);
    while (size(chaine)-1 != compt)
    {
        if(isespace (chaine[i]))continue;
            if(chaine[compt] == compt[compt-1]  chaine[compt-1] == chaine[compte+1])
    {
        nbdoub = nbdoub +1;
        compt = compt + 1;
    }
    }
    compt = compt + 1;
}
return nbdoub;
}



int findfirstdoublon(chaine : string) return int;
{
int (nbdoub) = 0;
int (compt) = 1;
while(taille(chaine) != compt)
{
    if(isespace (chaine[i]))continue;
    if(chaine[compt] == compt[compt+1]  chaine[compt] == chaine[compte+2])
        {
          return compt;
        }
    compt = compt + 1;
}
return compt;
}



int trouveCarDansStr(caract: in caractere,chaine: in string,dobut: in entier_naturel) return int;
{
    int i;
    i = dobut;
    while(i<taille(chaine) && chaine[i] != caract)
    {
        i = i+1;
    }
    return i;
}

int comptageCaractere(caract: in caractere,chaine:in chaine_de_caractere)return int;
{
int (cpt) = 0;
int (pos) = 0;
while(true)
{
    pos = trouveCarDansStr(caract,chaine,pos);
    if(pos == taille(chaine))
        break;
    cpt = cpt+1;
    pos = pos+1

}
return cpt;

}


int main()
{
string (ch);
ch = («il fait beau»);
char (caract);
caract = i;
int (compteur);
compteur = trouveCarDansStr(caract,ch,5)

}
*/
