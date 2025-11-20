#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include <string>
#include <algorithm>
 
#define ll long long
 
 
int main() {
    std::string s;
    std::cin >> s;
    std::sort(s.begin(), s.end());
    std::vector<std::string> v;
    v.push_back(s);
    while (std::next_permutation(s.begin(), s.end())){
        v.push_back(s);
    }
    std::cout << v.size() << '\n';
    for (auto string : v){
        std::cout << string << '\n';
    }
 
}