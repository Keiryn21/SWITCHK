#include <iostream>
using namespace std;
int main(){

    //costo de transporte publico segun la opcion//

    int opciones;

    cout<<"por favor elige en que trasnporte publica desear realizar el viaje"<<endl;
    cout<<"1 BUS"<<endl;
    cout<<"2 METRO"<<endl;
    cout<<"3 TAXI"<<endl;
    cin>>opciones;

    switch (opciones)
    {
    case 1:
        cout<<"FELICIDADES!!!, has decidido viajar en bus pagaras un total de $1"<<endl;
        break;
    


     case 2:
        cout<<"FELICIDADES!!!, has decidido vijar en metro pagaras un total de $2"<<endl;
        break;
    default:



    case 3:
    cout<<"FELICIDADES!!!, has decidido vijar en metro pagaras un total de $3"<<endl;
        break;
    }

cout<<"epero dsifrutes el viaje"<<endl;


    return 0;
}