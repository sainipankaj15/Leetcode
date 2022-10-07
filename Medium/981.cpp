class TimeMap {
public:
    multimap<string, pair<string,int>> m;
    vector<string> keya;
    vector<string> valuea;
    vector<int> time;
    int i=0;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
       keya.push_back(key);
       valuea.push_back(value);
       time.push_back(timestamp);
    }
    
    string get(string key, int timestamp) {

        for(int i=keya.size()-1;i>=0;i--){
            if(keya[i]==key && time[i]<=timestamp){
             return valuea[i];
            }
        }

       string s = "";
       return s;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */