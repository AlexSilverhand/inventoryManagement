#include "menu.hpp"

using namespace std;

Menu::Menu() {

    }

void Menu::showMenu(Collection& collection) {
    int option;
    do {
        cout << "Menu"<<endl;
        cout << "1.- Ingresar producto "<<endl;
        cout << "2.- Retirar producto "<<endl;
        cout << "3.- Consultar inventario "<<endl;
        cout << "4.- Salir "<<endl;
        cout << "Ingrese su opcion: ";
        cin >> option;
        cin.ignore();
        system("cls");
        switch(option) {
            case 1: {
                Product newProduct;
                newProduct.enterProduct();
                collection.addProduct(newProduct);
                break;
                }

            case 2: {
                system("cls");
                string barCode;
                int quantity;
                cout << "Ingrese el codigo de barras del producto a retirar: ";
                cin >> barCode;
                cout << "Ingrese la cantidad a retirar: ";
                cin >> quantity;
                collection.removeProduct(barCode, quantity);
                break;
                }

            case 3: {
                collection.showCollection();
                break;
                }

            case 4:
                cout<<"Saliendo del programa"<<endl;
                break;
            default:
                cout<<"Opcion no valida"<<endl;
            }

        }
    while (option != 4);
    }

