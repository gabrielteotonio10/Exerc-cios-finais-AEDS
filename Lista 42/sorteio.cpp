#include <iostream>
#include <time.h>
using namespace std;

int ler()
{
    int x;
    cout << "\nDigite o número que deseja: ";
    cin >> x;
    return x;
}
bool conferindo (int x)
{
    int soma=0;
    bool teste;
    for (int i=x/2; i>0; i--)
    {
        if (x%i==0) soma+=i;
    }
    if(x== soma) teste= true;
    else teste= false;
    return teste;
}
int main()
{
    int x= ler();
    bool teste= conferindo(x);
    if(teste)
    {
        cout << "\nÉ um natural perfeito";
    }
    else cout << "\nNão é um natural perfeito";
    return 0;
}