#include <iostream>
#define ret return
using namespace std;

class Mass {
public:
	virtual int getMass() {
		ret 0;
	}
};

class salat: public Mass{
public:
	int getMass() override {
		ret Onion + Cucumber + Tomato;
	}
	void addOnion(int gram) {
		Onion += gram;
	}
	void addCucumber(int gram) {
		Cucumber += gram;
	}
	void addTomato(int gram) {
		Tomato += gram;
	}

private:
	int Onion = 0;
	int Tomato = 0;
	int Cucumber = 0;
};

class FrenchFries : public Mass {
public:
	int getMass() override {
		ret Onion + Potato;
	}
	void addPotato(int gram) {
		Potato += gram;
	}
	void addOnion(int gram) {
		Onion += gram;
	}
private:
	int Onion = 0;
	int Potato = 0;
};

int main() {

	FrenchFries n;
	n.addPotato(5);
	n.addOnion(5);
	salat z;
	z.addCucumber(3);
	z.addOnion(5);
	z.addTomato(7);
	cout << (z.getMass());

}