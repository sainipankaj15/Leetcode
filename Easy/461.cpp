class Solution {
public:
    int hammingDistance(int x, int y) {
        
        int a = x^y;
        
        bitset<32> b(a);
        
        int ans = b.count();
        
        return ans;
    }
};

// for more information 
// go on this link
// https://leetcode.com/problems/hamming-distance/discuss/1791059/Only-Three-Line-oror-XOR-oror-Bit-Count-oror-STL-oror-FASTER-THAN-100