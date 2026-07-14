#include <iostream>
#include <string>
using namespace std;

enum Color { red = 0, green = 1, blue = 2 };
enum Fruit { apple = 0, orange = 1, banana = 2 };

template <typename T>
class Traits {
public:
    static string name(int index) {
        return "unknown";
    }
};

template <>
class Traits<Color> {
public:
    static string name(int index) {
        if (index == red) return "red";
        else if (index == green) return "green";
        else if (index == blue) return "blue";
        else return "unknown";
    }
};

template <>
class Traits<Fruit> {
public:
    static string name(int index) {
        if (index == apple) return "apple";
        else if (index == orange) return "orange";
        else if (index == banana) return "banana";
        else return "unknown";
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int c, f;
        cin >> c >> f;
        cout << Traits<Color>::name(c) << " " << Traits<Fruit>::name(f) << endl;
    }
    return 0;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna