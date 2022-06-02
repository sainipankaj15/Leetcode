class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t)
            return true;
        return false;
    }
};

// Above method using sort function so it is O(nlogn)
// Below method using hashmap so it is O(n)
class Solution {
public:
    bool isAnagram(string s, string t) {
       
        unordered_map<char,int> count;
        
        
        // s k all characters ko count mai push kar lete h 
        for(auto it :s)
            count[it]++;
        
        
        // t k all characers ko count se hata dete h 
        for(auto it:t)
            count[it]--;
        // abe logic is if both are anagram then every charcter ki frequnecy zero ho gayi hongi 
        // yadi zero k alwaa kuch bhi h tho wo anagram nahi h 
        for(auto it : count){
            if(it.second!=0)
                return 0;
        }
        
        //if not 
        return 1;
        
    }
};