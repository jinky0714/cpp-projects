#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	stack <string> browserHistory;
	
	browserHistory.push("google.com");
	browserHistory.push("w3schools");
	browserHistory.push("github.com");
	
	cout << "------------------------------------------------------------------------------------------------------" << endl;
	cout << "                    C U R R E N T   W E B   B R O W S E R  S T A T E  " << endl;
	cout << "------------------------------------------------------------------------------------------------------" << endl;
	
	cout << "You are currently looking at :  " << browserHistory.top();
	
	cout << endl;
	
	cout << "\n [ Clicking the BACK  Button... ] " << endl;
	
	browserHistory.pop();
	
	cout << "You went back! Now you are looking at :  " << browserHistory.top() << endl;
	
	cout << endl;
	
	cout << "[Clicking the BACK Button again ... ]" << endl;
    browserHistory.pop();
    
    cout << "You went back again! Now you are looking at : " << browserHistory.top() << endl;
    
    return 0; 
}
