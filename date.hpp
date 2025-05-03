#ifndef DATE_HPP_INCLUDED
#define DATE_HPP_INCLUDED

#include <iostream>
#include <string>
#include <sstream>

class Date {
    private:
        int year;
        int month;
        int day;

    public:
        Date();
        Date(const Date&);
        Date& operator =(const Date&);

        int getYear()const;
        int getMonth()const;
        int getDay()const;

        void setYear(const int&);
        void setMonth(const int&);
        void setDay(const int&);

        void enterDate();
        void showDate()const;

        std::string toString () const;

    };

#endif // DATE_HPP_INCLUDED
