#include <iostream>
using namespace std;
#define NUM_LIN 2
#define NUM_COL 2
void pegandoMatriz(float m[][NUM_COL], int x)
{
    cout << "\n\nDigitando a " << x << ".a matriz";
    for (int i=0; i<NUM_LIN; i++)
    {
        for (int j=0; j<NUM_COL; j++)
        {
            cout << "\nDigite a matriz[" << i << "][" << j << "]: ";
            cin >> m[i][j];
        }
    }
}
void escrevendo(float m[][NUM_COL])
{
    cout << endl;
    for (int i=0; i<NUM_LIN; i++)
    {
        for (int j=0; j<NUM_COL; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }  
}
void escrevendo(float m[][NUM_COL])
{
    cout << endl;
    for (int i=0; i<NUM_LIN; i++)
    {
        for (int j=0; j<NUM_COL; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }  
}
void multiplicacao(float m1[][NUM_COL], float m2[][NUM_COL])
{
    float matriz[NUM_COL][NUM_LIN];
    for (int i=0; i<NUM_LIN; i++)
    {
        for (int x=0; x<NUM_COL; x++)
        {
            float acumulador=0;
            for (int j=0; j<NUM_COL; j++)
            {
            acumulador+= m1[i][j]*m2[j][x];
            }
            matriz[i][x]= acumulador;
        }
    }
    escrevendo(matriz);
}
int main()
{
    float m1[NUM_LIN][NUM_COL];
    pegandoMatriz(m1, 1);
    float m2[NUM_LIN][NUM_COL];
    pegandoMatriz(m2, 2);

    escrevendo(m1);
    escrevendo(m2);

    multiplicacao(m1, m2);
}