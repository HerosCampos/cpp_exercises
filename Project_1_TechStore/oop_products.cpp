#include <iostream>
#include <vector>
#include <string>


class Product
{
private:
    int product_id;
    std::string name;
    std::string brand;
    double price;
    int quantity;

public:
    int get_product_id() {return product_id;}
    std::string get_name() {return name;}
    std::string get_brand() {return brand;}
    double get_price() {return price;}
    int get_quantity() {return quantity;}

    void set_product_id(int product_id_val) {product_id = product_id_val;}
    void set_name(std::string name_val) {name = name_val;}
    void set_brand(std::string brand_val) {brand = brand_val;}
    void set_price(double price_val) {price = price_val;}
    void set_quantity(int quantity_val) {quantity = quantity_val;}

    Product(int product_id_val = 0000, std::string name_val = "No_Name", std::string brand_val = "No_brand", double price_val = 0.0, int quantity_val = 0);

    Product(const Product &source);

    ~Product()
    {
        std::cout << "Calling destructor for: " << name << std::endl;
    }
};


Product::Product(int product_id_val, std::string name_val, std::string brand_val, double price_val, int quantity_val)
    :product_id{product_id_val}, name{name_val}, brand{brand_val}, price{price_val}, quantity{quantity_val} {
        std::cout << "Major constructor called for: " << name << std::endl;
}

Product::Product(const Product &source)
    :Product{source.product_id, source.name, source.brand, source.price, source.quantity} {
        std::cout << "Copy constructor called for: " << source.name << std::endl;
}


void display_product(Product p)
{
    std::cout << "Product ID: " << p.get_product_id() << std::endl;
    std::cout << "Name: " << p.get_name() << std::endl;
    std::cout << "Brand: " << p.get_brand() << std::endl;
    std::cout << "Price: " << p.get_price() << std::endl;
    std::cout << "Quantity: " << p.get_quantity() << std::endl;
}


// ==============================================================================================================


class Products
{
private:
    std::vector<Product> all_products;

public:
    bool add_products(int product_id_val, std::string name_val, std::string brand_val, double price_val, int quantity_val);
    void display_products() const;

    // Products(int product_id_val = 0000, std::string name_val = "name", std::string brand_val = "brand", double price_val = 00.00, int quantity_val = 0);
    // ~Products();    
};


bool Products::add_products(int product_id_val, std::string name_val, std::string brand_val, double price_val, int quantity_val)
{
    for(Product prod: all_products)
    {
        if(prod.get_product_id() == product_id_val)
        {
            return false;
        }
    }
    Product temp {product_id_val, name_val, brand_val, price_val, quantity_val};
    all_products.push_back(temp);
    return true;
}


void Products::display_products() const 
{
    if(all_products.size() == 0)
    {
        std::cout << "Sorry, no products to display!" << std::endl;
    }
    else
    {
        std::cout << "==================================================" << std::endl;
        for(auto prod: all_products)
        {
            std::cout << "Product ID: " << prod.get_product_id() << std::endl;
            std::cout << "Product name: " << prod.get_name() << std::endl;
            std::cout << "Product brand: " << prod.get_brand() << std::endl;
            std::cout << "Product price: $" << prod.get_price() << std::endl;
            std::cout << "Product quantity: " << prod.get_quantity() << std::endl;
        }
        std::cout << "==================================================" << std::endl;
    }
}


int main()
{
    Products produtos;
    produtos.display_products();

    // Product teclado(0001, "Teclado Premium", "Microsoft", 89.90, 8);
    produtos.add_products(0001, "Teclado_Premium", "Microsoft", 89.90, 8);
    produtos.display_products();
    // Product mouse(0002, "Mouse sem fio", "Microsoft", 22.49, 4);
    // Product mouse_pad(0003, "Mouse Pad", "Lutier");

    // display_product(mouse_pad);

    // mouse_pad.set_price(4.99);
    // mouse_pad.set_quantity(2);
    
    // display_product(mouse_pad);


}