#include <iostream>
using namespace std;
int main (){

    int opciones;
    //horarios de clses segun los dias//

    cout<<"por favor selecciona el dia para asignarte i=un horario"<<endl;
    cout<<"1 LUNES"<<endl;
    cout<<"2 MARTES"<<endl;
    cout<<"3 MIERCOLES"<<endl;
    cout<<"4 JUEVES"<<endl;
    cout<<"5 VIERNES"<<endl;
    cin>>opciones;

    switch (opciones)
    {
    case 1:
        cout<<"Las materia que recibiras hoy seran Precalculo y Elementos de la Ciencia y Tecnologia"<<endl;
        break;


    case 2:
        cout<<"Las materia que recibiras hoy seran Fundamentos de programacion y Matematica Discreta"<<endl;
        break;


    case 3:
    cout<<"Las materia que recibiras hoy seran Precalculo y Elementos de la Ciencia y Tecnologia"<<endl;
        break;


    case 4:
    cout<<"Las materia que recibiras hoy seran Fundamentos de programacion y Matematica Discreta"<<endl;
       
    
    default:
        break;
    }

    cout<<"Todos los horarios son de 9.00 am a 12.40 am"<<endl;



    return 0;
}