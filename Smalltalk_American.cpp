/*
 * Smalltalk_American.cpp
 *
 *  Created on: Nov 18, 2019
 *      Author: Edencio Wilcher
 */
#include "./includes/Smalltalk_American.h"
#include "./includes/constants.h"
using namespace std;

//create with appropriate phrases
//use base class call to set Nationality (See constants for Nationality strings)
Smalltalk_American::Smalltalk_American(int iPerson = 1):Smalltalk(AMERICAN,iPerson) {

}
Smalltalk_American::Smalltalk_American(std::string myNationality, int iPerson =
		1):Smalltalk(myNationality,iPerson) {

}

Smalltalk_American::~Smalltalk_American(void) {

}
void populatePhrases() {

}

