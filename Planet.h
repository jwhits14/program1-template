#ifndef PLANET_H
#define PLANET_H

class Planet {
    //not sure about the type of id, or the instructions labeling the return type of getID as "long int"
	private:
        int id;
		int pos;
		int distance;
		char type; 
	public:
		Planet(int);
		int orbit();
		long int getID(){return id;};
		int getDistance(){return distance;};
		int getPos(){return pos;};
		char getType(){return type;};	
};

#endif
