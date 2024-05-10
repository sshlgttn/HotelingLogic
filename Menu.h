#pragma once
#include <iostream>
//bb
class RusMenu {
public:
	virtual void menu();
};

class EngMenu : public RusMenu {
public:
	void menu() override;
};
