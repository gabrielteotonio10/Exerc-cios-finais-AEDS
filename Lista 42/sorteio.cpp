#include <iostream>
#include <time.h>
using namespace std;
void sorteandoIn()
{
    for (int i=0; i<6; i++)
    {
        int x= rand()%60 +1;
        cout << x << " ";
    }
}
void sorteandoIn(int i)
{
    if (i<6)
    {
        int x= rand()%60 +1;
        cout << x << " ";
        sorteandoIn(i+1);
    }
}
int main()
{
    srand(time(0));
    sorteandoIn ();
    cout << endl;
    sorteandoIn (0);
    return 0;
}