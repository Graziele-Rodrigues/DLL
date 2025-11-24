#pragma once

#ifdef BUILD_DLL
    #define DLL_API __declspec(dllexport)
#else
    #define DLL_API __declspec(dllimport)
#endif

// Declarações das funções exportadas pela DLL
extern "C" {
    DLL_API void toUpper(char* str); // uso de char* para permitir modificação da string passada como argumento
    DLL_API void toLower(char* str);
    DLL_API void reverseText(char* str);
    DLL_API void maskEmail(char* email);
    DLL_API int countWords(char* frase);
    DLL_API const char* getAppInfo();
}