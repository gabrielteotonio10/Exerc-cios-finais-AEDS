#include <iostream>
using namespace std;
//Class transporte
class Transporte{
    private:
    public:
    virtual void mover()=0;
};
//Class bicicleta
class Bicicleta:public Transporte{
    public:
    void mover();
};
void Bicicleta::mover()
{
    cout << "\nPedalando bicicleta";
}
//Class carro
class Carro:public Transporte{
    public:
    void mover();
};
void Carro::mover()
{
    cout << "\nDirigindo carro";
}
//Class transporte
class Aviao:public Transporte{
    public:
    void mover();
};
void Aviao::mover()
{
    cout << "\nPilotando o aviao";
}
//Main
int main ()
{
    Transporte *t[6];
    t[0]= new Bicicleta;
    t[1]= new Carro;
    t[2]= new Aviao;
    t[3]= new Carro;
    t[4]= new Carro;
    t[5]= new Bicicleta;
    t[6]= new Bicicleta;
    t[7]= new Aviao;
    for (int i=0; i<6; i++)
    {
        t[i]->mover();
    }
}