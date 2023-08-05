class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        float a = purchaseAmount/10.0;
        a = round(a);
        a = a*10;
        return 100-a;
    }
};