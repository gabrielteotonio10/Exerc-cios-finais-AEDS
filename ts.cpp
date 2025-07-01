#include <iostream>
using namespace std;

char letra()
{
    char x;
    cout << "\nDigite a letra: ";
    cin >> x;
    return x;
}

string palavra()
{
    string x;
    cout << "\nDigite a palavra: ";
    cin >> x;
    return x;  
}

bool teste(char letra, string palavra, int i)
{
    if(palavra[i] != '\0')
    {
        if (letra == palavra[i]) return true;
        return teste(letra, palavra, i+1);
    }
    return false;
}

int main()
{
    char l = letra();
    string p = palavra();
    bool t = teste(l, p, 0);

    if (t)
        cout << "\nLetra encontrada na palavra!" << endl;
    else
        cout << "\nLetra NÃO encontrada na palavra!" << endl;

    return 0;
}
