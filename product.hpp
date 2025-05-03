#ifndef PRODUCT_HPP_INCLUDED
#define PRODUCT_HPP_INCLUDED

#include <iostream>
#include <string>
#include <limits>
#include "date.hpp"

class Product {
    private:
        std::string barCode;
        std::string productName;
        float weight;
        Date entryDate;
        float wholesalePrice;
        float retailPrice;
        int stock;

    public:
        Product();
        Product(const Product&);
        Product& operator = (const Product&);

        std::string getBarCode()const;
        std::string getProductName ()const;
        float getWeight()const;
        Date getEntryDate()const;
        float getWholesalePrice()const;
        float getRetailPrice()const;
        int getStock()const;

        void setBarcode(const std::string&);
        void setProductName(const std::string&);
        void setWeight(const float&);
        void setEntryDate(const Date&);
        void setWholesalePrice(const float&);
        void setRetailPrice(const float&);
        void setStock(const int&);

        void enterProduct();
        void showProduct()const;
        void increaseStock(int quantity);
        void decreaseStock(int quantity);
    };


#endif // PRODUCT_HPP_INCLUDED
