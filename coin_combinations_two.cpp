#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    vector<int> coins;
    vector<int> dp(x + 1, 0);
    int mod = 1e9 + 7;
    for (int i = 0; i < n; i++){
        int c;
        cin >> c;
        coins.push_back(c);
    }

    dp[0] = 1;
    
    for (int coin : coins){
        for (int i = 1; i <= x; i++){
            if (coin <= i){
                dp[i] = dp[i - coin] + dp[i];
                dp[i] %= mod;
            }
        }
    }
    
    cout << dp[x];

    return 0;
}