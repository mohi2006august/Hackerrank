#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string first_name_;
    string last_name_;
};

ostream& operator<<(ostream& out, const Person& p) {
    out << "first_name=" << p.first_name_ << ",last_name=" << p.last_name_;
    return out;
}

int main() {
    string first_name, last_name, event;
    cin >> first_name >> last_name >> event;
    Person p;
    p.first_name_ = first_name;
    p.last_name_ = last_name;
    cout << p << " " << event << endl;
    return 0;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna