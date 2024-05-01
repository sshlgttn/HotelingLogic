#include <iostream>


class Room {
	static int roomNum;
	int id;
protected:
	int price = 0;
	bool isBooked = 0;
	std::string guestName;
	bool requiresCleaning;
	bool requiresDelivery;
public:
	Room() {
		roomNum++;
		id = roomNum;
		price = 0;
		isBooked = 0;
		guestName = "NULL";
		requiresCleaning = 0;
		requiresDelivery = 0;
	}
	void printData() {
		std::cout << id << std::endl;
	}
	void setPrice(int price) {
		this->price = price;
	}
	int getPrice() {
		return price;
	}
	void errorMSG() { std::cout << "ERROR"; }
	void setIsBooked(std::string isBooked) { 
		if (isBooked[0] == 'y' || isBooked[0] == 'Y') this->isBooked = true;
		else if (isBooked[0] == 'n' || isBooked[0] == 'N') this->isBooked = false;
		else { errorMSG(); this->isBooked = false; }
	}
	bool getIsBooked() {
		return isBooked;
	}
	void setGuestName(std::string guestName) {
		this->guestName = guestName;
	}
	std::string getGuestName() {
		return guestName;
	}
	void setRequiresCleaning(std::string requiresCleaning) {
		if (requiresCleaning[0] == 'y' || requiresCleaning[0] == 'Y') this->requiresCleaning = true;
		else if (requiresCleaning[0] == 'n' || requiresCleaning[0] == 'N') this->requiresCleaning = false;
		else { errorMSG(); this->requiresCleaning = false; } //COPYPAST FROM BOOK MIGHT BE A MISTAKE
	}
	bool getRequiresCleaning() {
		return requiresCleaning;
	}
	void setRequiresDelivery(std::string requiresDelivery) {
		if (requiresDelivery[0] == 'y' || requiresDelivery[0] == 'Y') this->requiresDelivery = true;
		else if (requiresDelivery[0] == 'n' || requiresDelivery[0] == 'N') this->requiresDelivery = false;
		else { errorMSG(); this->requiresDelivery = false; } //COPYPAST FROM BOOK MIGHT BE A MISTAKE
	}
	bool getRequiresDelivery() {
		return requiresDelivery;
	}
};	

class VipRoom : public Room {
	bool isJacuzzi = 0;
	bool isPA = 0; // Presidential apartments

protected:
	bool miniBar = 0;
	int numOfRooms = 0;
public:
	VipRoom() {

	}
};

class BasicRoom : public VipRoom {
public:
	BasicRoom() {
		
	}
};






int Room::roomNum = 0;
int main() {
	setlocale(0, "RU");
	Room test;
	Room test1;
	Room test2;
	test.printData();
	test1.printData();
	test2.printData();
	VipRoom ts;
	VipRoom ts1;
	VipRoom ts2;
	ts.printData();
	ts1.printData();
	ts2.printData();



	return 0;
}