/*
 * XmlSupport.h
 *
 *  Created on: Aug 15, 2017
 *      Author: cadm
 */

#ifndef XMLSUPPORT_H_
#define XMLSUPPORT_H_

#include <string>
#include <tinyxml2.h>

class XmlSupport {
public:
        XmlSupport();
        virtual ~XmlSupport();

        std::string GetChildDataBySingleTagName(tinyxml2::XMLElement* , std::string);
        std::string GetAttributeData(tinyxml2::XMLElement* , std::string);
};


#endif /* XMLSUPPORT_H_ */
