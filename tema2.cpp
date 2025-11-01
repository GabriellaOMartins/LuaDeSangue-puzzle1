#define _WIN32_WINNT 0x0600
#define _WIN32_IE 0x0500
#include <iostream>
#include <windows.h>
#include <shlobj.h>
#include <fstream>
#include <string>

using namespace std;

// Função para copiar arquivos binários
bool copiarArquivo2(const string& origem, const string& destino) {
    ifstream src(origem, ios::binary);
    ofstream dst(destino, ios::binary);
    return src && dst && (dst << src.rdbuf());
}

void prenda();

void rodarTema2() {
    
    const string senhaCorreta = "sangue";
    string senhaDigitada;
    int tentativas = 0;
    bool acessoLiberado = false;

    // Loop de autenticação
    do {
        cout << "Arquivo: Pontos e fissura e cora de espinhos" << endl;
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

    cout << "Pontos de fissura: Locais em que a membrana é mais fina e se torna mais fácil acesar " <<
            "o outro lado, mas para manipular essa fina camada nesse ponto de maior fragilidade " <<
            "é preciso um controle minucioso do que é feito, pois qualquer coisa que ultrapasse o limite" <<
            " é capaz de fazer uma abertura na membrana, acabando dessa maneira, com o mundo que conhecemos " << endl <<
            "   " << endl <<
            "Coroa de espinhos: Este item tende a mudar sua aparencia de acordo com seu usuário " << 
            "por essa razão é difícil rastrea-la. Este artefato é capaz de conferir ao portador, !@#%&," <<
            "juntamente a relíquia de sangue, ainda não sabems seu efeito. Mas sabemos que um rei precisa de um trono " <<
            "e também de uma cora..." << endl <<
            "   " << endl <<
            "Pontos de fissura encontrados: " << endl;

            string cidades[20] = {
        "Campos do Jordao",
        "Pindamonhangaba",
        "Sao Francisco Xavier",
        "Caraguatatuba",
        "Sapuçai-Mirim",
        "Sao Bento do Sapucai",
        "Queluz",
        "Cacapava",
        "Guaratingueta",
        "Lagoinha",
        "Cruzeiro",
        "Piquete",
        "Sao Jose dos Campos",
        "Santo Antonio do Pinhal",
        "Tremembe",
        "Paraibuna",
        "Taubate",
        "Natividade da Serra",
        "Sao Luiz do Paraitinga",
        "Ilhabela"
    };

    for(int i = 0; i < 20; i++) {
        cout << i + 1 << ". " << cidades[i] << endl;
            
    }

    char desktopPath[MAX_PATH];
    HRESULT hr = SHGetFolderPathA(NULL, CSIDL_DESKTOPDIRECTORY, NULL, 0, desktopPath);

    // Caminhos para cópia
    string pastaDestino = string(desktopPath) + "\\componentes de ritual";
    string arquivoOrigem = "C:\\luadesangue\\imagensparacopiar\\SG.png";
    string arquivoDestino = pastaDestino + "\\SG.png";

    // Tentativa de cópia
    if (copiarArquivo2(arquivoOrigem, arquivoDestino)) {
        cout << "Arquivo copiado com sucesso para: " << arquivoDestino << endl;
    } 

    }