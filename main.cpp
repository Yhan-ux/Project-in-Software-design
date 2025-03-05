#include <iostream>
#include "Shop.h"
using namespace std;
int main() {
    Shop shop;
    // Adding shop items
    shop.addItem(new Computer("Dell XPS 15", 50000.50, "Intel Core i7", "16GB", "256GB SSD"));
    shop.addItem(new Computer("MacBook Pro 13", 120000.00, "Apple M1", "16GB", "1T HDD & 512SSD"));
    shop.addItem(new Computer("Lenovo ThinkPad x280", 30000.00, "Intel Core i5", "8GB", "512SSD"));

    shop.addItem(new Accessory("Wireless Mouse", 249.50, "Input Device"));
    shop.addItem(new Accessory("Keyboard", 500.00, "Input Device"));
    shop.addItem(new Accessory("Canon PIXMA TS207 Printer", 4495.99, "Output Device"));

     cout << "\nShop Items:\n";
    shop.showItems();

     cout << "\nTotal Price of Items: Php " << shop.calculateTotPrice() << '\n';

    return 0;
}
