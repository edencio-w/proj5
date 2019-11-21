/*
 * Smalltalk_Brit.cpp
 *
 *  Created on: Nov 18, 2019
 *      Author: Edencio Wilcher
 */
#include <vector>
#include "./includes/Smalltalk_Brit.h"
#include "./includes/constants.h"
using namespace std;

Smalltalk_Brit::Smalltalk_Brit(int iPerson/*=1*/):Smalltalk(BRIT,iPerson) {

}
Smalltalk_Brit::~Smalltalk_Brit(void) {

}
void Smalltalk::populatePhrases() {
	mySmallTalk.push_back(BRIT_1);
	mySmallTalk.push_back(BRIT_2);
	mySmallTalk.push_back(BRIT_3);
	mySmallTalk.push_back(BRIT_4);
	mySmallTalk.push_back(BRIT_5);
	mySmallTalk.push_back(BRIT_6);
	mySmallTalk.push_back(BRIT_7);
}

