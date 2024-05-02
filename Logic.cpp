#include "Logic.h"



Room::Room() {
	roomNum++;
	id = roomNum;
	price = 0;
	isBooked = 0;
	guestName = "NULL";
	requiresCleaning = 0;
	requiresDelivery = 0;
}
void Room::printData()
{
	std::cout << id << std::endl;
}
void Room::setPrice(int price) {
	this->price = price;
}
int Room::getPrice() {
	return price;
}
void Room::errorMSG() { std::cout << "ERROR"; }
void Room::setIsBooked(std::string isBooked) {
	if (isBooked[0] == 'y' || isBooked[0] == 'Y') this->isBooked = true;
	else if (isBooked[0] == 'n' || isBooked[0] == 'N') this->isBooked = false;
	else { errorMSG(); this->isBooked = false; }
}
bool Room::getIsBooked() {
	return isBooked;
}
void Room::setGuestName(std::string guestName) {
	this->guestName = guestName;
}
std::string Room::getGuestName() {
	return guestName;
}
void Room::setRequiresCleaning(std::string requiresCleaning) {
	if (requiresCleaning[0] == 'y' || requiresCleaning[0] == 'Y') this->requiresCleaning = true;
	else if (requiresCleaning[0] == 'n' || requiresCleaning[0] == 'N') this->requiresCleaning = false;
	else { errorMSG(); this->requiresCleaning = false; } //COPYPAST FROM BOOK MIGHT BE A MISTAKE
}
bool Room::getRequiresCleaning() {
	return requiresCleaning;
}
void Room::setRequiresDelivery(std::string requiresDelivery) {
	if (requiresDelivery[0] == 'y' || requiresDelivery[0] == 'Y') this->requiresDelivery = true;
	else if (requiresDelivery[0] == 'n' || requiresDelivery[0] == 'N') this->requiresDelivery = false;
	else { errorMSG(); this->requiresDelivery = false; } //COPYPAST FROM BOOK MIGHT BE A MISTAKE
}
bool Room::getRequiresDelivery() {
	return requiresDelivery;
}



VipRoom::VipRoom() {

}
void VipRoom::setIsJacuzzi(std::string isJacuzzi) {
	if (isJacuzzi[0] == 'y' || isJacuzzi[0] == 'Y') this->isJacuzzi = true;
	else if (isJacuzzi[0] == 'n' || isJacuzzi[0] == 'N') this->isJacuzzi = false;
	else { errorMSG(); this->isJacuzzi = false; } //COPYPAST FROM BOOK MIGHT BE A MISTAKE
}
bool VipRoom::getIsJacuzzi() {
	return isJacuzzi;
}
void VipRoom::setIsPA(std::string isPA) {
	if (isPA[0] == 'y' || isPA[0] == 'Y') this->isPA = true;
	else if (isPA[0] == 'n' || isPA[0] == 'N') this->isPA = false;
	else { errorMSG(); this->isPA = false; } //COPYPAST FROM BOOK MIGHT BE A MISTAKE
}
bool VipRoom::getIsPA() {
	return isPA;
}

BasicRoom::BasicRoom() {

}


