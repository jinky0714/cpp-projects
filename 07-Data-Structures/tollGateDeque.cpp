#include <iostream>
#include <string>
#include <deque>
using namespace std;

class TollGateSystem {
private:
deque<string> trafficline;

public:
void addRegularVehicle(string vehicleName) {
	trafficline.push_back(vehicleName);
	cout << vehicleName << " joined the back of the line!" << endl;
	
}

void addEmergencyVehicle(string vehicleName) {
	trafficline.push_back(vehicleName);
	cout << "EMERGENCY: " << vehicleName << " cut the front of the line!" << endl;
}

void processVehicle() {
	if (trafficline.empty()) {
		cout << "The lane is clear! No vehicles waiting!";
	} else {
		cout << "~ " << trafficline.front() << " paid the toll and passed through.";
		trafficline.pop_front();
	}
}

void showLaneStatus() {
	if (!(trafficline.empty())) {
		cout << "===== L A N E   S T A T U S =====" << endl;
		cout << "Next to pass : " << trafficline.front();
		cout << "Last in line : " << trafficline.back();
		cout << "Total Vehicles : " << trafficline.size();
	}
}
	
	
};

int main() {
	TollGateSystem lane1;
	
	lane1.addRegularVehicle("Honda CIvic");
	cout << endl;
	lane1.addRegularVehicle("Toyota Vios");
	
	lane1.addEmergencyVehicle("Ambulance #109");
	
	lane1.showLaneStatus();
	
	
	cout << "********* O P E N I N G  G A T E ***********" << endl;
	lane1.processVehicle();


lane1.processVehicle();
	
	
	return 0; 
}
