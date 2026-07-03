#include <iostream>
#include <string>
#include <vector>
#include <ctime>

using namespace std;

class Student {
	
	public:
	string studentID;
	string name;
	int age;
	string course;
};

int main() {
	vector<Student> students;
	
	cout << "=============================================================================================" << endl;
	cout << "            W E L C O M E  T O  T H I S  S Y S T E M ! " << endl;
	cout << "=============================================================================================" << endl;
	
	
	
	
	time_t timestamp;
	time(&timestamp);
	
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "\t\t" <<  time(&timestamp);
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ " << endl;
	
	int choice;
	try {
		
	do {
		
	cout << "____________________________________________________________________________________________________________________________________________________" << endl;
	cout << "                                                  ===   S T U D E N T  M A N A G E M E N T  === " << endl;
	cout << "____________________________________________________________________________________________________________________________________________________" << endl;
	
	
	cout << " 1. ADD STUDENT" << endl;
	cout << endl;
	cout << " 2. DISPLAY ALL STUDENTS " << endl;
	cout << " 3. SEARCH STUDENT " << endl;
	cout << " 4. UPDATE STUDENT  " << endl;
	cout << " 5. DELETE ACCOUNT " << endl;
	cout << " 6. EXIT " << endl;
	cout << endl;
	cout << "E n t e r   C h o i c e :   ";
	while (!(cin >> choice )) {
		// it will keep asking the user enters a valid number
		
		cout << "I N V A L I D   I N P U T :(          :               Try again: ";
		
		cin.clear();
		
		cin.ignore(10000, '\n');
		
	}
	
	switch (choice) {
		case 1 :
		{
			
		Student stud;
		do {
			
	    cout << " E N T E R  your Student ID :           ";
		cin >> stud.studentID;
	    } while (stud.studentID.empty());
	    
	    cin.ignore();
	    
	    do {
		
		cout << " E N T E R  your name :          ";
		getline (cin, stud.name);
     	} while (stud.name.empty());
     	
     	do {
			
		cout << " E N T E R  your age :       ";
		cin >> stud.age;
    	} while (stud.age <= 0);
    	
    	
    	do {
		
		cout << "E N T E R  your course :       ";
		cin >> stud.course;
    	} while (stud.course.empty());
    	
    	students.push_back(stud);
    	
    	
    	cout << "____________________________________________________________________________________________________________" << endl;
    	cout << "              Student Added Successfully! " << endl;
    	cout << "____________________________________________________________________________________________________________" << endl;
    	break;
    	}
    	
    	case 2: 
    	{
			
    	if (students.empty()) {
			cout << " NO  students found! " << endl;
			
		} else {
			cout << "========== S T U D E N T ' S   L I S T =========" << endl;
			
			for (Student s : students) {
				cout << "STUDENT ID       :  " << s.studentID << endl;
				cout << "NAME                : " << s.name << endl;
				cout << "AGE                  : " << s.age << endl;
				cout << "COURSE            : " << s.course << endl;
			}
		}
		break;
    	}
    	
		case 3:
		{
		string id;
	
		cout << "WHAT is your Student ID :  ";
		cin >> id;
		
		bool found = false;
		
		
		for (Student st : students) {
			if (st.studentID == id) {
				cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			
				cout << st.studentID << endl;
				cout << st.name << endl;
				cout << st.age << endl;
				cout << st.course << endl;
				
				cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
				
			found = true;
			break;
	     	}
		
	
		}
		
		
	     	if (!found) {
				cout << " S T U D E N T    N O T    F O U N D ! " << endl;
			break;
	     	}
	     	
	     	break;
		}
		case 4:
		{
			string id;
			bool found = false;
			
			cout << "\nEnter Student ID  to update :     ";
			cin >> id;
			
			cin.ignore();
			
			for (Student &st : students) {
				if (st.studentID == id) {
					cout << "NEW : Name : ";
					getline(cin, st.name);
					
					cout << "NEW : Age : ";
					cin >> st.age;
					
					cout << "NEW : Course : ";
					cin.ignore();
					getline(cin, st.course);
		            
		            
		            cout << "Student   U P D A T E D  Successfully ! " << endl;
		            
		            
		            found = true;
		            break;
				}
			}
			if (!found) {
				cout << "STUDENT  N O T  FOUND! " << endl;
				
			}
			
			break;
			
		}
		
		case 5: 
		{
			string id;
			bool found = false;
			
			cout << "\n Enter Student ID to Delete :   ";
			cin >> id;
			
			for (int i = 0; i <(int) students.size(); i++) {
				if (students[i].studentID == id) {
					students.erase(students.begin() + i);
					
					cout << "\n Student Deleted Successfully!\n";
					
					found = true;
					break;
				}
			}
			
			if (!found) {
				cout << "\n Student  N O T  found! " << endl;
			}
			
			break;
			
		}
		
		
		case 6:
		
		cout << "\n Thank for using the program.   G O D   B L E S S ! :)" << endl;
		
		break;
		
		default:
		cout << "INVALID CHOICE!" << endl;
	}
} while (choice != 6);

}    

catch (...) {
	cout << " A C C E S S   D E N I E D ! ! ! " << endl;
	
}

return 0; 
}
