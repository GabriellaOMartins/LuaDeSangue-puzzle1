#define _WIN32_WINNT 0x0600
#define _WIN32_IE 0x0500
#include <iostream>
#include <windows.h>
#include <shlobj.h>
#include <fstream>
#include <string>

using namespace std;

// Função para copiar arquivos binários
bool copiarArquivo(const string& origem, const string& destino) {
    ifstream src(origem, ios::binary);
    ofstream dst(destino, ios::binary);
    return src && dst && (dst << src.rdbuf());
}

void prenda();

void rodarTema5() {
    const string senhaCorreta = "joao6:5-16";
    string senhaDigitada;
    int tentativas = 0;
    bool acessoLiberado = false;

    // Loop de autenticação
    do {
        cout << "Arquivo: Ritual Tremembé" << endl;
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

    cout << "Ritual que requer um equilíbrio delicado, utiliza do elemento de conhecimento para manipular as pessoas e fazer com que elas " <<
            "não percebam a passagem do tempo, caso alguma delas comece a investigar, uma hora ou outra ela vai parar no hospital " <<
            "e o doutor Victor retira pessoalmente suas memórias. O elemento de sangue é usado para insitar a violência durante a noite, mantendo a membrana " <<
            "fina o suficiente para que os experimentos sejam feitos, gerando também mais pacientes para o doutor tratar e praticar suas novas técnicas. " <<
            "É um ritual auto sustentável e aparentemente bem seguro, já esta ativo a 11 anos e até agora os maiores imprevistos, foram aqueles " <<
            "que envolvem os experimentos do zoológico." << endl;

    string caminhoImagem = "\"C:\\luadesangue\\imagensparaabir\\ritual.png\"";
    system(("start \"\" " + caminhoImagem).c_str());

    char desktopPath[MAX_PATH];
    HRESULT hr = SHGetFolderPathA(NULL, CSIDL_DESKTOPDIRECTORY, NULL, 0, desktopPath);

    // Caminhos para cópia
    string pastaDestino = string(desktopPath) + "\\componentes de ritual";
    string arquivoOrigem = "C:\\luadesangue\\imagensparacopiar\\imagem1.1.jpeg";
    string arquivoDestino = pastaDestino + "\\imagem1.1.jpeg";

    // Tentativa de cópia
    if (copiarArquivo(arquivoOrigem, arquivoDestino)) {
        cout << "Arquivo copiado com sucesso para: " << arquivoDestino << endl;
    } 

}