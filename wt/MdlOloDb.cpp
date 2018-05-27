/*
 * MdlOloDb.cpp
 *
 *  Created on: Aug 15, 2017
 *
 *
 *   Handles the OLO D operations.
 */

#include "MdlOloDb.h"
#include <iostream>

/**
 * @param sXmlFilename - Name of the Character sheet.
 * @param sDataPath - Path to the data files, like the weapons etc, can be relative.
 *
 *
 */
MdlOloDb::MdlOloDb(std::string sXmlFilename) {
	m_sFilename = sXmlFilename;

	int nStatus = m_xmlDoc.LoadFile(m_sFilename.c_str());
	if (nStatus == 0) {
		m_xmlRoot = m_xmlDoc.RootElement();
	}
}

MdlOloDb::~MdlOloDb() {
	// TODO Auto-generated destructor stub
}


int MdlOloDb::AddCaptureGoal(std::string sGoal) {
	int nStatus = 0;


	//tinyxml2::XMLNode *xmlGoalNode = m_xmlDoc.NewElement("Goal");
	tinyxml2::XMLElement *xmlGoalElement = m_xmlDoc.NewElement("Goal");
	xmlGoalElement->SetAttribute("Headline", sGoal.c_str());
	m_xmlRoot->LinkEndChild(xmlGoalElement);

	// TODO V add a creation time stamp.


	// TODO V Handle XML Error.
	m_xmlDoc.SaveFile(m_sFilename.c_str());

	return(nStatus);
}
