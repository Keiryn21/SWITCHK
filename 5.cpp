#include <iostream>
#include <cmath>
using namespace std;
int main(){
     //calculadora//

     int numero1=0,numero2=0,operacion,total;
     

     cout<<"que operacion quieres realizar"<<endl;
     cout<<"1 suma"<<endl;
     cout<<"2 resta"<<endl;
     cout<<"3 multiplicacion"<<endl;
     cout<<"4 division"<<endl;
     cout<<"5 elevar a una potencia"<<endl;
     cin>>operacion;

     switch (operacion){

        case 1:

        cout<<"ingresa el primer numero"<<endl;
        cin>>numero1;

        cout<<"ingresa el segundo numero"<<endl;
        cin>>numero2;

        total=numero1+numero2;
        cout<<"la suma de tus dos valores da como resultado: "<<total <<endl;
        break;


        case 2:
        cout<<"ingresa el primer numero"<<endl;
        cin>>numero1;

        cout<<"ingresa el segundo numero"<<endl;
        cin>>numero2;

        total=numero1-numero2;
        cout<<"la resta de los dos digitos es :"<<total <<endl;
        break;

        case 3:

        cout<<"ingresa el primer numero"<<endl;
        cin>>numero1;

        cout<<"ingresa el segundo numero"<<endl;
        cin>>numero2;

        total=numero1*numero2;


        cout<<"la division de los numeros da como resultado :"<< total <<endl;
        break;
        

        case 4:

        cout<<"ingresa el primer numero"<<endl;
        cin>>numero1;

        cout<<"ingresa el segundo numero"<<endl;
        cin>>numero2;

         if (numero2==0)
        cout<<"error no se puede dividir entre 0"<<endl;

        else 
         
        total=numero1/numero2;
        break;
        default:

        case 5:
        
        cout<<"ingresa el numero que quieres elevar"<<endl;
        cin>>numero1;

        cout<<"a que potencia deseas elevarlo"<<endl;
        cin>>numero2;

        total=pow(numero1,numero2);
         cout << numero1 << " elevado a " << numero2 << " es: " << total << endl;
         break;

       


     }


    return 0 ;
}