#include <iostream>
using namespace std;
#define TAM 5

class Cidade{
private:
    string nome;
    float distanciaBH;
public:
    void setNome(string nome);
    string getNome();

    void setDistanciaBH(float distanciaBH);
    float getDistanciaBH();

    bool distanciaMenor(float distancia);

    Cidade()
    {}
    Cidade (string nome, float distanciaBH)
    {
        setNome (nome);
        setDistanciaBH(distanciaBH);
    }
};
void Cidade::setNome(string nome)
{
    this->nome= nome;
}
string Cidade::getNome()
{
    return this->nome;
}

void Cidade::setDistanciaBH(float distanciaBH)
{
    this->distanciaBH= distanciaBH;
}
float Cidade::getDistanciaBH()
{
    return this->distanciaBH;
}

bool Cidade::distanciaMenor(float distancia)
{
    if (this->distanciaBH < distancia) return true;
    else return false;
}

void digitandoTAMCidades(Cidade *c[])
{
    string nome;
    float distancia;
    for (int i=0; i<TAM; i++)
    {
        cout << "\nDigite o " << i << ".o nome: ";
        cin >> nome;
        cout << "\nDigite a " << i << ".a distancia em km: ";
        cin >> distancia;
        c[i]= new Cidade (nome, distancia);
    }
}

void cidadesMenosDe60km(Cidade *c[])
{
    cout << "\n\nCidade a menos de 60 Km: ";
    for (int i=0; i<TAM; i++)
    {
        if (c[i]->getDistanciaBH()<60) cout << endl << c[i]->getNome();
    }
}

void cidadesMenosDe60kmRec(Cidade *c[], int i)
{
    if (i==0) cout << "\n\nCidade a menos de 60 Km: ";
    if (i<TAM)
    {
        if (c[i]->getDistanciaBH()<60) cout << endl << c[i]->getNome();
        cidadesMenosDe60kmRec(c, i+1);
    }
}

void distanciaMaior(Cidade *c[], int x, int i)
{
    if (i==0) cout << "\nCidades com distância maior que " << x << ": ";
    if (i<TAM)
    {
        if (x<c[i]->getDistanciaBH()) cout << endl << c[i]->getNome();
        distanciaMaior(c, x, i+1);
    }
}

void distanciaMaior (Cidade *c[])
{
    int x;
    cout << "\nDigite a distância que deseja ver: ";
    cin >> x;
    distanciaMaior(c, x, 0);
}

int main ()
{
    Cidade *c[TAM];
    digitandoTAMCidades(c);
    cidadesMenosDe60km (c);
    cidadesMenosDe60kmRec (c, 0);
    distanciaMaior(c);
    for (int i = 0; i < TAM; i++)
    {
    delete c[i];
    }
    return 0;
}