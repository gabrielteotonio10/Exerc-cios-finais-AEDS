#include <iostream>
using namespace std;
//Veiculos
class Veiculos{
private:
    string modelo; 
    int ano;
    string tracao;
public:
    static int QNT;

    void setModelo(string modelo);
    string getModelo();

    void setAno(int ano);
    int getAno();

    void setTracao(string tracao);
    string getTracao();

    virtual void escreve()=0;
    
    Veiculos(string modelo, int ano, string tracao)
    {
        setModelo(modelo);
        setAno(ano);
        setTracao(tracao);
        Veiculos::QNT++;
    }
    Veiculos()
    {
        Veiculos::QNT++;
    }
    ~Veiculos()
    {
        Veiculos::QNT--;
    }
};
int Veiculos::QNT=0;
void Veiculos::setModelo(string modelo)
{
    this->modelo= modelo;
}
string Veiculos::getModelo()
{
    return this->modelo;
}

void Veiculos::setAno(int ano)
{
    this-> ano= ano;
}
int Veiculos::getAno()
{
    return this->ano;
}

void Veiculos::setTracao(string tracao)
{
    this-> tracao= tracao;
}
string Veiculos::getTracao()
{
    return this-> tracao;
}
//Carro
class Carro:public Veiculos{
public:
    void escreve()
    {
        cout << endl << "Carro: " << getModelo() << " - " << getAno() << " - " << getTracao();
    }
    Carro(string modelo, int ano, string tracao):Veiculos(modelo, ano, tracao) 
    {}
    Carro():Veiculos() 
    {}
};
//Moto
class Moto:public Veiculos{
public:
    void escreve()
    {
        cout << endl << "Moto: " << getModelo() << " - " << getAno() << " - " << getTracao();
    }
    Moto(string modelo, int ano, string tracao):Veiculos(modelo, ano, tracao)
    {}
    Moto():Veiculos() {}
};
//Main
int main()
{
    Veiculos* v[4];
    v[0] = new Carro("Gol", 2020, "dianteira");
    v[1] = new Carro("Civic", 2022, "dianteira");
    v[2] = new Moto("CB500", 2023, "corrente");
    v[3] = new Moto("XL125", 2019, "trazeiro");
    cout << endl << "Quantidade veiculos criados: " << Veiculos::QNT; 
    for (int i=0; i<Veiculos::QNT; i++)
    {
        v[i]->escreve();
    }
    return 0;
}