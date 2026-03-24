// Lesson 1 — Example: a small function and a short main()
#include <iostream>
using namespace std;

int add(int left, int right) { return left + right; }

int main() {
    const int a = 14;
    const int b = 28;
    const int sum = add(a, b);

    cout << a << " + " << b << " = " << sum << '\n';
    return 0;
}
