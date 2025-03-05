#ifndef SHOP_H
#define SHOP_H

#include <string>
#include <vector>
using namespace std;
// Item class (SRP)
class Item {
protected:
     string name;
    double price;

public:
    Item( string name, double price);
    virtual void displayinfo() const = 0; // Pure virtual function
    virtual double getPrice() const;
};

// Computer class
class Computer : public Item {
private:
     string processor;
     string ram, rom;

public:
    Computer( string product, double amount,  string processor,  string ram,  string rom);
    void displayinfo() const override;
};

// Cellphone class
class Cellphone : public Item {
private:
     string processor;
     string ram, rom;

public:
    Cellphone( string product, double amount,  string processor,  string ram,  string rom);
    void displayinfo() const override;
};

// Accessory class 
class Accessory : public Item {
private:
     string type;

public:
    Accessory( string product, double amount,  string type);
    void displayinfo() const override;
};

// Shop class it handles a collection of Items
class Shop {
private:
     vector<Item*> items;

public:
    void addItem(Item* item);
    void showItems() const;
    double calculateTotPrice() const;
};

#endif // SHOP_H
