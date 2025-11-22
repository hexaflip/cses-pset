#include <iostream>
#include <vector>
#define ll long long

int main(){
    int n, x;
    std::cin >> n >> x;
    std::vector<ll> coins;
    for (int i = 0; i < n; i++){
        int c;
        std::cin >> c;
        coins.push_back(c);
    }

    std::vector<ll> dp(x + 1);

    dp[0] = 0;
    for (int i = 1; i <= x; i++){
        dp[i] = 1e11;
        for (ll c : coins){
            if (c <= i){
                dp[i] = std::min(dp.at(i), dp.at(i - c) + 1);
            }
        }
    }
    if (dp[x] != (1e11)){
        std::cout << dp[x];
        return 0;
    }
    std::cout << "-1";
    return 0;
}