/*
 * Controller.h
 *
 *  Created on: Aug 15, 2017
 *
 */

#ifndef CONTROLLER_H_
#define CONTROLLER_H_

#include "Model.h"
#include <string>

class Controller {
public:
	Controller(Model *pModel);
	virtual ~Controller();
	int AddCaptureGoal(std::string);

private:
	Model *m_pModel;
};

#endif /* CONTROLLER_H_ */
