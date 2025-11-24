#include "systemtools.h"
#include <cstring>
#include <cctype>

void toUpper(char* str) {
    if (!str) return; // Verifica se o ponteiro não é nulo
    for (size_t i = 0; i < strlen(str); i++) {
        str[i] = std::toupper(str[i]);
    }
}

void toLower(char* str){
    if (!str) return; // Verifica se o ponteiro não é nulo
    for (size_t i = 0; i < strlen(str); i++) {
        str[i] = std::tolower(str[i]);
    }
}

void reverseText(char *str){
    if (!str) return; // Verifica se o ponteiro não é nulo
    size_t len = strlen(str);
    char* temp = new char[len + 1];
    for (size_t i = 0; i < len; i++) {
        temp[i] = str[len - i - 1];
    }
    temp[len] = '\0';
    strcpy(str, temp);
    delete[] temp;
}

void maskEmail(char* email){
    if(!email) return; // Verifica se o ponteiro não é nulo
    for(size_t i = 0; i < strlen(email); i++){
        if(email[i] == '@'){
            break;
        }
        email[i] = '*';
    }
}

int countWords(char* frase){
    if(!frase) return 0; // verifica se ponteiro nao eh nulo 
    int palavras=0;
    int i=0;
    while (frase[i] != '\0') {
        if (frase[i] == ' ') {
            palavras++;
    }
    i++;
    }

    // Se a frase não estiver vazia, há pelo menos uma palavra
    if (i > 0) {
        palavras += 1;
    }

    return palavras;
}


const char* getAppInfo() {
    return "SystemTools DLL v1.0 - Biblioteca de utilidades para manipiçar de strings.";
}
