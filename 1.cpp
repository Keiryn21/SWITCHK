#include <iostream>
using namespace std;
int main (){

    int dia;

    cout<<"por favor elige una de las siguientes opciones"<<endl;
    cout<<"1"<<endl;
    cout<<"2"<<endl;
    cout<<"3"<<endl;
    cout<<"4"<<endl;
    cout<<"5"<<endl;
    cout<<"6"<<endl;
    cout<<"7"<<endl;
    cin>>dia;


    switch (dia){

    case 1:
    cout<<"lunes"<<endl;
    break;

    case 2:
    cout<<"martes"<<endl;
    break;

    case 3:
    cout<<"miercoles"<<endl;
    break;

    case 4:
    cout<<"jueves"<<endl;
    break;

    case 5:
    cout<<"viernes"<<endl;
    break;

    case 6:
    cout<<"sabado"<<endl;
    break;
    default:

    case 7:
    cout<<"domingo"<<endl;
    break;
}

    return 0;
}