#include <iostream>
#include <vector>
#include <string>
 
int main(){
    int n;
    std::cin >> n;
    if ((n * (n+ 1)/ 2) % 2 != 0){
        std::cout << "NO";
        return 0;
    }
    std::vector<int> v1, v2;
    int j = 0;
    if (n % 4){
        j=3;
    } else{
        j = 4;
    }
 
    for (int i= 0; i < (n - 1)/4; i++){
        v1.push_back(4 * i + 1 + j);
        v1.push_back(4 * i + 4 + j);
        v2.push_back(4 * i + 2 + j);
        v2.push_back(4 * i + 3 + j);
    }
 
    if (n%4){
        v1.push_back(1);
        v1.push_back(2);
        v2.push_back(3);
    } else{
        v1.push_back(1);
        v1.push_back(4);
        v2.push_back(2);
        v2.push_back(3);
    }
    std::cout << "YES \n";
    std::cout << v1.size() << '\n';
    for (int i : v1){
        std::cout << i << " ";
    }
    std::cout << "\n" << v2.size() << std::endl;
    for (int i : v2){
        std::cout << i << " ";
    }
 
}