#include <iostream>
using namespace std;
#define JINKY \
cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n" << endl; \
cout << "\033[35m\t\t=== WELCOME TO THIS SYSTEM ===\n\033[0m"  << endl; \
cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n" << endl;

#define PASSWORD "1234"
#define USERNAME "admin"

void design(int rows, string flowers) {
for(int i = 0; i<rows; i++) {
cout << flowers;
}
}

int main() {
JINKY;

string user;
string pass;
design(15, "💙🔵🔵💙");
cout << endl;

cout << "OooooooooooooooooooooooooooooooooooooooooooooooooO" << endl;

cout << "ENTER USERNAME: ";
cin >> user;
cin.ignore();

cout << "OooooooooooooooooooooooooooooooooooooooooooooooooO" << endl;

cout << "ENTER PASSWORD: ";
getline(cin, pass);

cout << "OooooooooooooooooooooooooooooooooooooooooooooooooO" << endl;
if(user == USERNAME && pass == PASSWORD) {


cout << "Login  SUCCESSFUL! ";
}
else {
cout << " Access DENIED! ";
}

cout << endl;
design(15, "💙🔵🔵💙");
return 0;
}
