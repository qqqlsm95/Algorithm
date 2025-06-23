#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    int prize;

    if (a == b && b == c) {
        prize = 10000 + a * 1000;
    } 
    
    else if (a == b || a == c) {
        prize = 1000 + a * 100;
    } 
    
    else if (b == c) {
        prize = 1000 + b * 100;
    } 
    
    else {
        prize = max({a, b, c}) * 100;
    }

    cout << prize << std::endl;
    
    return 0;
}