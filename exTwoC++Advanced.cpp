#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>

using namespace std;

int main() {
    // ... (código para criar um socket, vinculá-lo a uma porta e esperar por conexões)

    char buffer[1024];
    while (true) {
        // ... (código para aceitar uma conexão, ler dados do cliente e enviar a resposta)
    }

    return 0;
}