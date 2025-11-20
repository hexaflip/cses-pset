#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <sstream>
#include <iostream>
 
#define ll long long
 
int main(){
    std::string line;
    std::cin >> line;
    int count = 1, streak = 1;
    for (int i = 1; i < line.size(); i++){
        if (line.at(i) == line.at(i - 1)){
            count++;
            if (streak < count){
                streak = count;
            }
        } else{
            count = 1;
        }
    }
    std::cout << streak;
}