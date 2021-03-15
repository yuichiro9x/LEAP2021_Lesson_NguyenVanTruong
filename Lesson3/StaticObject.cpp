#include <iostream>
#include "BaseObject.cpp"

class StaticObject : public BaseObject {
	public:
		StaticObject(int Id, char* Name, char* pos) :BaseObject(Id, Name, pos) {}
		void Move() {
			std::cout << "Can not Move" << std::endl;
		}
};