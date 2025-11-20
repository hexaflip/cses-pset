#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <iostream>
 
#define ll long long
 
int main(){
    ll x;
    std::cin >> x;
    ll soz = 0;
    while (x >= 5){
        x = std::floor(x / 5);
        soz += x;
    }
    std::cout << soz;
    
}