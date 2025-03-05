#include "Shop.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
// Item class implementation (SRP)
Item::Item( string name, double price) : name(name), price(price) {}

double Item::getPrice() const {
    return price;
}

// Computer class implementation inherits Item
Computer::Computer( string product, double amount,  string processor,  string ram,  string rom)
    : Item(product, amount), processor(processor), ram(ram), rom(rom) {}

void Computer::displayinfo() const {
     cout << "Computer: " << name << fixed << setprecision(2) << ", Price: Php " << price
        << ", Processor: " << processor << ", RAM: " << ram
        << ", ROM: " << rom << '\n';
}

// Cellphone class implementation inherits Item
Cellphone::Cellphone( string product, double amount,  string processor,  string ram,  string rom)
    : Item(product, amount), processor(processor), ram(ram), rom(rom) {}

void Cellphone::displayinfo() const {
     cout << "Cellphone: " << name << fixed << setprecision(2) << ", Price: Php " << price
        << ", Processor: " << processor << ", RAM: " << ram
        << ", ROM: " << rom << '\n';
}

// Accessory class implementation inherits Item
Accessory::Accessory( string product, double amount,  string type)
    : Item(product, amount), type(type) {}

void Accessory::displayinfo() const {
     cout << "Accessory: " << name<<fixed<<setprecision(2)<< ", Price: Php " << price
        << ", Type: " << type << '\n';
}

// Shop class implementation (handles a collection of Items)
void Shop::addItem(Item* item) {
    items.push_back(item);
}

void Shop::showItems() const {
    for (const auto& item : items) {
        item->displayinfo();
    }
}

double Shop::calculateTotPrice() const {
    double total = 0;
    for (const auto& item : items) {
        total += item->getPrice();
    }
    return total;
}

