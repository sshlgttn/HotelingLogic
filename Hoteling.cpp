#include <iostream>


class Room {
	static int roomNum;
	int id;
	int price;
	bool isBooked;
	std::string guestName;
public:
	Room() {
		roomNum++;
		id = roomNum;
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
	void setIsBooked(std::string isBooked) { // takes y/n;
		if (isBooked[0] == 'y' || isBooked[0] == 'Y') this->isBooked = true;
		else if (isBooked[0] == 'n' || isBooked[0] == 'N') this->isBooked = false;
		else { errorMSG(); this->isBooked = false; }
	}
	bool getIsBooked() {
		return isBooked;
	}

	//add guestName setter and getter

};

class BasicRoom : public Room {
public:
	BasicRoom() {

	}
};

class VipRoom : public Room {
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