//g++ -DBUILD_DLL main.cpp 

#ifdef DIA
    #define MSG "Bom dia!"
#elif defined TARDE
    #define MSG "Boa tarde!"
#else
    #define MSG "Boa noite!"
#endif

#include <iostream>

int main() {
    std::cout << MSG << std::endl;
    return 0;
}

// g++ -o exemplo_macro.exe exemplo_macro.cpp -DDIA
// .\exemplo_macro.exe