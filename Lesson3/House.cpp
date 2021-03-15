#include <iostream>
#include "StaticObject.cpp"

class House : public StaticObject {
public:
	House(int Id, char* Name, char* pos) :StaticObject(Id, Name, pos) {}
};