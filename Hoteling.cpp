#include <iostream>


class Room {
	static int roomNum;
	int id;
protected:
	int price;
	bool isBooked;
	std::string guestName;
public:
	Room() {
		roomNum++;
		id = roomNum;
		int price = 0;
		bool isBooked = 0;
		std::string guestName = "NULL";
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
};	

class BasicRoom : public Room {
protected:
	bool miniBar;
public:
	BasicRoom() {
		
	}
};

class VipRoom : public BasicRoom {
public:
	VipRoom() {

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