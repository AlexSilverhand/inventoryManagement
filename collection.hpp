#ifndef COLLECTION_HPP_INCLUDED
#define COLLECTION_HPP_INCLUDED

#include "product.hpp"
#include <string>
#include <conio.h>

class Collection{
private:
    Product products[500];

public:
    Collection();
    void addProduct(const Product& newProduct);
    void removeProduct(const std::string& barCode, int quantity);
    void showCollection()const;
};

#endif // COLLECTION_HPP_INCLUDED
