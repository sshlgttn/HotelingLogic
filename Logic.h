#pragma once
#include <iostream>

class Room {
	static int roomNum;
	int id;
protected:
	int price;
	bool isBooked;
	std::string guestName;
	bool requiresCleaning;
	bool requiresDelivery;
public:
	Room();
	void printData();
	void setPrice(int price);
	int getPrice();
	void errorMSG();
	void setIsBooked(std::string isBooked);
	bool getIsBooked();
	void setGuestName(std::string guestName);
	std::string getGuestName();
	void setRequiresCleaning(std::string requiresCleaning);
	bool getRequiresCleaning();
	void setRequiresDelivery(std::string requiresDelivery);
	bool getRequiresDelivery();
};
class VipRoom : public Room {
	bool isJacuzzi = 0;
	bool isPA = 0; // Presidential apartments

protected:
	bool miniBar = 0;
	int numOfRooms = 0;
public:
	VipRoom();
	void setIsJacuzzi(std::string isJacuzzi);
	bool getIsJacuzzi();
	void setIsPA(std::string isPA);
	bool getIsPA();
};

class BasicRoom : public VipRoom {
public:
	BasicRoom();
};

