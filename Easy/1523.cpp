class Solution {
public:
    int countOdds(int low, int high) {
        if(low%2==0)
            low++;
        if(high%2==0)
            high--;
        int numbers = high-low;
        cout<<numbers;
        numbers/=2;
        numbers++;
    
        return numbers;
    }
};