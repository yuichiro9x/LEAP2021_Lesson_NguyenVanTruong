// Lesson4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Door {
	class State *current;
public:
	Door();
	void setCurrent(State* s) {
		current = s;
	}

	void lock();
	void unlock();
	void open();
	void close();
};

class State {
public:
	virtual void lock(Door* d) {
		std::cout << "Already Lock!" << std::endl;
	}

	virtual void unlock(Door* d) {
		std::cout << "Already Unlock!" << std::endl;
	}

	virtual void open(Door* d) {
		std::cout << "Already Open!" << std::endl;
	}

	virtual void close(Door* d) {
		std::cout << "Already Close!" << std::endl;
	}
};

void Door::lock() {
	current->lock(this);
}

void Door::unlock() {
	current->unlock(this);
}

void Door::open() {
	current->open(this);
}

void Door::close() {
	current->close(this);
}


class Locked : public State {
public:
	Locked() {
		std::cout << "Door Locked! Cant be opened!"<<std::endl;
	}

	void unlock(Door* m);

	void open(Door* m) {
		m->setCurrent(new Locked());
		delete this;
	}
};

class Closed :public State {
public:
	Closed() {
		std::cout << "Door Closed and Unlocked!" << std::endl;
	}
	void lock(Door* m) {
		m->setCurrent(new Locked());
		delete this;
	}

	void open(Door* m);
};

void Locked::unlock(Door* m) {
	m->setCurrent(new Closed());
	delete this;
}

class Opened :public State {
	public:
		Opened() {
			std::cout << "Door Opened! Cant be locked!" << std::endl;
		}
		void close(Door* m) {
			m->setCurrent(new Closed());
			delete this;
		}

		void lock(Door* m) {
			m->setCurrent(new Opened());
			delete this;
		}
};

void Closed::open(Door* m) {
	m->setCurrent(new Opened());
	delete this;
}


Door::Door() {
	current = new Locked();
	std::cout << std::endl;
}

int main()
{
    void(Door::*ptrs[])() =
    {
      &Door::lock, &Door::unlock, &Door::open,& Door::close
    };
    Door x;
	int n=1;
    int num;
    while (n)
    {
        std::cout << "Enter 0/1/2/3 (Lock, Unlock, Open, Close): ";
		std::cin >> num;
		if (num >= 0 && num < 4) {
			(x.*ptrs[num])();
		}
		else std::cout << "Lua chon khong hop le!" << std::endl;
    }
}

