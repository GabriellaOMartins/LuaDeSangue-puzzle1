#include <iostream> 
#include <cstdlib>
#include <ctime>

using namespace std;

void prenda(){

    srand(static_cast<unsigned int>(std::time(nullptr)));
    int i = (rand() % 3) + 1;

    string j [5] ={
        "\"C:\\luadesangue\\prenda\\1.mp4\"",
        "\"C:\\luadesangue\\prenda\\2.mp4\"",
        "\"C:\\luadesangue\\prenda\\3.mp4\"",
        "\"C:\\luadesangue\\prenda\\4.mp4\"",
        "\"C:\\luadesangue\\prenda\\5.mp4\"",
    };

    const int passe = 0;
    string resposta;
    string nomes[7] = {
        "Asmodeus", "Azazel", "Belphegor", "Belzebu", "Leviatã", "Lúcifer", "Mammon"
    };
    
    int k = (rand() % 7 ) + 1;
    int x = (rand() % 5) + 1;

    string caminhoImagem = j[x];

    switch (i) {
        case 1:

           system(("start \"\" " + caminhoImagem).c_str());

        break;

        case 2:
           
           cout << "S" << endl <<
                   "SA" << endl <<
                   "SAN" << endl <<
                   "SANG" << endl <<
                   "SANGU" << endl <<
                   "SANGUE" << endl;
            do {

                cout << "SANGUE ";

            } while (passe != 1);

        break;

        case 3:

           cout << "O computador será desligado em 15 segundos...\n";
           system("shutdown /s /t 15");

           cout << "Se deseja cancelar digete" << nomes[k] << ": ";
           cin >> resposta;

           if (resposta == nomes[k]) {

               cout << "Cancelando desligamento...\n";
               system("shutdown /a");

           }

        break;
    }

}