#include "product.hpp"

using namespace std;

Product::Product() {

    }

Product::Product(const Product& p):barCode(p.barCode),productName(p.productName),weight(p.weight),
    entryDate(p.entryDate), wholesalePrice(p.wholesalePrice),retailPrice(p.retailPrice),stock(p.stock) {

    }

Product& Product::operator=(const Product& p) {
    barCode = p.barCode;
    productName = p.productName;
    weight = p.weight;
    entryDate = p.entryDate;
    wholesalePrice = p.wholesalePrice;
    retailPrice = p.retailPrice;
    stock = p.stock;

    return *this;
    }

string Product::getBarCode() const {
    return barCode;
    }

string Product::getProductName() const {
    return productName;
    }

float Product::getWeight() const {
    return weight;
    }

Date Product::getEntryDate() const {
    return entryDate;
    }

float Product::getWholesalePrice() const {
    return wholesalePrice;
    }

float Product::getRetailPrice() const {
    return retailPrice;
    }

int Product::getStock() const{
    return stock;
    }


void Product::setBarcode(const std::string& bC) {
    barCode = bC;
    }

void Product::setProductName(const std::string& pN) {
    productName = pN;
    }

void Product::setWeight(const float& we) {
    weight = we;
    }

void Product::setEntryDate(const Date& eD) {
    entryDate = eD;
    }

void Product::setWholesalePrice(const float& wP) {
    wholesalePrice = wP;
    }

void Product::setRetailPrice(const float& rP) {
    retailPrice = rP;
    }

void Product::setStock(const int& st) {
    stock = st;
    }

void Product::enterProduct() {
    cout << "Ingrese el codigo de barras del producto (13 digitos): ";
    getline(cin, barCode);

    cout << "Ingrese el nombre del producto: ";
    getline(cin, productName);

    cout << "Ingrese el peso del producto (Kg): ";
    cin >> weight;

    entryDate.enterDate();

    cout << "Ingrese el precio de mayoreo: ";
    cin >> wholesalePrice;

    cout << "Ingrese el precio de menudeo: ";
    cin >> retailPrice;

    cout << "Ingrese la existencia del producto: ";
    cin >> stock;
    }

void Product::showProduct() const{
    cout << "Codigo de barras: "<<barCode<<endl;
    cout << "Nombre del producto: "<<productName<<endl;
    cout << "Peso del producto: "<<weight<<" Kg"<<endl;
    cout << "Fecha de entrada: ";
    entryDate.showDate();
    cout << endl;
    cout << "Precio de mayoreo: $"<<wholesalePrice<<endl;
    cout << "Precio de menudeo: $"<<retailPrice<<endl;
    cout << "Existencia del producto: "<<stock<<endl;
    }

void Product::increaseStock(int quantity) {
    stock = stock + quantity;
    }

void Product::decreaseStock(int quantity) {
    stock = stock - quantity;
    if (stock < 0) {
        stock = 0;
        }

    }
