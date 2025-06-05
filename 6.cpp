#introduce <iostream>
using namespace std;
int main(){

    //conversion de monedas//

    int opciones;
    double conversion=0.0,dinero=0.0;



    cout<<"por favor ingresa la cantidad de dinero que deseas convertir"<<endl;
    cin>>dinero;


    cout<<"por favor elige a que tipo de moneda quieres hacer la conversion"<<endl;
    cout<<"1 Euros"<<endl;
    cout<<"2 Colones"<<endl;
    cout<<"3  Yenes"<<endl;
    cin>>opciones;

    switch (opciones){

    case 1:
    conversion=dinero*1.15;
    cout<<"tu conversion de dolares a euros es de: "<<conversion<<endl;
    break;



     case 2:
    conversion=dinero*508.99;
    cout<<"tu conversion de dolares a colones  es de: "<<conversion<<endl;
    break;
    


     case 3:
    conversion=dinero*143.77;
    cout<<"tu conversion de dolares a Yenes es de: "<<conversion<<endl;
    break;

    default:
    cout<<"opcion no valida"<<endl;


}

cout<<"gracias por preferirnos"<<endl;



    return 0;
}