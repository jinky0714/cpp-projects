#include <iostream>
#include <string>
#include <vector>
using namespace std;

class LoginSystem {
    private:
    string correctPassword = "password123";
    string correctUsername = "jinky_admin";
    
    public:
    bool attemptLogin(string inputUsername, string inputPassword) {
        if (inputUsername == correctUsername && inputPassword == correctPassword) {
            return true;
        } else {
            return false;
        }
    }
};

class ShoppingCart {
	private:
	vector<string> cart;
	
	public:
	void addItem(string itemName) {
		cart.push_back(itemName);
		
		cout << "________________________________________________________________________" << endl;
		cout <<  "\t\t"  << itemName << "  added to your cart! :)" << endl;
		cout << "________________________________________________________________________" << endl;
		
	}
	
	void removeLastItem() {
		if (cart.empty()) {
			cout << "00000000000000000000000000000000000000000000000000000"  << endl;
			cout << "                          ⚠️  Your cart is already empty!" << endl;
			cout << "00000000000000000000000000000000000000000000000000000" << endl;
			
		} else {
			cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
			cout << "           🗑️  Removing last item :  " << cart.back() << endl;
			cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
			cart.pop_back();
		}
		
	}
	
	void showCart() {
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << "        ===  🛒  Y O U R   C U R R E N T  C A R T ===                                          " << endl;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		
		if(cart.empty()) {
			cout << "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu"  << endl;
			cout << endl;
			cout << "                       [   Your cart is empty  ] " << endl;
			cout << "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu" << endl;
			
		} else {
			
			cout << "######################################" << endl;
			for (string item : cart) {
				cout << " \t\t +  " << item << endl;
			}
			cout << "######################################"  << endl;
			
		}
		
		cout << "=========================================================================" << endl;
		cout << "                     T O T A L   I T E M S :    " << cart.size() << endl;
		cout << "========================================================================="  << endl;
	}
};

int main() {
	   LoginSystem systemGate;
    
    string userIn;
    string passIn;
    
    do {
    cout << "E N T E R ~  Username :  ";
    cin >> userIn;
    } while(userIn.empty());
    
    do {
    cout << "E N T E R ~  Password :  ";
    cin >> passIn;
    } while(userIn.empty());
    
    if(systemGate.attemptLogin(userIn, passIn)) {
        cout << "============================================" << endl;
        cout << endl;
        cout << "           A C C E S S   G R A N T E D" << endl;
        cout << endl;
        cout << "============================================" << endl;
    }
    else {
        cout << "============================================" << endl;
        cout << endl;
        cout << "           A C C E S S   D E N I E D" << endl;
        cout << endl;
        cout << "============================================" << endl;
        return 1;
    }
    
    ShoppingCart myCart;
    int choice;
    string itemInput;
    
    while (true) {
		cout << endl;
		cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
		cout << "         - - - M A I N    M E N U - - -" << endl;
		cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
		cout << endl;
		cout << "\t@ 1. Add Item to Cart " << endl;
		cout << "\t@ 2. Remove Last Item" << endl;
		cout << "\t@ 3. View Cart Details" << endl;
		cout << "\t@ 4. Exit Checkout" << endl;
		cout << endl;
		cout << "E N T E R   C H O I C E  : ";
		cin >> choice;
		cout << endl;
		
		string itemInput;
		switch(choice) {
			case 1:
			{
				cout << "E N T E R  ~  Item name :  ";
				cin >> itemInput;
				
				myCart.addItem(itemInput);
				break;
			}
			case 2: 
			{
				myCart.removeLastItem();
				break;
				
			}
			
			case 3:
			{
				myCart.showCart();
				break;
			}
			
			case 4:
			{
				cout << " T H A N K   Y O U   for shopping!   Goodbye! " << endl;
				return 2;
				break;
			}
			
			default:
			
			cout << "❌ Invalid choice. Please try again." << endl;
			break;
		}
		
	}
    
    return 0;
}
