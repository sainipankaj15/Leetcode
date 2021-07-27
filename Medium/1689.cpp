class Solution {
public:
    int minPartitions(string n) {
        sort(n.begin(),n.end());
        int a=n.size();
        // cout<<n<<" "<<a;
        int b= n[a-1];
        b = b-48;
        // we are deacresing 48 bcoz it is returing ascii value of last element
        return b;
        
    }
};