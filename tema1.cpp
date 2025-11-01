#define _WIN32_WINNT 0x0600
#define _WIN32_IE 0x0500
#include <iostream>
#include <windows.h>
#include <shlobj.h>
#include <fstream>
#include <string>

void prenda();

using namespace std;

// Função para copiar arquivos binários
bool copiarArquivo1(const string& origem, const string& destino) {
    ifstream src(origem, ios::binary);
    ofstream dst(destino, ios::binary);
    return src && dst && (dst << src.rdbuf());
}

void rodarTema1() {
    
    const string senhaCorreta = "7dos7filhos";
    string senhaDigitada;
    int tentativas = 0;
    bool acessoLiberado = false;

    // Loop de autenticação
    do {
        cout << "Arquivo: Experimentos lab" << endl;
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

    string caminhoImagem = "\"C:\\luadesangue\\imagensparaabir\\labzoo.pdf\"";
    system(("start \"\" " + caminhoImagem).c_str());

    char desktopPath[MAX_PATH];
    HRESULT hr = SHGetFolderPathA(NULL, CSIDL_DESKTOPDIRECTORY, NULL, 0, desktopPath);

    // Caminhos para cópia
    string pastaDestino = string(desktopPath) + "\\componentes de ritual";
    string arquivoOrigem = "C:\\luadesangue\\imagensparacopiar\\Os Sete Tronos do Sangue Velado.png";
    string arquivoDestino = pastaDestino + "\\Os Sete Tronos do Sangue Velado.png";

    // Tentativa de cópia
    if (copiarArquivo1(arquivoOrigem, arquivoDestino)) {
        cout << "Arquivo copiado com sucesso para: " << arquivoDestino << endl;
    } 

}