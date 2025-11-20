#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <sstream>
#include <iostream>
 
#define ll long long
 
int main(){
    int x;
    std::cin >> x;
    while (x--){
        ll y, x;
        std::cin >> y >> x;
        ll z = std::max(x, y);
        ll z2 = z * z;
        //check if even or odd
        if (z2 % 2 == 0){
            if (z==x){
                std::cout << z2 - (z - 1) - (z - y) << '\n';
            } else{
                std::cout << z2 - (x - 1) << '\n';
            }
        } else{
            if (z == y){
                std::cout << z2 - (z - 1) - (z - x) << '\n'; 
            } else{
                std::cout << z2 - (y - 1) << '\n';
            }
        }
    }
    return 0;
}