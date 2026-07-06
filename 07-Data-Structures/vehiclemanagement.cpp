#include <iostream>
#include <stack>
using namespace std;

int main() {
	stack<string> bouquet;
	int choice;
	
	bool shop = true;
	while (shop == true) {
	cout << "===== FLOWER BOUQUET BUILDER ===" << endl;
	cout << "1. Add a Flower to Bouquet" << endl;
	cout << "2. Remove Last Flower Added " <<  endl;
	cout << "3. View Current Top Flower" << endl;
	cout << "4. Finish Bouquet & Exit" << endl;
	cout << endl;
	cout << endl;
	cout << "E N T E R  your choice : ";
	cin >> choice;
	
	string flowerName;
	switch (choice) {
		case 1:
		{
		cout << "Enter flower name (e.g, Rose, Tulip, Lily) : ";
		cin >> flowerName;
		bouquet.push(flowerName);
		cout << flowerName << " added successfully! " << endl;
		break;
     	}
	
		case 2:
		{
		if (bouquet.empty()) {
		cout << "Your bouquet is already empty! " << endl;
		
	    } else {
		cout << "Removing ..." << bouquet.top() << " from the top." << endl;
		bouquet.pop();
    	}
    	break;
        }
        
        case 3:
        {
        if (bouquet.empty()) {
			cout << " Your bouquet has no flowers yet! " << endl;
		} else {
			cout << "The flower on the very top is : " << bouquet.top() << endl;
		}
		break;
		
	}
	
	case 4: 
	{
	cout << "Bouquet finished! Closing shop. " << endl;
	shop = false;
	break;
}
	default:
	{
	cout << "Invalid Option!" << endl;
	break;
    }
}

	}
	 return 0;
 }  
   
		
		
