/*
 * MdlOloDb.h
 *
 *  Created on: Aug 15, 2017
 *      Author: cadm
 */

#ifndef MDLOLODB_H_
#define MDLOLODB_H_


#include <string>
#include <map>
#include <list>
#include <tinyxml2.h>
#include "XmlSupport.h"


class MdlOloDb {
public:
	MdlOloDb(std::string sXmlFilename);
	virtual ~MdlOloDb();

private:
        tinyxml2::XMLDocument m_xmlDoc;
        tinyxml2::XMLElement* m_xmlRoot;
        std::string m_sFilename;

};

#endif /* MDLOLODB_H_ */
