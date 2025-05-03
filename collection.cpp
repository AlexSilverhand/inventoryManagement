#include "collection.hpp"

using namespace std;

Collection::Collection() {

    }

void Collection::addProduct(const Product& newProduct) {
    for (int i = 0; i < 500; i++) {
        if (products[i].getBarCode() == newProduct.getBarCode()) {
            products[i].increaseStock(newProduct.getStock());
            cout<<"Disponibilidad aumentada"<<endl;
            cout<<"Presione cualquier tecla para continuar..."<<endl;
            getch();
            system("cls");
            return;
            }
        }

    for (int i = 0; i < 500; i++) {
        if (products[i].getBarCode() == "") {
            products[i] = newProduct;
            cout<<"Producto agregado con exito"<<endl;
            cout<<"Presione cualquier tecla para continuar..."<<endl;
            getch();
            system("cls");
            return;
            }

        }

    cout << "No hay espacio para agregar mas productos" << endl;
    cout<<"Presione cualquier tecla para continuar..."<<endl;
    getch();
    system("cls");
    }

void Collection::removeProduct(const std::string& barCode, int quantity) {
    for (int i = 0; i < 500; i++) {
        if (products[i].getBarCode() == barCode) {
            products[i].decreaseStock(quantity);
            cout << "Existencia del producto reducida" << endl;
            cout<<"Presione cualquier tecla para continuar..."<<endl;
            getch();
            system("cls");
            return;
            }
        }
    cout << "Producto no encontrado en el inventario" << endl;
    }

void Collection::showCollection() const {

    for (int i = 0; i < 500; i++) {
        if (products[i].getBarCode() != "") {
            cout << "Producto #" << i + 1 << std::endl;
            products[i].showProduct();
            cout << "-------------------------" << endl;
            }
        }
    cout<<"Presione cualquier tecla para continuar..."<<endl;
    getch();
    system("cls");
    }

