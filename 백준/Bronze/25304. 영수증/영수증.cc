#include <iostream>

using namespace std;

int main() {

    int total_price(0), type_product(0), num_product(0), price_product(0);
    
    int check_price(0);
    
    cin >> total_price >> type_product;
    
    for(int i=0 ; i<type_product ; i++)
    {
        price_product = 0;
        num_product = 0;
        
        cin >> price_product >> num_product;
        
        check_price += price_product * num_product;
    }
    
    if(check_price == total_price)
    {
        cout << "Yes" << endl;
    }
    
    else
    {
        cout << "No" << endl;
    }
    
    return 0;
}