#include <iostream>
#include "StaticObject.cpp"

class Tree: public StaticObject {
public:
	Tree(int Id, char* Name, char* pos) :StaticObject(Id, Name, pos) {}
};