#pragma once

#include "ofMain.h"
#include "ofExtended.h"
#include "../../dallasEng/dallasEng.h"

struct configuration {
	string folderRoot;
	string fileRoot;
	int numSets;
	string dest;
	int startingNumber;
	int portNumber;
	int camWid;
	int camHgt;
	int framesPerSec;
	bool autoMode;
	float recordTime;
	float fallPercent;
	float raiseTime;
	float cameraGain;
	bool english;

	bool loopVideo;
	bool autoPlay;
	float autoPlayDelay;
	void readGeneralConfig(string cfgFile);
	configuration(){
		ofEnableDataPath();
		english=true;
		cameraGain=2;
		autoMode=false;
	}
	void setup(){
		readGeneralConfig("config.txt");
	}
};

configuration & cfg();