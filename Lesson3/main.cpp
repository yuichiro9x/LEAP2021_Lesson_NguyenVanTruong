#include <iostream>
#include "Tree.cpp"
#include "House.cpp"
#include "Car.cpp"
#include "Motorbike.cpp"
#include <list>

int main()
{
    char TreeName[] = "Tree";
    char TreePos[] = "North";
    char HouseName[] = "House";
    char HousePos[] = "South";
    char CarName[] = "Car";
    char CarPos[] = "East";
    char MotorbName[] = "Motorbike";
    char MotorbPos[] = "West";
    BaseObject* Obj1 = new Car(1, TreeName, TreePos);
    BaseObject* Obj2 = new Car(2, HouseName, HousePos);
    BaseObject* Obj3 = new Car(3, CarName, CarPos);
    BaseObject* Obj4 = new Car(4, MotorbName, MotorbPos);
    std::list<BaseObject*> listObj;
    listObj.insert(listObj.begin(), Obj1);
    listObj.push_back(Obj2);
    listObj.push_back(Obj3);
    listObj.push_back(Obj4);

    for (auto obj : listObj) {
        obj->getId();
        obj->getName();
        obj->getPosition();
        obj->Move();
        std::cout << std::endl << std::endl;
    }
    listObj.clear();

}