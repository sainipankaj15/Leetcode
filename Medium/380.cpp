
// sikhne ki cheez getrandom function mai h 
// sikhne ki cheez getrandom function mai h 

class RandomizedSet {
public:
    set<int> s;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(s.find(val)!=s.end())
            return 0;
        s.insert(val);
        return 1;
    }
    
    bool remove(int val) {
        if(s.find(val)!=s.end())
        {
            auto it = s.find(val);
            s.erase(it);
            return 1;
        }
       
        return 0;
    }
    
    int getRandom() {
        return *next(s.begin(),rand()%s.size());
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */


// see this also 
// next and advance function
class RandomizedSet {
public:
    set<int> s;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(s.find(val)!=s.end())
            return 0;
        s.insert(val);
        return 1;
    }
    
    bool remove(int val) {
        if(s.find(val)!=s.end())
        {
            auto it = s.find(val);
            s.erase(it);
            return 1;
        }
       
        return 0;
    }
    
    int getRandom() {
        // we can use advance function also 
        // read about next() and advance function
        // return *next(s.begin(),rand()%s.size());
        
        auto it = s.begin();
        auto randomindex = rand()%s.size();
        advance(it,randomindex);
        return *it;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */