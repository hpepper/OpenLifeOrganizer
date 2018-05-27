/*
 * Model.cpp
 *
 *  Created on: Aug 14, 2017
 *      Author: cadm
 */

#include "Model.h"
#include <fstream>
#include <iostream>



Model::Model(std::string sDataFileName) {
	std::ifstream fTestInputFileExist(sDataFileName.c_str());
	std::cout << "DDD  sCharacterDataFileName: " << sDataFileName << std::endl;
	if (!fTestInputFileExist.good()) {
		std::cerr << "!!! the file does not exist: " << sDataFileName
				<< std::endl;
		exit(-1);
	} else {
		// TODO N Later create a reader and writer class to handle the read and write to the .xml file and other storage media.
		m_pModelOloDatabase = new MdlOloDb(sDataFileName);
	}

}

Model::~Model() {
	// TODO Auto-generated destructor stub
}

int Model::AddCaptureGoal(std::string sGoal) {
	int nStatus = 0;

	nStatus = m_pModelOloDatabase->AddCaptureGoal(sGoal);
	return(nStatus);
}

