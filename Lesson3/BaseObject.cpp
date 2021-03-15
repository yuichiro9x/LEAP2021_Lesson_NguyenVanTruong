#include <iostream>

class BaseObject{
	private:
		int id;
		char *name, *position;
	public:

		BaseObject() = default;
		BaseObject(int Id, char* Name, char* Position) {
			id = Id;
			name = Name;
			position = Position;
		}
		int getId()
		{
			std::cout << id << std::endl;
			return id;
		}

		char* getName() {
			std::cout << name << std::endl;
			return name;
		}

		char* getPosition() {
			std::cout << position<<std::endl;
			return position;
		}

		virtual void Move() {
			std::cout << "Move" << std::endl;
		}
};





