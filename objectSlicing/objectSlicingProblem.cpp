#include <iostream>
#include <string>

using namespace std;

class Animal{
public:
	Animal(const string& s) : name(s) {}
	virtual void eat() const {
		cout << "animal: " << name << " eat()" << endl;
	}
private:
	string name;
};

class Bird : public Animal {
private:
	string name;
	string habitat;
public:
	Bird(const string& sp, const string &s, const string &h)
		: Animal(sp), name(s), habitat(h) {};
	virtual void eat() const {
		cout << "bird: " << name << " eat() in " << habitat << endl;
	}
};

void WhatAreYouDoingValue(Animal a) {
	a.eat();
}

void WhatAreYouDoingReference(const Animal &a) {
	a.eat();
}

int main()
{
	Animal animal("Animal");
	Bird bird("Eagle","Bald","US and Canada");

	cout << "pass-by-value" << endl;
	WhatAreYouDoingValue(animal);
	WhatAreYouDoingValue(bird);

	cout << "\npass-by-reference" << endl;
	WhatAreYouDoingReference(animal);
	WhatAreYouDoingReference(bird);
}
