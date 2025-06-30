#include <iostream>
using namespace std;
#define MAX 50
// Class FigGeo
class FigGeo
{
private:
    string cor;
public:
    static int TAMgeral;
    int getQuantidade();
    void setCor(string cor);
    string getCor();
    virtual void leia()=0;
    virtual void escreva()=0;
    virtual float perimetro()=0;
    virtual float area()=0;
    FigGeo()
    {
        FigGeo::TAMgeral++;
    }
    
    ~FigGeo()
    {
        FigGeo::TAMgeral--;
    }
};
int FigGeo::TAMgeral=0;
void FigGeo::setCor(string cor)
{
    this->cor= cor;
}
string FigGeo::getCor()
{
    return this->cor;
}
int FigGeo::getQuantidade()
{
    return FigGeo::TAMgeral;
}
// Class círculo
class Circulo:FigGeo
{
private:
    float raio;
public:
    static int TAMcirculo;
    int getQuantidade();
    void setRaio(float raio);
    float getRaio();
    void leia()
    {

    }
    void escreva()
    {

    }
    float perimetro(int raio)
    {

    }
    float area(int raio)
    {
        return raio*raio*3,14;
    }
    Circulo()
    {
        Circulo::TAMcirculo++;
    }
    Circulo(float raio)
    {
        setRaio(raio);
        Circulo::TAMcirculo++;
    }
    Circulo(float raio, string cor)
    {
        setRaio(raio);
        setCor(cor);
        Circulo::TAMcirculo++;
    }
    ~Circulo()
    {
        Circulo::TAMcirculo--;
    }
};
int Circulo::TAMcirculo=0;
void Circulo::setRaio(float raio)
{
    this->raio= raio;
}
float Circulo::getRaio()
{
    return this->raio;
}
int Circulo::getQuantidade()
{
    return Circulo::TAMcirculo;
}
// Instruções iniciais
void instrucoes ()
{
    cout << "0- Sair do programa\n";
    cout << "1- Círculos\n";
    cout << "2- Quadrados\n";
    cout << "3- Triângulos\n\n";
}
// Escolhendo opções
int opcao()
{
    int x;
    bool erro;
    do
    {
        cout << "Digite o que deseja: ";
        cin >> x;
        if (x>=0 && x<=3) erro= false;
        else erro= true;
    } while (erro);
    return x;
}
// Main
int main()
{
    cout << "Bem vido ao programa, siga as instruções: \n";
    instrucoes();
    int x= opcao();
}