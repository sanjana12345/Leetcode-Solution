class TimeMap {
public:
    map<string, map<int, string>> mp;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mp[key].insert({ timestamp, value });
    }
    
    string get(string key, int timestamp) {
      if(mp.find(key) ==  mp.end())
       {
            return "";
        }
   auto it = mp[key].upper_bound(timestamp);
        auto inti = mp[key].begin();
    if (it == inti) {g
        return "";
        }
       
        return prev(it)->second;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */
