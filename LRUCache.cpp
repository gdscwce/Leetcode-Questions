#include<bits/stdc++.h>
using namespace std;

class LRUCache
{
    private:

    public:
    map<int, int> m;
    map<int, list<int>::iterator> address;
    list<int> l;
    int c, size;
    //Constructor for initializing the cache capacity with the given value.
    LRUCache(int cap)
    {
        // code here
        c = cap;
        size = 0;
    }
    
    //Function to return value corresponding to the key.
    int get(int key)
    {
        // your code here
        if(m.find(key) == m.end()) return -1;
        list<int>::iterator it;
        it = address[key];
        l.erase(it);
        address.erase(key);
        l.push_front(key);
        address[key] = l.begin();
        return m[key];
    }
    
    //Function for storing key-value pair.
    void set(int key, int value)
    {
        // your code here   
        if(m.find(key) != m.end()) {
            list<int>::iterator it;
            it = address[key];
            l.erase(address[key]);
            address.erase(key);
            m.erase(key);
            size--;
        }
        if(size==c) {
            list<int>::iterator it;
            int lastEle = l.back();
            l.pop_back();
            address.erase(lastEle);
            m.erase(lastEle);
            size--; 
        }
        size++;
        l.push_front(key);
        m[key] = value;
        address[key] = l.begin();
        return;
    }
};