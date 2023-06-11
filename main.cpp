#include <iostream>
#include "Vector.h"
#include "chan.h"

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
