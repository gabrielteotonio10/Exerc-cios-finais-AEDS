#include <iostream>
using namespace std;
#define MAX_COL 3
#define MAX_LIN 3
class myMatrizes 
{
public :
    static double minmax(double M[][MAX_COL]) ;
};
double myMatrizes::minmax(double M[][MAX_COL])
{
    double max[MAX_LIN];
    for (int i=0; i<MAX_LIN; i++)
    {
        max[i]= M[i][0];
        for (int j=1; j<MAX_COL; j++)
        {
            if (M[i][j]>max[i]) max[i]= M[i][j];
        }
    }
    double min= max[0];
    for (int i=1; i<MAX_LIN; i++)
    {
        if (max[i]<min) min= max[i];
    }
    return min;
}
void leia(double M[][MAX_COL])
{
    cout << "\nDigite uma matriz 3x3";
    for (int i=0; i<MAX_LIN; i++)
    {
        for (int j=0; j<MAX_COL; j++)
        {
            cout << "\nDigite: ";
            cin >> M[i][j];
        }
    }
}
int main() 
{
    double M[MAX_LIN][MAX_COL];
    leia(M);
    cout << "\nMINMAX é igual a " << myMatrizes::minmax(M);
}