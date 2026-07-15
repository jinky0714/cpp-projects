#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define WC_SYSTEM \
cout << "❥ ❣ ❦ ❀ ✿ ❁ ✧ ✦ ★ ☆ ❥ ❣ ❦ ❀ ✿ ❁ ✧ ✦ ★ ☆ ❥ ❣ ❦ ❀ ✿ ❁ ✧ ✦ ★ ☆\n "; \
cout << "               WELCOME TO THIS SYSTEM                       \n"; \
cout << "❥ ❣ ❦ ❀ ✿ ❁ ✧ ✦ ★ ☆ ❥ ❣ ❦ ❀ ✿ ❁ ✧ ✦ ★ ☆ ❥ ❣ ❦ ❀ ✿ ❁ ✧ ✦ ★ ☆ \n";
#define USERNAME "admin"
#define PASSWORD "1234"


int main() {

string user, pass;

WC_SYSTEM;

cout << endl;
for (auto s: vector <string> (10, "🟣💜🟣")) {
	cout << s;
}
cout << endl;

cout << " || ENTER USERNAME: ";
cin >> user;
cin.ignore();
cout << endl;

cout << " || ENTER PASSWORD: ";
cin >> pass;
cin.ignore();
cout << endl;

	if(user == USERNAME && pass == PASSWORD) {
		for(auto j: vector<string> (10, "🌿☘️🍀🌱")) {
			cout << j;
		}
		cout << endl;
		cout << "\033[34m           LOGIN SUCCESSFUL                 \033[0m";
		cout << endl;
		for(auto u: vector<string> (10, "🌿☘️🍀🌱")) {
			cout << u;
		}
		cout << endl;
	} else {
		cout << "LOGIN FAILES!!!!" << endl;
	}
	for (auto x: vector <string> (10, "🟣💜🟣")) {
	cout << x;
}
cout << endl;
		
		return 0;
	}
