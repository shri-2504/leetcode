class MyHashMap {
public:
    int key;
    int size=1000001;
   int nums[1000001];
    MyHashMap() {
     memset(nums,-1,sizeof(nums));
    }
    
    void put(int key, int value) {
      nums[key]=value;  
    }
    
    int get(int key) {
        return nums[key];
    }
    
    void remove(int key) {
        nums[key]=-1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */