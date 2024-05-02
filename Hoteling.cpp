#include <iostream>
#include "Logic.h"






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

	std::vector<Room> basicRoom;
	std::vector<VipRoom> vipRoom;


	for(int i = 0; i < 5; i++)	vipRoom.push_back({ 5000, 0, "vados", 0, 0, 5, "y", "n", "y" });
	for (int i = 0; i < 5; i++) vipRoom[i].printData();
	for (int i = 0; i < 5; i++) basicRoom.push_back({ 5000, 0, "vados", 0, 0, 5 });
	for (int i = 0; i < 5; i++) basicRoom[i].printData();

	return 0;
}