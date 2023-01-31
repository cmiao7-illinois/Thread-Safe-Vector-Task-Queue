

# Custom STL Vector Container

The purpose of this project is to implement a custom version of the STL vector container in C++ using template programming. The custom vector container includes an implementation of an iterator class, which enables users to perform common operations such as element traversal, insertion, and deletion. Additionally, the implementation leverages functions from the Cstring library (such as `memcpy` and `memmove`) to significantly improve the speed of insertion and deletion operations by a factor of 100 or more.

## Features

- Template to allow for vectors of any data type.
- Custom iterator class that enables element traversal and manipulation.
- Implementation of common vector operations such as push_back, pop_back, insert, erase, etc.
- Optimized insertion and deletion operations using `memcpy` and `memmove` from the **cstring** library.
- Dynamic allocation and resizing of the underlying array to allow for efficient use of memory.

## Usage

The custom vector container can be used in a similar way to the standard STL vector container. Here is a simple example:

```C++
#include "stl/Vector.h"

int main()
{
    Vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    for (Vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << ' ';
    }
    return 0;
}
```

This will output: `1 2 3`

For more information on available operations and usage, refer to the header file `vector.hpp`.