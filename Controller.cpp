/*
 * Controller.cpp
 *
 *  Created on: Aug 15, 2017
 *
 */

#include "Controller.h"

Controller::Controller(Model *pModel) {
	m_pModel = pModel;
}

Controller::~Controller() {
	// TODO Auto-generated destructor stub
}

int Controller::AddCaptureGoal(std::string sGoalLine) {
	int nStatus = 0;

	nStatus = m_pModel->AddCaptureGoal(sGoalLine);
	return(nStatus);
}
