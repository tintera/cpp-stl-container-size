#include <array>
#include <deque>
#include <iostream>
#include <list>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

int main()
{
	cout << "using namespace std;" << endl;
	cout << " === array ===";
	cout << "sizeof(array<uint8_t, 0>) is:" << sizeof(array<uint8_t, 0>) << endl;
	cout << "sizeof(array<uint32_t, 0>) is:" << sizeof(array<uint32_t, 0>) << endl;
	cout << "sizeof(array<uint8_t, 1>) is:" << sizeof(array<uint8_t, 1>) << endl;
	cout << "sizeof(array<uint32_t, 1>) is:" << sizeof(array<uint32_t, 1>) << endl;
	cout << "sizeof(array<uint8_t, 10>) is:" << sizeof(array<uint8_t, 10>) << endl;
	cout << endl;
	cout << " === vector/dequee ===";
	cout << "sizeof(vector<uint8_t>) is:" << sizeof(vector<uint8_t>) << endl;
	cout << "sizeof(vector<uint32_t>) is:" << sizeof(vector<uint32_t>) << endl;
	cout << "sizeof(vector<uint32_t[5'000]>) is:" << sizeof(vector<uint32_t[5'000]>) << endl;
	cout << "sizeof(deque<uint8_t>) is:" << sizeof(deque<uint8_t>) << endl;
	cout << "sizeof(deque<uint32_t>) is:" << sizeof(deque<uint32_t>) << endl;
	cout << "sizeof(deque<uint32_t[5'000]>) is:" << sizeof(deque<uint32_t[5'000]>) << endl;
	cout << endl;
	cout << " === string ===";
	cout << "sizeof(string) is:" << sizeof(string) << endl;
	cout << endl;
	cout << " === list ===";
	cout << "sizeof(list<int8_t>) is:" << sizeof(list<int8_t>) << endl;
	cout << "sizeof(list<int32_t>) is:" << sizeof(list<int32_t>) << endl;
	cout << endl;
	cout << " === map/set ===";
	cout << "sizeof(map<int8_t, int8_t>) is:" << sizeof(map<int8_t, int8_t>) << endl;
	cout << "sizeof(map<int32_t, int32_t>) is:" << sizeof(map<int32_t, int32_t>) << endl;
	cout << endl;
	cout << "sizeof(set<int8_t>) is:" << sizeof(set<int8_t>) << endl;
	cout << "sizeof(set<int32_t>) is:" << sizeof(set<int32_t>) << endl;
	cout << endl;
	cout << "sizeof(unordered_map<int8_t, int8_t>) is:" << sizeof(unordered_map<int8_t, int8_t>) << endl;
	cout << "sizeof(unordered_map<int32_t, int32_t>) is:" << sizeof(unordered_map<int32_t, int32_t>) << endl;
	cout << endl;
	cout << "sizeof(unordered_set<int8_t>) is:" << sizeof(unordered_set<int8_t>) << endl;
	cout << "sizeof(unordered_set<int32_t>) is:" << sizeof(unordered_set<int32_t>) << endl;
	return 0;
}
