#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include <string>
#include <algorithm>
 
#define ll long long
 
 
int main() {
    int x;
    std::cin >> x;
    std::vector<std::pair<int, int>> vec;
    while (x--){
        int a, b;
        std::cin >> a >> b;
        if ((a + b) % 3 == 0 && (2*a) >= b && (2*b) >= a){
            std::cout << "YES" << '\n';
        } else{
            std::cout << "NO" << '\n';
        }
    }
    
}