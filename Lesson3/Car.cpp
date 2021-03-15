#include <iostream>
#include "DynamicObject.cpp"

class Car : public DynamicObject {
public:
	Car(int Id, char* Name, char* pos) :DynamicObject(Id, Name, pos) {}
};