#include <iostream>
#include "LinkedList.h"
#include "Service.h"
using namespace std;
int main() {

   //LinkedList<OilStation>*oilSta = new LinkedList<OilStation>();
   //oilSta->addNodeLast(OilStation("12","peque",45));
  // oilSta->addNodeLast(OilStation("8","medio",60));
 //  cout<<oilSta<<endl;
  //  LinkedList<Service>*station = new LinkedList<Service>();

    //station->addNodeLast(Service("828",29,oilSta));

    int opcion;
    do {
        cout << "\n|---------Menu Opciones--------|";
        cout << "\n| 1. Agregar un servicio       | ";
        cout << "\n| 2. Consultar Servicio        | ";
        cout << "\n| 3. Sumar Servicios           | ";
        cout << "\n| 4. Totalizar Consumos        | ";
        cout << "\n| 5. Salir                     | ";
        cout << "\n|------------------------------| ";
        cout << "\n\n Escoja una Opcion: \n";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                cout << "Ingresar Placa del vehiculo" << endl;
                std::string vehiclePlate;
                cin >> vehiclePlate;
                cout << "Ingresar id estacion" << endl;
                cout << "cantidad galones" << endl;
            }
                break;
            case 2:{
                std::string idStation;
                cout << "Ingresar el id de la estacion de servicio" << endl;
                cin>> idStation;

            }
                break;
            case 3:{

            }
                break;
            case 4:{

            }
                break;
            case 5:
                cout<<"Bye Bye"<<endl;
                break;
        }
    }while(opcion!=5);

    return EXIT_SUCCESS;
}