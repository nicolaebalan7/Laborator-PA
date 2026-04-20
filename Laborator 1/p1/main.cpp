#include "lista.h"



int main()
{
    LDI* l=new LDI;
    l->inserare(8,0);
    l->afisare();
    l->inserare(7,0);
    l->afisare();
    l->inserare(9,1);
    l->afisare();
    l->inserare(10,3);
    l->afisare();


    return 0;
}