#include <iostream>
using namespace std;
int main() {
int mes;

cout<<"elige uno de los siguientes numeros y te diremos a que mes corresponde"<<endl;
cout<<"1"<<endl;
cout<<"2"<<endl;
cout<<"3"<<endl;
cout<<"4"<<endl;
cout<<"5"<<endl;
cout<<"6"<<endl;
cout<<"7"<<endl;
cout<<"8"<<endl;
cout<<"9"<<endl;
cout<<"10"<<endl;
cout<<"11"<<endl;
cout<<"12"<<endl;
cin>>mes;


if (mes<1){
cout<<"valor invalido,intenta otra vez"<<endl;

}else if  (mes>12){
cout<<"valor incorrecto ,ingresa uno que este dentro del rango"<<endl;

}else {

switch (mes){

    case 1:
    cout<<"enero"<<endl;
    break;

    case 2:
    cout<<"febrero"<<endl;
    break;

    case 3:
    cout<<"marzo"<<endl;
    break;
    
    case 4:
    cout<<"abril"<<endl;
    break;

    case 5:
    cout<<"mayo"<<endl;
    break;

    case 6:
    cout<<"junio"<<endl;
    break;

    case 7:
    cout<<"julio"<<endl;
    break;

    case 8:
    cout<<"agosto"<<endl;
    break;

    case 9:
    cout<<"septiempre"<<endl;
    break;

    case 10:
    cout<<"octubre"<<endl;
    break;

    case 11:
    cout<<"noviembre"<<endl;
    break;
    default:

    case 12:
    cout<<"diciembre"<<endl;
    break;
}



cout<<"el mes que te correspondio fue; " << mes << endl;
}
    

    return 0;
}