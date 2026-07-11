#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

class GradingPortal {
	
	private:
	map <int, string> gradeBook;
	
	public:
	void assignGrade(int studentID, string grade) {
		gradeBook[studentID] = grade;
		
		cout << "Grade updated for ID : " << studentID << endl;
		
	}
	
	void searchStudent(int studentID) {
		if (gradeBook.count(studentID))  {
			cout << " ID " << studentID << " achieved a grade of : " << gradeBook[studentID] << endl;
		} else {
			cout << "E R R O R : Student ID " << studentID << " does not exist! " << endl;
		}
		
	}
	
	void showAllGrades() {
		cout << "==== F I N A L  G R A D E B O O K ====" << endl;
		for (auto record : gradeBook) {
			cout << "Studeny ID : " << record.first << " |  Grade : " << record.second << endl;
		} 
	}
	
};

int main() {
	GradingPortal portal;
	
	cout << "✿ ❀ ✿ ❀ ✿ ❀ ✿ ❀ ✿ ❀ ✿ ❀ ✿ ❀✿ ❀ ✿ ❀ ✿ ❀ ✿ ❀ ✿ ❀ ✿ ❀ ✿ ❀✿ ❀ ✿ ❀ ✿ ❀ ✿ ❀ ✿ ❀ ✿ ❀ ✿ ❀" << endl;
	cout << "                                    T H E   S T U D E N T   G R A D I N G   P O R T A L    ◕‿◕✿  " << endl;
	cout << "✿ ❀ ✿ ❀ ✿ ❀ ✿ ❀ ✿ ❀ ✿ ❀ ✿ ❀✿ ❀ ✿ ❀ ✿ ❀ ✿ ❀ ✿ ❀ ✿ ❀ ✿ ❀✿ ❀ ✿ ❀ ✿ ❀ ✿ ❀ ✿ ❀ ✿ ❀ ✿ ❀" << endl;
	
	portal.assignGrade(101, "A+");
	portal.assignGrade(102, "B");
	portal.assignGrade(103, "A-");
	
	for (auto s : vector<string> (10, "════════")) {
		cout << s;
	}
	
	cout << " ---R U N N I N G   S Y S T E M   S E AR C H I E S ---" << endl;
	
	for (auto s : vector<string> (10, "════════")) {
		cout << s;
	}
	portal.searchStudent(101);
	portal.searchStudent(999);
	
	cout << "\nGenerating roster...\n" << endl;
	portal.showAllGrades();
	
	
	return 0;
}

