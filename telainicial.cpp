#define _WIN32_WINNT 0x0600
#include <iostream> 
#include <direct.h>
#include <cstdlib>
#include <windows.h>
#include <shlobj.h>
#include <string>
#include <cerrno>

void rodarTema1();
void rodarTema2();
void rodarTema3();
void rodarTema4();
void rodarTema5();
void rodarTema6();
void rodarTema7();
void prenda();

using namespace std;

void telainicial(){

    string comando[11];
    comando[0] = "/arquivos";
    comando[1] = "/abrirpasta";
    comando[2] = "/bancadarit";
    comando[3] = "/abrir1";
    comando[4] = "/abrir2";
    comando[5] = "/abrir3";
    comando[6] = "/abrir4";
    comando[7] = "/abrir5";
    comando[8] = "/abrir6";
    comando[9] = "/abrir7";
    comando[10] = "/help";

    string comandoip;
    int passe = 0;
    bool rodando = true;

    while (rodando) {
        do {
            cout << "comandos disponiveis" << endl <<
                    "/arquivos (para ver os arquivos disponíveis)" << endl <<
                    "/bancadarit (tela em que você está agora)" << endl <<
                    "/abrirpasta (pasta com documentos que vamos disponibilizar)" << endl;

            cout << "Inserir comando: " << endl;
            cin >> comandoip;

            if (comandoip != comando[0] && comandoip != comando[2] && comandoip != comando[1]) {
                cout << "Comando inválido" << endl;
            } else {
                passe = 1;
            }
        } while (passe != 1);

        passe = 0;

        if (comandoip == comando[0]) {
          do{
            cout << "Arquivos disponíveis: " << endl <<
                    "1.Experimentos lab" << endl <<
                    "2.Pontos e fissura e cora de espinhos" << endl <<
                    "3.Os sete filhos" << endl <<
                    "4.Santo Grão" << endl <<
                    "5.Ritual Tremembé" << endl <<
                    "6.Possíveis receptáculos" << endl <<
                    "7.Projeto Judas" << endl;
            
            cout << "Qual o você deseja abrir ?" << endl;
            cin >> comandoip;

            for (int i = 2; i <10; ++i){
               if (comandoip == comando[i]){
                  passe = 1;
               }
            }

            if (passe != 1) {
                cout << "Comando inválido, para ver comandos disponíveis, dite '/help'" << endl <<
                        "Aguardando comando: " << endl;
                        cin >> comandoip;
            } 
            
            if (comandoip == comando[10]){
                cout << "Comandos disponíveis: " << endl <<
                        "/abrirN (Substitua N pelo numero do arquivo que deseja abrir)" << endl <<
                        "/bancadarit (Voltar para a tela incial)" << endl;
            }
             
           } while (passe != 1);

           if (comandoip == comando[2]) {
                continue;
             }

           passe = 0;

           if (comandoip == comando[3]){
              
              rodarTema1();

           } else if (comandoip == comando[4]) {

              rodarTema2();

           } else if (comandoip == comando[5]) {

              rodarTema3();
           
           } else if (comandoip == comando[6]) { 

              rodarTema4();
           
           } else if (comandoip == comando[7]) {

              rodarTema5();
            
           } else if (comandoip == comando[8]) {

               rodarTema6();

           } else if (comandoip == comando[9]) {

               rodarTema7();
            
           } 

        } else if (comandoip == comando[1]) {
            char desktopPath[MAX_PATH];

            // Troquei SHGFP_TYPE_CURRENT por 0
            HRESULT hr = SHGetFolderPathA(NULL, CSIDL_DESKTOPDIRECTORY, NULL, 0, desktopPath);

            if (SUCCEEDED(hr)) {
                std::string nomePasta = std::string(desktopPath) + "\\componentes de ritual";
                int result = _mkdir(nomePasta.c_str());

                if (result == 0) {
                    cout << "Pasta criada com sucesso" << endl;
                } else if (errno == EEXIST) {
                    cout << "Abrindo pasta" << endl;
                } else {
                    cout << "Erro ao criar pasta" << endl;
                }

                string comandoAbrir = "explorer \"" + nomePasta + "\"";
                system(comandoAbrir.c_str());

                cout << "Pasta aberta" << endl;

                do {
                    cout << "Aguardando próximo comando: " << endl;
                    cin >> comandoip;

                    if (comandoip != comando[0] && comandoip != comando[2] && comandoip != comando[10]) {
                        cout << "Comando inválido, digite '/help' para ver lista de comandos disponíveis" << endl;
                    } else if (comandoip == comando[10]) {
                        cout << "Aqui estão a lista de comandos disponíveis para Pasta" << endl <<
                                "/help (ver comandos disponíveis)" << endl <<
                                "/bancadarit (voltar para bancada de ritual, a tela inicial)" << endl;
                    } else if (comandoip == comando[2]) {
                        cout << "Voltando para bancada de ritual..." << endl;
                        passe = 1;
                    }
                } while (passe != 1);

                passe = 0;

                if (comandoip == comando[2]) {
                    continue;
                }
            } else {
                cout << "Erro ao obter caminho da área de trabalho" << endl;
            }
        } else if (comandoip == comando[2]) {
            cout << "Você já está na bancada de ritual..." << endl;
        }
    }

}
