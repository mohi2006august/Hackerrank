#include <iostream>
using namespace std;

class Complex {
public:
    int a, b;

    Complex operator+(const Complex &other) {
        Complex result;
        result.a = a + other.a;
        result.b = b + other.b;
        return result;
    }

    friend ostream& operator<<(ostream &out, const Complex &c) {
        out << c.a << "+i" << c.b;
        return out;
    }
};

int main() {
    Complex c1, c2;
    char plus, i;
    cin >> c1.a >> plus >> i >> c1.b;
    cin >> c2.a >> plus >> i >> c2.b;
    Complex c3 = c1 + c2;
    cout << c3 << endl;
    return 0;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna