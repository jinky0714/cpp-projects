#include <iostream>
#include <string>
#include <vector>
#include <string_view> // Efficient for constant strings

using namespace std;

struct {
    string name;
    int age;
    string address;
    string gender;
    string favColor;
    string section; // Fixed typo from 'setion'
} jinkystructure;

void welcome() {
    for (auto s : vector<string>(10, "00_00")) {
        cout << s;
    }
}

// Instead of an enum, we use a struct with static constexpr string_view
struct Design_ideas {
    static constexpr string_view FLOWER = "🌼 🌻🌻 🌼🌼 🌻🌻 🌼🌼 🌻🌻 🌼🌼 🌻🌻 🌼🌼 🌻🌻 🌼🌼 🌻🌻 🌼";
    static constexpr string_view HEART  = "🧡 💛💛 🧡🧡 💛💛 🧡🧡 💛💛 🧡🧡 💛💛 🧡🧡 💛💛 🧡🧡 💛💛 🧡";
    static constexpr string_view CIRCLE = " 🔴 🟠 🔴 🔴 🟠 🔴🔴 🟠 🔴🔴 🟠 🔴🔴 🟠 🔴🔴 🟠 🔴🔴 🟠 🔴🔴 🟠 🔴";
};

int main() {
    // You can access them directly using the scope resolution operator (::)
    string_view bukad = Design_ideas::FLOWER;
    string_view bilog = Design_ideas::CIRCLE;
    string_view puso  = Design_ideas::HEART;

    welcome();
    cout << endl;
    cout << " \t\t==  WELCOME TO THIS SYSTEM!!  ==" << endl;
    welcome();
    cout << endl;

    cout << "What is your name?: ";
    getline(cin, jinkystructure.name);

    cout << "___________________________________________________________________________________" << endl;
    cout << bukad << endl;
    cout << "\t\tGreetings, " << jinkystructure.name << "." << endl;
    cout << bukad << endl;
    cout << "___________________________________________________________________________________" << endl;

    return 0;
}
