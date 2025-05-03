#include "date.hpp"
using namespace std;

Date::Date() {

    }

//Delegacion de constructores
Date::Date(const Date& d):year(d.year),month(d.month),day(d.day) {

    }

//Inicialización
Date& Date::operator = (const Date& d) {
    year = d.year;
    month = d.month;
    day = d.day;

    return *this;
    }

int Date::getYear() const {
    return year;
    }

int Date::getMonth() const {
    return month;
    }

int Date::getDay() const {
    return day;
    }

void Date::setYear(const int& y) {
    year = y;
    }

void Date::setMonth(const int& m) {
    month = m;
    }

void Date::setDay(const int& d) {
    day = d;
    }

void Date::enterDate() {
    string date;
    cout << "Ingrese la fecha en formato dd/mm/aaaa: ";
    cin >> date;

    //Se crea un objeto de tipo stringstream para que analize la entrada, y con la variable separator tomo "/"
    //como un separador entre cada dato
    stringstream convertedInput(date);
    char separator;

    convertedInput >> day >> separator >> month >> separator >> year;
    }

void Date::showDate() const {
    cout<< "Fecha: "<<day<<"/"<<month<<"/"<<year;
    }
