#include <iostream>
#include <vector>
#define ll long long

ll mod = 1e9 + 7;

int main(){
    int n;
    std::cin >> n;
    std::vector<ll> dp(n + 1);
    dp[0] = 1;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= 6; j++){
            if (i - j >= 0){
                dp[i] = (dp[i]+ dp[i - j]) % mod;
            }
        }
    }
    std::cout << dp[n];
}