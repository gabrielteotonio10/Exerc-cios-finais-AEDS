#include <iostream>
using namespace std;
#define MAX_COL 4
#define MAX_LIN 4

class myMatrizes {
public :
    static int posicaoMaior(double m[][MAX_COL]);
};
int myMatrizes::posicaoMaior(double m[][MAX_COL])
{
    int linha, coluna;
    double maior= m[0][0];
    for (int i=0; i<MAX_LIN; i++)
    {
        for (int j=0; j<MAX_COL; j++)
        {
            if (m[i][j]>maior) 
            {
                maior= m[i][j];
                linha= i;
                coluna= j;
            }
        }
    }

    int x=-2;
    if(linha==coluna) x= 0;
    else if(linha>coluna) x= -1;
    else x= 1;
    return x;
}
void leia (double m[][MAX_COL])
{
    for (int i=0; i<MAX_LIN; i++)
    {
        for (int j=0; j<MAX_COL; j++)
        {
            cout << "\nDigite a [" << i+1 << "] [" << j+1 << "] da matriz: ";
            cin >> m[i][j];
        }
        cout << endl;
    }
}
int main() 
{
    double m[MAX_LIN][MAX_COL];
    leia(m);
    int posicao = myMatrizes::posicaoMaior(m);
    if(posicao==0) cout << "\nMaior valor posicionado na diagonal principal";
    else if(posicao==1) cout << "\nMaior valor posicionado acima da diagonal principal";
    else cout << "\nMaior valor posicionado abaixo da diagonal principal";
}