#ifndef HEADER_V
#define HEADER_V
#include "Planet.h"

class Vector{
	private:
		Planet **vec;
		int size;
	public:
		Vector();
		~Vector();
		void insert(int index, Planet * p);
		Planet* read(int index);
		bool remove(int index);
		unsigned size();

};
#endif
