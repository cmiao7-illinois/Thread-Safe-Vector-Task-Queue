#include <iostream>
#include "stl/Vector.h"

int main() {
    Vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.pop_back();
    v.show();
    v.reserve(5);
    v.show();
    v.resize(16);
    v.show();
    std::cout<<v[0]<<std::endl;
    std::cout<<v.front()<<std::endl;
    std::cout<<v.back()<<std::endl;
    //Vector<int> v2=v;
    //v2.show();
    v.insert(v.begin(),5,5);
    v.show();
    v.erase(v.begin());
    v.erase(v.begin()+1);
    v.erase(v.begin(),v.begin()+3);
    v.show();
    //return 0;
}
