/*
 * MdlOloDb.cpp
 *
 *  Created on: Aug 15, 2017
 *
 *
 *   Handles the OLO D operations.
 */

#include "MdlOloDb.h"

/**
 * @param sXmlFilename - Name of the Character sheet.
 * @param sDataPath - Path to the data files, like the weapons etc, can be relative.
 *
 *
 */
MdlOloDb::MdlOloDb(std::string sXmlFilename) {
	m_sFilename = sXmlFilename;

	int nStatus = m_xmlDoc.LoadFile(sXmlFilename.c_str());
	if (nStatus == 0) {
		m_xmlRoot = m_xmlDoc.RootElement();
	}
}

MdlOloDb::~MdlOloDb() {
	// TODO Auto-generated destructor stub
}

