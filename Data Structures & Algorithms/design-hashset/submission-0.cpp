#include <cstring>
//for memset used to fill memory with a particular value 
class MyHashSet {
public:

    int arr[1000001];

    MyHashSet() {
        memset(arr, 0, sizeof(arr));
    }
    //fill the complete array with zero nahi toh usme garbage value aa jayagi
    void add(int key) {
        arr[key] = 1;
    }
    
    void remove(int key) {
        arr[key] = 0;
    }
    
    bool contains(int key) {
        return arr[key] == 1;
    }
};