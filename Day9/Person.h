#include "Address.h"

class Person {
	char* name;
	static int count;
	int id;
	Address addr;
	
	public:
		Person();
		Person(const char* nm, const char* str, const char* ct, const char* stt, int pin);
		~Person();
		
		// setters
		void setName(const char* nm);
		void setAddr(Address a);

		// getters
		const char* getName();
		int getId();
		Address& getAddr();
		
		void display();
};