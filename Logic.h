#pragma once
#include <iostream>
#include <vector>

class Room {
	static int roomNum;
protected:
	int id;
	int price;
	bool isBooked;
	std::string guestName;
	bool requiresCleaning;
	bool requiresDelivery;
	int numOfRooms;
public:
	Room(int price, bool isBooked, std::string guestName, bool requiresCleaning, bool requiresDelivery, int numOfRooms);
	Room();
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
	void setNumOfRooms(int numOfRooms);
	int getNumOfRooms();
	void printData();
};
class VipRoom : public Room {
	bool isJacuzzi = 0;
	bool isPA = 0; // Presidential apartments
protected:
	bool miniBar = 0;
public:
	VipRoom();
	VipRoom(int price, bool isBooked, std::string guestName,
		bool requiresCleaning, bool requiresDelivery, int numOfRooms,
		std::string isJacuzzi, std::string isPA, std::string miniBar);

	void setIsJacuzzi(std::string isJacuzzi);
	bool getIsJacuzzi();
	void setIsPA(std::string isPA);
	bool getIsPA();
	void setIsMiniBar(std::string miniBar);
	bool GetIsMiniBar();
	void printData();
};

class BasicRoom : public VipRoom {

public:
	BasicRoom();
};



