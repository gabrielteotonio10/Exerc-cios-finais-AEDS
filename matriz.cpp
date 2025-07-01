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
    return x;  // <-- Correção aqui
}

bool teste(char letra, string palavra)
{
    int i = 0;
    while (palavra[i] != '\0')  // <-- Melhor que o do...while aqui
    {
        if (letra == palavra[i]) return true;
        i++;
    }
    return false;
}

int main()
{
    char l = letra();
    string p = palavra();
    bool t = teste(l, p);

    if (t)
        cout << "\nLetra encontrada na palavra!" << endl;
    else
        cout << "\nLetra NÃO encontrada na palavra!" << endl;

    return 0;
}
