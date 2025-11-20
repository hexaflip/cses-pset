#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <sstream>
#include <iostream>
 
int main(){
    long long x;
    std::cin >> x;
    std::cout << x;
    while (x > 1){
        if (x % 2 == 0){
            x/=2;
        } else{
            x = 3*x+1;
        }
        std::cout << " " << x ;
    }
}