/*
 * Smalltalk.cpp
 *
 *  Created on: Nov 18, 2019
 *      Author: Edencio Wilcher
 */
#include "./includes/Smalltalk.h"
#include "./includes/constants.h"
#include <string>

Smalltalk::Smalltalk(std::string myNationality, int iPerson /*= 1*/) :
		nationality(myNationality), iPerson(iPerson), current_phrase(0) {

}

Smalltalk::~Smalltalk(void) {

}

std::string Smalltalk::saySomething() {
	int cph = current_phrase;
	std::string cphrase = mySmallTalk.at(current_phrase % mySmallTalk.size());

	current_phrase++;
	std::string iPersonString = std::to_string(iPerson);
	std::string phrase = std::string(nationality) + " " + iPersonString + ":"
			+ cphrase;
	return phrase;
}

std::string Smalltalk::getTime() {
	if (pWatch != 0) {

		std::string a = pWatch.get()->getTime();
		return "THE_CURRENT_TIME_IS:" + a;
	}
	return I_DO_NOT_HAVE_A_WATCH;
}

std::unique_ptr<Watch> Smalltalk::takeWatch() {
	if (pWatch != 0) {
		std::unique_ptr<Watch> watchTaker(std::move(pWatch));
		return watchTaker;
	}
	std::unique_ptr<Watch> emptyWatch;
	return emptyWatch;
}

bool Smalltalk::giveWatch(std::unique_ptr<Watch> &pWatch) {
	if (pWatch != 0) {
		this->pWatch = (std::move(pWatch));
		return true;
	}
	return false;
}

void Smalltalk::populatePhrases() {

}

