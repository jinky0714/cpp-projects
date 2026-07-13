#include <iostream>
#include <deque>
#include <string>
using namespace std;


int main () {

deque<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};      // create a deque called cars that will store strings;	

        cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
		cout << endl;
		cout <<"A deque (stands for double-ended queue) however, is more flexible,\n as elements can be added and removed from both ends.\n (at the front and the back). You can also access elements by index number." << endl;
		cout << endl;
		cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
		cout << endl;
		
		cout << endl;
		cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
		cout << endl;
		cout << "         C R E A T E   A   D E Q U E " << endl;
		cout << endl;
		cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
		
		cout << endl;
		cout << "===========================================================================================================================" << endl;
		cout << endl;
		cout << "\tIf you want to add elements at the time declaration, place them \n in a comma-separated list, inside curly braces{}." << endl;
		cout << endl;
		cout << "===========================================================================================================================" << endl;
		cout << endl;
		
		// create a deque called  cars that will store strings
		
		cout << endl;
		cout << "==========================================================================================================================" << endl;
		cout << endl;
		cout <<"\t The type of deque (string in our example) cannot be changed  after its been declared. :) " << endl;
		cout << endl;
		cout << "==========================================================================================================================" << endl;
		
		cout << endl;
		for (string car : cars) {
			cout << "|   ~  "  <<  car << endl;
		}
		cout << endl;
		
		cout << endl;
		cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
		cout << endl;
		cout << "                  A C C E S S     A      D E Q U E  " << endl;
		cout << endl;
		cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
		cout << endl;
		
		cout << endl;
		cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
		cout << endl;
		cout << "\tYou can access a deque element by referring to the index number inside  square brackets []. \n Deques are 0-indexed is the first element, [1] \n is the second element and so on:" << endl;
		cout << endl;
		cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
		cout << endl;
		
		cout << endl;
		cout << " -  Get the first element using the index number (cars[0])  :          ";
		cout << cars[0]; // this will outputs Volvo
		cout << endl;
		
		cout << endl;
		cout << " - Get the second element using the index number (cars[1]) :         ";
		cout << cars[1]; // this will outputs BMW
		cout << endl;
		
		cout << endl;
		cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
		cout << endl;
		cout << "\t You can also access the first or last element of a deque with the .front() and .back() functions:  " << endl;
		cout << endl;
		cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
		cout << endl;
		
		cout << endl;
		cout << " ~ Get the first element using the .front() :             ";
		cout << cars.front();  // this will output Volvo
		cout << endl;
		
		cout << endl;
		cout << " ~ Get the last element using the .back() :             ";
		cout << cars.back();  // this will output Mazda
		cout << endl;
		
		cout << endl;
		cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
		cout << endl;
		cout <<"\t To access an element at a specified index, you can use the .at() function and specify the index number :      " << endl;
		cout << endl;
		cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" <<endl;
		cout << endl;
		
		cout << endl;
		cout << " ~ Get the second element using the .at() :          ";
		cout << cars.at(1);  // this will output BMW
		cout << endl;
		
		cout << endl;
		cout << " ~ Get the third element using the .at() :            ";
		cout << cars.at(2); // this will output Ford
		cout << endl;
		
		cout << endl;
		cout << "*****************************************************************************************************************" << endl;
		cout << endl;
		cout << "   N O T E :    The .at() function is often preferred over square brackets [] \n because it throws an error message if the element \n is out range : " << endl;
		cout << endl;
		cout << "*****************************************************************************************************************" << endl;
		cout << endl;
		
		cout << endl;
		cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
		cout << endl;
		cout << "                              C H A N G E   A   D E Q U E    E L E M E N T" << endl;
		cout << endl;
		cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
		cout << endl;
		
		cout << endl;
		cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
		cout << endl;
		cout << "\t To change the value of a specific element, \n you can refer to the index number :       " << endl;
		cout << endl;
		cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
		cout << endl;
		
		cout << endl;
		cout <<  " ~ Change the value of the first element (cars[0] = \"Opel\")  :        " ;
		cars.at(0) = "Opel";
		cout << cars.at(0);
		cout << endl;
		
		cout << endl;
		cout << "===============================================================================================" << endl;
		cout << endl;
		cout << "\t Now outputs " << cars[0] << " instead of Volvo. " << endl;
		cout << endl;
		cout << "===============================================================================================" << endl;
		cout << endl;
		
		cout << endl;
		cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
		cout << endl;
		cout << "                                   A D D   D E Q U E   E L E M E N T S " << endl;
		cout << endl;
		cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
		cout << endl;
		
		cout << endl;
		cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
		cout << endl;
		cout << "\t To add elements to a deque, you can use the .push_front()\n to insert an element at the beginning of the deque \n and .push_back() to add an element at the end." << endl;
		cout << endl;
		cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"  << endl;
		cout << endl;
		
		cout << endl;
		cout << " ~ Add an element at the beginning (cars.push_front(\"Tesla\"), and calls it   :     ";
		cars.push_front("Tesla");
		cout << cars.front();
		cout << endl;
		
		cout << endl;
		cout << " ~ Add an element at the end (cats.push_back(\"VW\"), and calls it  :   ";
		cars.push_back("VW");
		cout << cars.front();
		cout << endl;
		
		cout << endl;
		for (string car : cars) {
			cout << "|  -  "  <<  car << endl;
		}
		cout << endl;
		
		cout << endl;
		cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
		cout << endl;
		cout << "                              R E M O V E   D E Q U E    E L E M E T S " << endl;
		cout << endl;
		cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
		cout << endl;
		
		cout << endl;
		cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
		cout << endl;
		cout << "\t To remove elements from a deque, use .pop_front() to \n remove an element from the beginning of the deque and .pop_back() \n to remove an element at the end." << endl;
		cout << endl;
		cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
		cout << endl;
		
		cout << endl;
		cout << " ~ Remove the first element   (cars.pop_front()) and print the new    :        ";
		cars.pop_front();
		cout << cars.front();
		cout << endl;
		
		cout << endl;
		cout << " ~ Remove the last element (cars.pop_back()) and print the new   :      ";
		cars.pop_back();
		cout << cars.back();
		cout << endl;
		
		cout << endl;
		cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
		cout << endl;
		cout <<"                                                            D E Q U E    S I Z E " << endl;
		cout << endl;
		cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
		cout << endl;
		
		cout << endl;
		cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
		cout << endl;
		cout << "\t To find out how many elements a deque has, \n \t use the .size() function          :    " << endl;
		cout << endl;
		cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
		cout << endl;
		
		cout << endl;
		cout << " ~  The size of the deque is         :        " << cars.size() << endl;
		cout << endl;
		
		cout << endl;
		cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
		cout << endl;
		cout << "                            C H E C K   I F   A   D E Q U E   I S    E M P T Y " << endl;
		cout << endl;
		cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
		cout << endl;
		
		cout << endl;
		cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
		cout << endl;
		cout << "\t Use the .empty() function to find out if a deque is empty or not. \n The .empty() function returns 1 (true) if the deque is empty and 0 \n (false) otherwise :  " << endl;
		cout << endl;
		cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
		cout << endl;
		
		cout << endl;
		cout << " ~ The deque is empty     :   " << cars.empty() << endl;
		cout << endl;
		
		
	
	
	return 0;
}

