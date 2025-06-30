#include <iostream>
#include <time.h>
using namespace std;

int opcao()
{
    string st;
    cout << "\nDeseja lançar o dado?[S/N]: ";
    cin >> st;
    if (st == "s" || st =="S") return true;
    else return false;
}
int lancar()
{
    srand(time(0));
    return rand() % 6 +1;
}
void teste (int x)
{
    string array[]={"brincar", "jogar", "dancar", "trabalhar", "estudar", "cantar"};
    cout << "\nFoi sorteado você: " << array[x-1];
}
int main()
{
    while (opcao())
    {
        int x= lancar();
        teste(x);
    }
    cout << "Obrigado";
}