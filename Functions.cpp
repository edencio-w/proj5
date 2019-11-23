//
/*
 * Functions.cpp
 *
 *  Created on: Nov 5, 2017
 *      Author: keith
 */
#include <iostream>
#include <memory>
#include <string>
#include "./includes/Functions.h"
#include "./includes/Smalltalk_American.h"
#include "./includes/ST_American_DonutEnthusiest.h"
#include "./includes/Smalltalk_Brit.h"
#include "./includes/Watch.h"
#include "./includes/constants.h"
#include <vector>

std::vector<std::unique_ptr<Smalltalk>> getPeople(int numBrit, int numAmerican,
		int numbAmericanDonutEnthusiest, int numWatches) {

	//create a vector to hold SmallTalk unique pointers
	std::vector<std::unique_ptr<Smalltalk>> vect;

	//add brits to vector
	for (int i = 0; i < numBrit; i++) {
		vect.emplace_back(new Smalltalk_Brit(i));
	}

	//add americans  to vector
	for (int i = 0; i < numAmerican; i++) {
		vect.emplace_back(new Smalltalk_American(i));
	}

	//add american donut enthusiest  to vector
	for (int i = 0; i < numbAmericanDonutEnthusiest; i++) {
		vect.emplace_back(new ST_American_DonutEnthusiest(i));
	}

	int numPpl = numBrit + numAmerican + numbAmericanDonutEnthusiest;
	if (numWatches <= numPpl) {
		for (int i = 0; i < numWatches; i++) {
			std::unique_ptr<Watch> pWatch(new Watch());
			vect.at(i)->giveWatch(pWatch);
		}
	} else if (numWatches > numPpl) {
		for (int i = 0; i < numPpl; i++) {
			std::unique_ptr<Watch> pWatch(new Watch());
			vect.at(i)->giveWatch(pWatch);
		}
	}

	return vect;
}
