
// Execucao de funcoes da DLL 
// 1. exportar o módulo: g++ -c -DBUILD_DLL systemtools.cpp -o systemtools.o 
// 2. gerar a dll: g++ -shared -o systemtools.dll systemtools.o "-Wl,--out-implib,libsystemtools.a" -- se for rodar fora powershell pode tirar aspas
// 3. compilar o programa principal com a dll: g++ main.cpp -L. -lsystemtools -o app.exe
// 4. rodar .\app.exe

#include <iostream>
#include "systemtools.h"  // Header da DLL


int main() {
    int op;
    while(true){
        std::cout << "Menu:\n1. Converter Maiuscula\n2. Converter Minusculo\n3. Inverter Texto\n4. Mascarar email\n5. Contar palavras\n6. App Info\n7. Sair\nEscolha uma opcao: ";
        std::cin >> op;
        char text[255];

        switch(op){
            case 1:
                std::cout << "Entre com texto: ";
                std::cin.ignore(1000, '\n'); // limpa buffer
                std::cin.getline(text, 256); 
                toUpper(text);
                std::cout << "Maiuscula: " << text << std::endl;
                break;
            case 2:
                std::cout << "Entre com texto: ";
                std::cin.ignore(1000, '\n'); // limpa buffer
                std::cin.getline(text, 256); 
                toLower(text);
                std::cout << "Minusculo: " << text << std::endl;
                break;
            case 3:
                std::cout << "Entre com texto: ";
                std::cin.ignore(1000, '\n'); // limpa buffer
                std::cin.getline(text, 256); 
                reverseText(text);
                std::cout << "Inverso: " << text << std::endl;
                break;
            case 4:
                std::cout << "Entre com email: ";
                std::cin.ignore(1000, '\n'); // limpa buffer
                std::cin.getline(text, 256);
                maskEmail(text);
                std::cout << "Email mascarado: " << text << std::endl;
                break;
            case 5:
                std::cout << "Entre com uma frase: ";
                std::cin.ignore(1000, '\n'); // limpa buffer
                std::cin.getline(text, 256); 
                std::cout << "A frase possui: " << countWords(text) << " palavras."<< std::endl;
                break;
            case 6:
                std::cout << getAppInfo() << std::endl;
                break;
            case 7:
                return 0;
            default:
                std::cout << "Op invalida. Tente novamente." << std::endl;
        }
    }
    return 0;
}
