#include <iostream>
using namespace std;

int main() {

int x = 9;

auto s = [&x]() {
cout << x;
};

x = 3;

s();

return 0; 
}
