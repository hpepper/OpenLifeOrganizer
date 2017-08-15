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


class Model {
public:
	Model(std::string sDataFileName);
	virtual ~Model();
};

#endif /* MODEL_H_ */
