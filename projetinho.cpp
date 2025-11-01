#include <iostream> 

void telainicial();
void prenda();

using namespace std;

int main(){

    const string usuario = "Fabio_de_Melo";
    const string senha = "setefilhos";

    string inputus;
    string inputsen;

    int cont;
    cont = 0;

    int passe;
    passe = 0;

    do {

       cout << "Bem vindo, por favor digite o usuario: " << endl;
       cin >> inputus;

       cout << "Agora a senha por favor: " << endl;
       cin >> inputsen;

       if (inputus == usuario && inputsen == senha){
           cout << "Olá de novo senhor Fabio";
           passe = 1;
       }else {
           cout << "Senha ou usuário incorretos, tente novamente" << endl;
           cont = cont + 1;
       }

       if (cont == 3) {

          prenda();
          
       }

    } while (passe != 1);

    telainicial();
   
return 0;

}