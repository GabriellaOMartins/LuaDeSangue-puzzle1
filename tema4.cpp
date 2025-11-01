#define _WIN32_WINNT 0x0600
#define _WIN32_IE 0x0500
#include <iostream>
#include <windows.h>
#include <shlobj.h>
#include <fstream>
#include <string>

using namespace std;

void prenda();

void rodarTema4() {
    
    const string senhaCorreta = "alimento";
    string senhaDigitada;
    int tentativas = 0;
    bool acessoLiberado = false;

    // Loop de autenticação
    do {
        cout << "Arquivo: Santo Grão" << endl;
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

    cout << "Como ideia do senhor Victor, o chefe iniciou o projeto Santo Grão. O objetivo inicial era gerar uma fonte " <<
            "inesgotável de alimento para manter a sua e as demais unidades funcionando de forma independente ao exterior. " <<
            "Graças também ao senhor Mammon, isso se tornou possível, o gosto dos produtos gerados motrou-se ainda mais saboroso " <<
            "do que os produtos normais, isso sem contar também o ritmo extremamente rápido com que esse alimentos crescem." <<
            "O senhor Mammon avisou que podem existir alguns efeitos colaterais, os quais ele achou melhor não compartilhar, mas também " <<
            "disse que não precisamos nos preocupar. 'O maior risco é ela ser gostosa de mais HAHAHAHAHA', foi oq ele nos disse." <<
            "   " << endl <<
            "'Se queremos criar o rei perfeito, temos que ser mais do que Deus, e se ele multiplicou o pão, nós podemos multiplicar tudo'" << endl <<
            "Almeida Victor 2015." << endl;


    } 

