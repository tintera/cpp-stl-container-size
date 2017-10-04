# cpp-stl-container-size
Measuring (empty) container sizes for your C++ STL platform

Results measured so far:

 
using namespace std;
sizeof(container)

| Container     |  MSVC 2015 x86 Debug | MSVC 2015 x86 Release | MSVC 2015 x64 Debug | MSVC 2015 x86 Release |
| ------------- | -------------------: | ---------------------:| -------------------:| ---------------------:|
| array<uint32_t, 0> | 1               | 1   | 1  | 1  | 
| array<uint8_t, 0>  | 4               | 4   | 4  | 4  |
| array<uint32_t, 1> | 1               | 1   | 1  | 1  |
| array<uint8_t, 1>  | 4               | 4   | 4  | 4  |
| array<uint8_t, 10> | 10              | 10  | 10 | 10 |
| vector<uint8_t>    | 16              | 12  | 32 | 24 |
| vector<uint32_t>   | 16              | 12  | 32 | 24 |
| vector<uint32_t\[5'000]> | 16        | 12  | 32 | 24 |
| deque<uint8_t>     | 20              | 20  | 40 | 40 |
| deque<uint32_t>    | 20              | 20  | 40 | 40 |
| deque<uint32_t\[5'000]> | 20         | 20  | 40 | 40 |
| string                | 28           | 24  | 40 | 32 |
| list<int8_t>          | 12           | 8   | 24 | 16 |
| list<int32_t>         | 12           | 8   | 24 | 16 |
| map<int8_t, int8_t>   | 12           | 8   | 24 | 16 |
| map<int32_t, int32_t> | 12           | 8   | 24 | 16 |
| set<int8_t, int8_t>   | 12           | 8   | 24 | 16 |
| set<int32_t, int32_t> | 12           | 8   | 24 | 16 |
| unordered_map<int8_t, int8_t>   | 40 | 32  | 80 | 64 |
| unordered_map<int32_t, int32_t> | 40 | 32  | 80 | 64 |
| unordered_set<int8_t, int8_t>   | 40 | 32  | 80 | 64 |
| unordered_set<int32_t, int32_t> | 40 | 32  | 80 | 64 |

Add result from another compiler bellow.













