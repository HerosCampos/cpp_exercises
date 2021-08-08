#include <iostream>
#include <vector>
#include <string>


class Products
{
private:
    std::string name;
    std::string brand;
    double price;
    int quantity;

public:
    std::string get_name() {return name;}
    std::string get_brand() {return brand;}
    double get_price() {return price;}
    int get_quantity() {return quantity;}

    void set_name(std::string name_val) {name = name_val;}
    void set_brand(std::string brand_val) {brand = brand_val;}
    void set_price(double price_val) {price = price_val;}
    void set_quantity(int quantity_val) {quantity = quantity_val;}

    Products(std::string name_val = "No_Name", std::string brand_val = "No_brand", double price_val = 0.0, int quantity_val = 0);

    Products(const Products &source);

    ~Products()
    {
        std::cout << "Calling destructor for: " << name << std::endl;
    }
};


Products::Products(std::string name_val, std::string brand_val, double price_val, int quantity_val)
    :name{name_val}, brand{brand_val}, price{price_val}, quantity{quantity_val} {
        std::cout << "Major constructor called for: " << name << std::endl;
}

Products::Products(const Products &source)
    :Products{source.name, source.brand, source.price, source.quantity} {
        std::cout << "Copy constructor called for: " << source.name << std::endl;
}


void display_product(Products p)
{
    std::cout << "Name: " << p.get_name() << std::endl;
    std::cout << "Brand: " << p.get_brand() << std::endl;
    std::cout << "Price: " << p.get_price() << std::endl;
    std::cout << "Quantity: " << p.get_quantity() << std::endl;
}


int main()
{
    Products teclado("Teclado Premium", "Microsoft", 89.90, 8);
    Products mouse("Mouse sem fio", "Microsoft", 22.49, 4);
    Products mouse_pad("Mouse Pad", "Lutier");

    display_product(mouse_pad);

    mouse_pad.set_price(4.99);
    mouse_pad.set_quantity(2);
    
    display_product(mouse_pad);

}