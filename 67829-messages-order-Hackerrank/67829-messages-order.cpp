#include <iostream>
#include <string>
using namespace std;

class Message {
    string text;
    int id; // unique id to preserve order
    static int counter;
public:
    Message() {}
    Message(const string& txt) : text(txt), id(counter++) {}

    const string& get_text() const {
        return text;
    }

    bool operator<(const Message& other) const {
        return id < other.id;
    }
};

int Message::counter = 0;

class MessageFactory {
public:
    MessageFactory() {}
    Message create_message(const string& text) {
        return Message(text);
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna