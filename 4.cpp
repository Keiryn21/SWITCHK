#include <iostream>
using namespace std;
int main (){

    //menu interactivo//
    int menu;

    cout<<"que decides hacer"<<endl;
    cout<<"1 pasar el siguiente nivel"<<endl;
    cout<<"2 volver a jugar el mismo nivel"<<endl;
    cout<<"3 salir del juego"<<endl;
    cin>> menu;

    switch( menu){

    case 1:
    cout<<"muy bien, has decidido pasar la siguiente nivel"<<endl;
    break;

    case 2:
    cout<<"buena decision,sera mas facil esta vez"<<endl;
    break;
    default:

    case 3:
    cout<<"saliendo del juegooooooooo"<<endl;
    break;
}

    //finaliza el menu//




    return 0;
}