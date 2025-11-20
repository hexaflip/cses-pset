#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <iostream>
 
#define ll long long
 
int main(){
    std::string line;
    std::cin >> line;
    std::map<char,int> mp;
    for (char c : line){
        mp[c]++;
    }
    bool has_odd = false;
    std::string first;
    std::string middle;
    std::string last;
    for (auto & [key, value]: mp){
        if (has_odd == true && value % 2 != 0) {
            std::cout << "NO SOLUTION";
            return 0;
        }
        if (value % 2 != 0){
            has_odd = true;
            for (int i = 0; i < value; i++){
                middle.push_back(key);
            }
        } else{
            for (int i = 0 ; i < value / 2; i++){
                first.push_back(key);
                last.push_back(key);
            }
        }
    }
    std::reverse(last.begin(), last.end());
    std::cout << first << middle << last;
}