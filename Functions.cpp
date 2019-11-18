//
/*
 * Functions.cpp
 *
 *  Created on: Nov 5, 2017
 *      Author: keith
 */
#include <iostream>
#include <memory>

#include "./includes/Functions.h"
#include "./includes/Smalltalk_American.h"
#include "./includes/ST_American_DonutEnthusiest.h"
#include "./includes/Smalltalk_Brit.h"
#include "./includes/Watch.h"
#include "./includes/constants.h"
#include <vector>

//create a vector with appropriate numbers of Smalltalk_Brit,Smalltalk_American and ST_American_DonutEnthusiest
//objects using unique pointers.  Since we are using c++11 returning this vector by value is fine since the 
//compiler will move the vector on return rather than recreate it (this means there is no copy penalty)
std::vector<std::unique_ptr<Smalltalk>> getPeople(int numBrit, int numAmerican,
		int numbAmericanDonutEnthusiest, int numWatches) {

	//create a vector to hold SmallTalk unique pointers
	std::vector<std::unique_ptr<Smalltalk>> vect;

	//add brits to vector
	for (int i = 0; i < numBrit; i++) {
		vect.push_back(std::unique_ptr<Smalltalk>(new Smalltalk(BRIT, i)));
		vect.emplace_back(new Smalltalk(BRIT, i));
	}

	//add americans  to vector
	for (int i = 0; i < numAmerican; i++) {
		vect.push_back(std::unique_ptr<Smalltalk>(new Smalltalk(AMERICAN, i)));
		vect.emplace_back(new Smalltalk(AMERICAN, i));
	}

	//add american donut enthusiest  to vector
	for (int i = 0; i < numbAmericanDonutEnthusiest; i++) {
		vect.push_back(
				std::unique_ptr<Smalltalk>(new Smalltalk(AMERICAN_DE, i)));
		vect.emplace_back(new Smalltalk(AMERICAN_DE, i));
	}

	//create some watches (as long as number watches <= numb people)
	//then give the watches away to first NUM_WATCHES people in the vector
	// when you are finished using the vector you return
	//from this function(see Smalltalk header for hints)
	if (numWatches <= numBrit + numAmerican) {
		for (int i = 0; i < numWatches; i++) {
			//TODO Give watches to ppl
		}
	}

	//return your vector
	return vect;
}
