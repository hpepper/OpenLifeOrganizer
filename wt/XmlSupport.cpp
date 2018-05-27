/*
 * XmlSupport.cpp
 *
 *  Created on: Aug 15, 2017
 *      Author: cadm
 */

#include "XmlSupport.h"

XmlSupport::XmlSupport() {
	// TODO Auto-generated constructor stub

}

XmlSupport::~XmlSupport() {
	// TODO Auto-generated destructor stub
}

/**
 *
 */
std::string XmlSupport::GetAttributeData(tinyxml2::XMLElement* xmlElement, std::string sTagName) {
        std::string sResult;

        if (xmlElement->Attribute(sTagName.c_str())) {
                sResult = xmlElement->Attribute(sTagName.c_str());
        }
        return (sResult);
}

/**
 *
 */
std::string XmlSupport::GetChildDataBySingleTagName(tinyxml2::XMLElement* xmlElement,
                std::string sTagName) {
        std::string sResult;
        tinyxml2::XMLElement *xmlChildElement = NULL;

        if (xmlElement != NULL) {
                xmlChildElement = xmlElement->FirstChildElement(sTagName.c_str());
        }
        if (xmlChildElement != NULL) {
                sResult = xmlChildElement->GetText();
        }
        return (sResult);
}
