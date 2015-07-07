#include <iostream>
#include <vector>
#include "Circle.h"
#include <math.h>

std::vector<Circle*> objectStorage;
int main() {

	while (1){
		// move all 
		for(auto cir: objectStorage)
		{
			cir->move(1.0 / FPS); //robot & bullet
		}

	}
	return 0;
}
