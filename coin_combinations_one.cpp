#include <iostream>
#include <vector>

using namespace std;

int main(){
        ios::sync_with_stdio(false);
        cin.tie(NULL);
    int n, x;
    cin >> n >> x;
    int mod = 1e9 + 7;

    vector<int> dp(x + 1, 0);
    vector<int> coins;

    for (int i = 0; i < n; i++){
        int c;
        cin >> c;
        coins.push_back(c);
    }

    dp[0] = 1;

    for (int i = 1; i <= x; i++){
        for (int coin : coins){
            if (coin <= i){
                dp[i] = (dp[i] + dp[i - coin]) % mod;
            }
        }
    }
    cout << dp[x];
}

// g++ -std=c++20 coin_combinations_one.cpp -Wall