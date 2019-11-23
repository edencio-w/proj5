/*
 * Smalltalk_American.cpp
 *
 *  Created on: Nov 18, 2019
 *      Author: Edencio Wilcher
 */
#include "./includes/Smalltalk_American.h"
#include "./includes/constants.h"
using namespace std;

Smalltalk_American::Smalltalk_American(int iPerson /*= 1*/) :
		Smalltalk(AMERICAN, iPerson) {
	populatePhrases();
}
Smalltalk_American::Smalltalk_American(std::string myNationality, int iPerson/* =
 1*/) :
		Smalltalk(myNationality, iPerson) {
	populatePhrases();
}

Smalltalk_American::~Smalltalk_American(void) {

}
void Smalltalk_American::populatePhrases() {
	mySmallTalk.push_back(AMERICAN_PHRASE_1);
	mySmallTalk.push_back(AMERICAN_PHRASE_2);
	mySmallTalk.push_back(AMERICAN_PHRASE_3);
	mySmallTalk.push_back(AMERICAN_PHRASE_4);
	mySmallTalk.push_back(AMERICAN_PHRASE_5);
}

