#include <iostream>

#include "minha_matematica.h"

int main(){
    int x = 10;
    int y = 5;

    int soma = somar(x, y);
    int subtracao = subtrair(x, y);
    int multiplicacao = multiplicar(x, y);

    std::cout << "soma: " << soma << std::endl;
    std::cout << "subtracao: " << subtracao << std::endl;
    std::cout << "multiplicacao: " << multiplicacao << std::endl;

    return 0;
}
// 1. exportar o módulo: g++ -c -DBUILD_DLL minha_matematica.cpp -o minha_matematica.o 
// 2. gerar a dll: g++ -shared -o minha_matematica.dll minha_matematica.o "-Wl,--out-implib,libminha_matematica.a"
// o -WL,--out-implib gera o arquivo de importação necessário para o link dinâmico
// 3. compilar o programa principal com a dll: g++ main.cpp -L. -lminha_matematica -o app.exe