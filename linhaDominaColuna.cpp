#include <iostream>
using namespace std;
#define NUM_COL 3
#define NUM_LIN 3
void pegandoMatriz(float m[][NUM_COL])
{
    cout << "\nDigitando matriz [" << NUM_LIN << "][" << NUM_COL << "]";
    cout << endl;
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
int linCol(string lc)
{
    int x;
    cout << "\nDigite a " << lc << ": ";
    cin >> x;
    return x;
}
bool teste (float matriz[][NUM_COL], int linha, int coluna)
{
    bool t= true;
    for (int i=0; i<NUM_COL; i++)
    {
        if(matriz[linha-1][i]<=matriz[i][coluna-1]) t= false;
    }
    return t;
}
int main ()
{
    float matriz[NUM_LIN][NUM_COL];
    pegandoMatriz(matriz);
    escrevendo(matriz);
    int linha= linCol("linha");
    int coluna= linCol("coluna");
    bool resultado= teste(matriz, linha, coluna);
    if (resultado==true) cout << "\nLinha é dominante";
    else cout << "\nLinha não é dominante";
    return 0;
}