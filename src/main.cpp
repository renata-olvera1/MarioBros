#include <iostream>
#include <Porcentaje.hpp>
#include <list>
using namespace std;

int main(){
    std::list<Porcentaje> focos;


    Porcentaje foco1;
    Porcentaje foco2;
    Porcentaje foco3;

    focos.emplace_back(foco1);
    focos.emplace_back(foco2);
    focos.emplace_back(foco3);

    for(auto &&f : focos)
    {
        f.Incrementar(10);
    }

    foco1.Incrementar(10);
    foco2.Incrementar(10);
    foco3.Disminuir(4);

    std::cout
    <<"Foco 1:"
    <<foco1.Imprimir()
    <<std::endl;

}