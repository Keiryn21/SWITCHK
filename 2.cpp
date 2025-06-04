#include <iostream>
using namespace std;
int main(){

    int nota,clasificacion;

    //solicitar al usuario su nota para clasificarla//

    cout<<"por favor ingresa cual es tu nota"<<endl;
    cin>>nota;

    if(nota<0)
    cout<<"el valor es invalido"<<endl;

    else if (nota>100)
    cout<<"el valor es incorrecto,vuelve a intentarlo"<<endl;

    cout<<"ingresa dentro de cual rango estan tus notas"<<endl;
    cout<<"1 100-90"<<endl;
    cout<<"2 70-80"<<endl;
    cout<< "3 50-60"<<endl;
    cout<<"4 0-40"<<endl;
    cout<<"5 0-10"<<endl;
    cin>>clasificacion;

    switch (clasificacion){


        case 1:
        cout<<"estas en la clasificacion 'A',felicidades"<<endl;
        break;

         case 2:
        cout<<"estas en la clasificacion 'B',felicidades"<<endl;
        break;

         case 3:
        cout<<"estas en la clasificacion 'C',intenta mejorar"<<endl;
        break;

         case 4:
        cout<<"estas en la clasificacion 'D',esfuerzate vas a reprobar"<<endl;
        break;
        default:

         case 5:
        cout<<"estas en la clasificacion 'E',lamento decirte que has reprobado"<<endl;
        break;


    }
    cout<<"thanks for choosing us :)"<<endl;


//finaliza el programa//

    return  0;
}