#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
	// you can add elements from both the beginning and at the end
	// list does not support random access
	
	//==================================================
	//                             C R E A T E    A   L I S T
	//==================================================
	list <string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
	
	// print list elements
	
	cout << "=======================================================" << endl;
	for(string car : cars) {
		cout << car << endl;
	}
	cout << "=======================================================" << endl;
	
	//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	//		NOTE :  	The type of the list (string in your example) cannot be changed after its been 
	//											declared.
	//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	
	//___________________________________________________________________________________________
	//                                     A C C E S S     A         L I S T
	//__________________________________________________________________________________________
	 
	 
	 /*   You cannot access list elements by referring to index numbers, like with arrays and vectors
	  * However, you can access the first of the last element with .front() and .back() functions */
	  
	  
	  cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
	  cout <<"                         G E  T   T H E   F I R S T   E L E M E N T                                                            " << endl;
	  cout << ":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
	  cout << cars.front();         // outputs Volvo
	  cout << endl;
	  
	  cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
	  cout << "                        G E T   T H E   L A S T   E L E M E N T                                                               " << endl;
	  cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
	  cout << cars.back();         // outpurs Mazda
	  cout << endl;
	  
	 cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
	  cout << "                  C H A N G E    A   L I S T   E L E M EN T                                   " << endl;
	 cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
	 // change the value of the first element
	 cars.front() = "Opel";
	 // change the value of the last element
	 cars.back() = "Toyota";
	 
	 cout << cars.front();  // now outputs Opel instead of Volvo
	 cout << endl;
	 cout << cars.back();  // now outputs Toyota instead of Mazda
	 cout << endl;
	 
	 
     cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
     cout << "                    A D D   L I S T   E L E M E N T S                                        " << endl;
     cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
     /* to add elements to a list, you can use .push_front() to insert an element at the beginning of the list
      * and .push_back() to add an element at the end */
      // add an element at the beginning
      cars.push_front("Tesla");
      cout << endl;
      cout << " N E W ~ element added at the beginning. " << endl;
      cout << endl;
      // add an element at the end
      cars.push_back("VW");
      cout << endl;
      cout << " N E W ~ element added at the end. " << endl;
      cout << endl;
      
      cout << "==========================================================" << endl; 
      for (string c : cars) {
		  cout << c << endl;
	  }
	  cout << "==========================================================" << endl;
	  
	  cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
	  cout << "                  R E M O V E   L I S T   E L E M E NT S " << endl;
	  cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
	  /* to remove elements from a list, use .pop_front() to remove an element from the beginning
	   * of the list and .pop_back() to remove an element at the end */
	   // remove the first element
	   cars.pop_front();
	   
	   cout << endl;
	   cout << " F I R S T ~ element was removed." << endl;
	   cout << endl;
	   
	   
	   // remove the last element
	   cars.pop_back();
	   
	   cout << endl;
	   cout << "L A S T ~ element was removed." << endl;
	   cout << endl;
	   
	   cout << "====================================================================" << endl;
	   for (string carss : cars) {
		   cout << carss << endl;
	   }
	   cout << "====================================================================" << endl;
	   
	   cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
	   cout << "                                                L I S T    S I Z  E " << endl;
	   cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
	   cout << "SIZE OF THE LIST :   " << endl;
	   
	   cout << endl;
	   
	   cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
	   cout << "                            C H E C K   I F   A   L I S T   I S   E M P T Y " << endl;
	   cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
	   /* use the .empty() function to find out if a list is empty or not.
	    * The .empty() function returns 1 (true) if the list is empty and (0) false otherwise. */
	    cout << cars.empty();
	    
	    cout << endl;
	    
	   
	  
	  return 0;
  }
	
