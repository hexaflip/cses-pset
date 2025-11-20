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
    if (x == 1){
        std::cout << "1";
        return 0;
    }
    if (x == 2){
        std::cout << "NO SOLUTION";
        return 0;
    } 
    if (x == 3){
        std::cout << "NO SOLUTION";
        return 0;
    }
    if (x == 4){
        std::cout << "2 4 1 3";
        return 0;
    }
    std::cout << 1;
    for (int i = 3; i <= x; i += 2){
        std::cout << " " << i;
    }
    for (int i = 2; i <= x; i += 2){
        std::cout << " " << i;
    }
}