#include <iostream>
#include <string>
#include <cstring>


using namespace std;

class Stock
{
    private:
        char name[20];
        float itemPrice, totalPrice;
        float quantity;

    public:
        void registerItem()
        {
            cout << "What is the name of the item? ";
            cin >> name;

            cout << "What is the quantity of the item? ";
            cin >> quantity;

            cout << "What is the price of one item? ";
            cin >> itemPrice;

            totalPrice = itemPrice * quantity;
        }

        void sale()
        {
            char responseName[20];
            float responseQuant;
            float totalSale;

            cout << "What quantity would you like to buy? ";
            cin >> responseQuant;

            // Updating the stock quantity
            quantity += responseQuant;
        }

        void salesReport()
        {
            cout << "The current stock name is ";

            for (int i = 0, n = strlen(name); i < n; i++)
            {
                cout << name[i];
            }
            cout << endl;

            cout << "The quantity remaining is " << quantity << endl;
        }
};


int main()
{
    Stock one;

    one.registerItem();
    one.sale();
    one.salesReport();
    return 0;
}