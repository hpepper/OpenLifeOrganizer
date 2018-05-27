/*
 * Model.h
 *
 *  Created on: Aug 14, 2017
 *
 *  Handle XML interface. Load, Save etc.
 */

#ifndef MODEL_H_
#define MODEL_H_

#include <string>

#include "MdlOloDb.h"


class Model {
public:
	Model(std::string);
	virtual ~Model();

	int AddCaptureGoal(std::string);

private:
	MdlOloDb *m_pModelOloDatabase;
};

#endif /* MODEL_H_ */
