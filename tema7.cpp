#define _WIN32_WINNT 0x0600
#define _WIN32_IE 0x0500
#include <iostream>
#include <windows.h>
#include <shlobj.h>
#include <fstream>
#include <string>

using namespace std;

// Função para copiar arquivos binários
bool copiarArquivo7(const string& origem, const string& destino) {
    ifstream src(origem, ios::binary);
    ofstream dst(destino, ios::binary);
    return src && dst && (dst << src.rdbuf());
}

void prenda();

void rodarTema7() {
    const string senhaCorreta = "judas";
    string senhaDigitada;
    int tentativas = 0;
    bool acessoLiberado = false;

    // Loop de autenticação
    do {
        cout << "Arquivo: Projeto Judas" << endl;
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

    cout << "PROJETO JUDAS" << endl <<
            "Objetivos: " << endl <<
            "   " << endl <<
            "1. Achar receptaculos promissores...OK" << endl <<
            "2. Selecionar os melhores receptaculos...OK" << endl <<
            "3. Encontrar 6 pontos de fissura que se posicionem corretamente...OK" << endl <<
            "4. Fundar berços...OK" << endl <<
            "5. Enfraquecer a membrana...Em andamento" << endl <<
            "6. Localizar a coroa de espinhos...Em andamento" << endl <<
            "7. Dar a luz a Judas....Em andamento" << endl <<
            "   " << endl <<
            "Judas: Forma de denominar o rei, aquele que trará a verdade a liberdade e os sonhos, aquele que salvara nosso mundo e o outro." << endl;

    char desktopPath[MAX_PATH];
    HRESULT hr = SHGetFolderPathA(NULL, CSIDL_DESKTOPDIRECTORY, NULL, 0, desktopPath);

    // Caminhos para cópia
    string pastaDestino = string(desktopPath) + "\\componentes de ritual";
    string arquivoOrigem = "C:\\luadesangue\\imagensparacopiar\\arc2.mp4";
    string arquivoDestino = pastaDestino + "\\arc2.mp4";

    // Tentativa de cópia
    if (copiarArquivo7(arquivoOrigem, arquivoDestino)) {
        cout << "Arquivo copiado com sucesso para: " << arquivoDestino << endl;
    } 

}