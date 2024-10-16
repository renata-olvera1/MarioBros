#include <iostream>
#include <Porcentaje.hpp>

int main(){
    Porcentaje foco1;
    Porcentaje foco2;
    Porcentaje foco3;

    foco1.Incrementar(10);
    foco2.Incrementar(10);
    foco3.Disminuir(4);

    std::cout
    <<"Foco 1:"
    <<foco1.Imprimir()
    <<std::endl;

}