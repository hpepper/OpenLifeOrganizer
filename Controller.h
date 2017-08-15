/*
 * Controller.h
 *
 *  Created on: Aug 15, 2017
 *
 */

#ifndef CONTROLLER_H_
#define CONTROLLER_H_

#include "Model.h"

class Controller {
public:
	Controller(Model *pModel);
	virtual ~Controller();

private:
	Model *m_pModel;
};

#endif /* CONTROLLER_H_ */
