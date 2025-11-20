#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <sstream>
#include <iostream>
 
#define ll long long
 
int main(){
    ll x;
    std::cin >> x;
    for (ll i = 1; i <= x; i++){
        ll all = (i * i) * ((i * i) - 1) / 2;
        ll bad (4 * (i - 1) * (i - 2));
        ll ans = all - bad;
        std::cout << ans << '\n';
    }
    
}