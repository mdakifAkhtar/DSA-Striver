
class LRUCache {
    int capacity;
    list<pair<int,int>>cache;
    unordered_map<int,list<pair<int,int>> :: iterator>mp;

  public:

  LRUCache(int capacity) {
    this->capacity=capacity;
   
  }

  int get(int key) {
    // If the key does not exist, return -1.
    if(mp.find(key) == mp.end()){
        return -1;
    }
    // Get the iterator pointing to this key's pair.
    else{
        auto it=mp[key];
        int value=it->second;
        // Remove the key from its current position.
        cache.erase(it);
        // Move the key-value pair to the front.
        // It is now the most recently used.
        cache.push_front({key,value});
        mp[key]=cache.begin();
        return value;
    }
 
  }

  void put(int key, int value) {
    // If the key already exists, remove its old position.
    if(mp.find(key) != mp.end()){
        cache.erase(mp[key]);
    }
    else if(cache.size() == capacity){
        // Get the key at the back of the list (LRU).
        int keyToRemove=cache.back().first;
        // Remove the last element from the list.
        cache.pop_back();
        mp.erase(keyToRemove);
    }
    // Insert the new or updated pair at the front.
    cache.push_front({key,value});
    mp[key]=cache.begin();
  }
};
