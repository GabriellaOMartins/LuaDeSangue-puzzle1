#define _WIN32_WINNT 0x0600
#define _WIN32_IE 0x0500
#include <iostream>
#include <windows.h>
#include <shlobj.h>
#include <fstream>
#include <string>

using namespace std;

void prenda();

void rodarTema6() {
    const string senhaCorreta = "30moedasdeprata";
    string senhaDigitada;
    int tentativas = 0;
    bool acessoLiberado = false;

    // Loop de autenticação
    do {
        cout << "Arquivo: Possíveis receptáculos" << endl;
        cout << "Senha: ";
        cin >> senhaDigitada;

        if (senhaDigitada == senhaCorreta) {
            cout << "Acesso liberado\nCarregando arquivo..." << endl;
            acessoLiberado = true;
        } else {
            cout << "Senha incorreta, tente novamente." << endl;
            tentativas++;
            if (tentativas == 3) {
                prenda();
            }
        }

    } while (!acessoLiberado);

     string nomes[20] = {
        "Lucas Antunes Ribeiro", "Camila Duarte", "Sabrina Rocha Lima",
        "Poliana Moreno de Lima", "Daniele Moreno de Lima", "Henrique Vidal Correia",
        "Victor Almeida", "Letícia Moraes Tavares", "Mateus Quintana Lopes",
        "Isadora Ferreira", "Rafael Montenegro", "Tiago Henrique Salles",
        "Juliana Nogueira Silveira", "Bruno César Leal", "Natália Souza Barros",
        "Marcos Vinícius de Queiroz", "Lorena Matos de Abreu", "Eduardo Martins Peçanha",
        "Vanessa Cristina Diniz", "Ítalo Ramon de Jesus"
    };

    for (size_t i = 0; i < 20; ++i) {
        cout << i + 1 << ". " << nomes[i] << endl;
    }
    
    cout << "adjus" << endl <<
            "arq 111" << endl;

}