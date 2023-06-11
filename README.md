

# Thread-Safe Vector& Task Queue

•	Designed a multi-thread-safe vector (Vector.h) data structure that supports iterator algorithms and allocator algorithms. 
•	Optimized the process of element insertion and deletion in vector more than 100 times, using cstring library functions such as memcpy and memmove.
•	Implemented a multi-thread task queue (chan.h) that supports cached and non-cached usage based on the multi-thread-safe vector. 

## Demo

```C++
int main() {
    Vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    for (Vector<int>::Iterator it = v.begin(); it != v.end();it++){
        std::cout << *it << std::endl;
    }
    chan<int> ch(8);
    while(!ch.is_closed()){
        ch.push(1);
        ch.push(2);
        ch.pop();
        ch.pop();
    }
    return 0;
}
```