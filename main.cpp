#include <iostream>
#include "menu.hpp"
#include "collection.hpp"

using namespace std;

int main() {
    Collection collection;
    Menu menu;
    menu.showMenu(collection);

    return 0;
    }
