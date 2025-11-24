# DLL Tools

Ferramentas para trabalhar com strings.

## Arquivos

- `systemtools.cpp` - Implementação das funções de sistema
- `systemtools.h` - Definições das funções
- `main.cpp` - Programa principal

## Como usar

Compile o projeto e execute.
1. exportar o módulo: g++ -c -DBUILD_DLL systemtools.cpp -o systemtools.o 
2. gerar a dll: g++ -shared -o systemtools.dll systemtools.o "-Wl,--out-implib,libsystemtools.a" 
3. compilar o programa principal com a dll: g++ main.cpp -L. -lsystemtools -o app.exe
4. rodar .\app.exe