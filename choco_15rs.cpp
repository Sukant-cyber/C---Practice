#include<iostream>
using namespace std;

int main() {
    int chocolatePrice = 1;
    int wrapperExchange = 3;
    int money = 20;
    
    int chocolates = money / chocolatePrice;
    int wrappers = chocolates;
    
    while (wrappers >= wrapperExchange) {
        int exchangedChocolates = wrappers / wrapperExchange;
        chocolates += exchangedChocolates;
        wrappers = exchangedChocolates + (wrappers % wrapperExchange);
    }
    
    cout << "Maximum number of chocolates: " << chocolates << std::endl;
    
    return 0;
}

