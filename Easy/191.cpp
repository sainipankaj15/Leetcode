// n is real int so just changed it in binary and count the one how many times
// like n=5   = 101
// then 5 ko binary mai change karne ka logic likha and ushi k saath 1 ko count kar liya 
class Solution {
public:
    int hammingWeight(uint32_t n) {
        
        int count=0;
        
        while(n>0){
            if(n%2==1)
            count++;
            cout<<n<<endl;
            n/=2;
        }
        
      
        return count;
    }
};



//second method builtin function in GCI complier 
class Solution {
public:
    int hammingWeight(uint32_t n) {
    
        return __builtin_popcount(n);
    }
};




// third method
// first number ko bitset mai change kar loo 
// uske baad waha 1 count kar loo 
class Solution {
public:
    int hammingWeight(uint32_t n) {
    
        bitset<32> ans;
        ans = bitset<32>(n);
        
        // yaha ans mai n ka binary form h
        // and stl funciton .count() ka use karke usme count of 1 pata lag jaayga
        return ans.count();
    }
};

// fourth method and more efficent 
class Solution {
public:
    int hammingWeight(uint32_t n) {
    
     
        // yaha ans mai n ka binary form h
        // and stl funciton .count() ka use karke usme count of 1 pata lag jaayga
        return bitset<32>(n).count();
    }
};