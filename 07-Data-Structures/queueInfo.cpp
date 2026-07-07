#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main() {
	queue<string> cars;
    // QUEUE follows the First IN First OUT
    // not allowed to add elements
    
    cars.push("Volvo");                                 // the first front element
    cars.push("BMW");
    cars.push("Ford");
    cars.push("Mazda");                               // the back last element
    
    
    // ACCESS QUEUE ELEMENT
    // access the front element (first and the oldest)
    cout << cars.front();      // outputs (Volvo)
    
    // access the back element (last and newest)
    cout << cars.back();      // outputs (Mazda)
    
    
  // CHANGE THE FRONT AND BACK ELEMENTS
  // change the value of the front element
  cars.front() = "Tesla";
  
  // change the valuw of the back element
  cars.back() ="VW";
  
  // access the updated front element in the queue
  cout << cars.front() << endl;
  // access the updated back element in the queue
  cout << cars.back()<< endl;
  
  // REMOVE ELEMENTS
  // remove the front elements
  cars.pop();
  cout << "WE REMOVE ONE THE FRONT ELEMENT SO THE OUTPUT  IS : " << cars.front() << "INSTEAD OF TESLA" << endl;
  
  // GET THE SIZE OF THE QUEUE
  cout << " So the size of the current queue right now is : " << cars.size() << endl;
  
  // CHECK IF EMPTY
  cout << " THE QUEUE IS CURRENTLY EMPTY: " << cars.empty() << endl;
  
  
  return 0;
  
}
    
    
