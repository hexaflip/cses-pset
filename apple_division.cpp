#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
 
#define ll long long
 
int main() {
    int n;
    std::cin >> n;
    
    ll total = 1LL << n; // Use bitwise shift instead of pow
    std::vector<int> vec(n);
    
    ll total_sum = 0;
    for (int i = 0; i < n; i++) {
        std::cin >> vec[i];
        total_sum += vec[i];
    }
 
    ll least_difference = LLONG_MAX;
 
    // Iterate over all subsets using bitwise representation
    for (ll mask = 0; mask < total; mask++) {
        ll temp_sum = 0;
        for (int i = 0; i < n; i++) {
            if (mask & (1LL << i)) {  // If the i-th bit is set, include vec[i]
                temp_sum += vec[i];
            }
        }
        ll other = total_sum - temp_sum;
        least_difference = std::min(least_difference, std::abs(temp_sum - other));
    }
 
    std::cout << least_difference;
}