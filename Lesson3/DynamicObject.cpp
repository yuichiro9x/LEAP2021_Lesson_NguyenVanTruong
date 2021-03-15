#include <iostream>
#include "BaseObject.cpp"

class DynamicObject: public BaseObject {
	public:
		DynamicObject(int Id, char* Name, char* pos) :BaseObject(Id, Name, pos) {}
		void Move() {
			std::cout << "Can Move" << std::endl;
		}
};