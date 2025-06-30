#include <iostream>
using namespace std;
#define TAM 50
class myString 
{
public:
    static int tamanhoIgual(string A, string B);
    static int tamanhoIgualRec(string A, string B, int i);
};
int myString::tamanhoIgual(string A, string B)
{
    int i=0;
    bool teste;
    do
    {
        if(A[i]==B[i]) 
        {
            teste= true;
            i++;
        }
        else teste= false;
    } while (A[i]!='\0' && B[i]!='\0' && teste);
    return i;
}
int myString::tamanhoIgualRec(string A, string B, int i)
{
    bool teste= true;
    if(A[i]!=B[i]) teste= false;
    if (A[i]!='\0' && B[i]!='\0' && teste)
    {
        return myString::tamanhoIgualRec(A, B, i+1);
    }
    else return i;
}
int main() 
{
    string A, B;
    cout << "\nDigite a primeira string: ";
    getline(cin, A);
    cout << "\nDigite a segunda string: ";
    getline(cin, B);
    cout << "\n\nCaracteres iguais desde o início (iterativo): " << myString::tamanhoIgual(A, B);
    cout << "\n\nCaracteres iguais desde o início (recursivo): " << myString::tamanhoIgualRec(A, B, 0);
    return 0;
}