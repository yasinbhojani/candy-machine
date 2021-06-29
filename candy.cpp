#include<iostream>
#include<stdlib.h>
#define candy_p 10
#define chips_p 20
#define gum_p 5
#define cookies_p 40
using namespace std;
class CandyMachine{
    int candy, chips, gum, cookies;
    int option, quantity, total_price;
    int candy_q, chips_q, gum_q, cookies_q;
    public:
    CandyMachine()
    {
        candy = 0;
        chips = 0;
        gum = 0;
        cookies = 0;
    }
    void disp()
    {
        cout << "Available Options : " << endl <<"1. Candy" << endl << "2. Chips" << endl << "3. gum" << endl << "4. Cookies" << endl;
    }
    void getorder()
    {
        cout << endl << "Enter the number of products you want to buy : " << endl;
        cin >> quantity;
        for(int i = 0; i < quantity; i++)
        {
            cout << "Enter the product code to be bought : ";
            cin >> option;
            switch(option)
            {
                case 1 :
                cout << "Enter the quantity of candy you want to buy : ";
                cin  >> candy_q;
                candy = candy_q * candy_p;
                break;
                case 2 :
                cout << "Enter the quantity of chips you want to buy : ";
                cin  >> chips_q;
                chips = chips_q * chips_p;
                break;
                case 3 :
                cout << "Enter the quantity of gum you want to buy : ";
                cin  >> gum_q;
                gum = gum_q * gum_p;
                break;
                case 4 :
                cout << "Enter the quantity of cookies you want to buy : ";
                cin  >> cookies_q;
                cookies = cookies_q * cookies_p;
                break;
                default :
                cout << "Enter the valid choice"; 
            }
        }
    } 
    void disp_bill()
    {
        system("CLS");
        cout << "\t\tProducts Bought" << endl;
        cout << "Product\t\tQuantity\tUnit Price\tTotal\n";
        if(candy_q > 0)
        {
            cout << "Candy";
            cout <<"\t\t"<< candy_q;
            cout <<"\t\t"<< candy_p;
            cout <<"\t\t"<< candy << endl;
        }
        if(chips_q > 0)
        {
            cout << "Chips";
            cout <<"\t\t"<< chips_q;
            cout <<"\t\t"<< chips_p;
            cout <<"\t\t"<< chips << endl;
        }
        if(gum_q > 0)
        {
            cout << "Gum";
            cout <<"\t\t"<< gum_q;
            cout <<"\t\t"<< gum_p;
            cout <<"\t\t"<< gum << endl;
        }
        if(cookies_q > 0)
        {
            cout << "Cookies";
            cout <<"\t\t"<< cookies_q;
            cout <<"\t\t"<< cookies_p;
            cout <<"\t\t"<< cookies << endl;
        }
    }
    void total()
    {
        total_price = candy + chips + gum + cookies;
        cout << endl << "Total" << "\t\t\t\t\t\t" << total_price;
    }
};
int main()
{
    CandyMachine obj;
    obj.disp();
    obj.getorder();
    obj.disp_bill();
    obj.total();

    return 0;
}
