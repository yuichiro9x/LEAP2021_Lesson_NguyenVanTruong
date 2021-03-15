#include <iostream>
#include "DynamicObject.cpp"

class Motorbike : public DynamicObject {
public:
	Motorbike(int Id, char* Name, char* pos) :DynamicObject(Id, Name, pos) {}
};