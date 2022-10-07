#include <iostream>

using namespace std;


class Shop
{
    private:
        char name[10];
        float price;
        float quantity, saleQuantity, purchaseQuantity, sales, purchases;

    public:
        void input();
        void sale();
        void purchase();
        void output();
};

int main()
{
    Shop one, *p;
    p = &one;

    p->input();
    p->sale();
    p->purchase();
    p->output();

    return 0;
}


void Shop::input()
{
    cout << "What is the name of the stock you want to add? ";
    cin >> name;

    cout << "What is the price of one of the item? ";
    cin >> price;

    cout << "What quantity of the item are you adding? ";
    cin >> quantity;

}

void Shop::sale()
{
    cout << "What quantity would you like to sell? ";
    cin >> saleQuantity;

    quantity -= saleQuantity;
    sales += saleQuantity;
}

void Shop::purchase()
{
    cout << "What quantity are you going to buy? ";
    cin >> purchaseQuantity;

    quantity += purchaseQuantity;
    purchases += purchaseQuantity;
}

void Shop::output()
{
    cout << "The remaining stock is " << name << endl;
    cout << "The quantity remaining is " << quantity << endl;
    cout << "The total quantity of sales are " << sales << endl;
    cout << "The total quantity of purchases are " << purchases << endl;
}
