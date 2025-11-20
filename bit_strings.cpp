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
    ll total = 2;
    ll modo = 1000000007;
    for (ll i = 1; i < x; i ++){
        total = (total * 2 ) % modo;
    }
    
    std::cout << total % modo;
    
}