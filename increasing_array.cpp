#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <sstream>
#include <iostream>
 
#define ll long long
 
int main(){
    int n;
    std::cin >> n;
    std::vector<int> vec;
    int x;
    ll som = 0;
    while (std::cin >> x){
        vec.push_back(x);
    }
    for (int i = 1; i < n; i++){
        if (vec.at(i) < vec.at(i - 1)){
            som += vec.at(i - 1) - vec.at(i);
            vec.at(i) = vec.at(i - 1);
         }
    }
    std::cout << som;
}