//
// WhitespaceFilter.h
//
// $Id: //poco/svn/XML/include/Poco/SAX/WhitespaceFilter.h#2 $
//
// Library: XML
// Package: SAX
// Module:  WhitespaceFilter
//
// Definition of the WhitespaceFilter class.
//
// Copyright (c) 2004-2006, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// Permission is hereby granted, free of charge, to any person or organization
// obtaining a copy of the software and accompanying documentation covered by
// this license (the "Software") to use, reproduce, display, distribute,
// execute, and transmit the Software, and to prepare derivative works of the
// Software, and to permit third-parties to whom the Software is furnished to
// do so, all subject to the following:
// 
// The copyright notices in the Software and this entire statement, including
// the above license grant, this restriction and the following disclaimer,
// must be included in all copies of the Software, in whole or in part, and
// all derivative works of the Software, unless such copies or derivative
// works are solely in the form of machine-executable object code generated by
// a source language processor.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
// SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
// FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
// ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// DEALINGS IN THE SOFTWARE.
//


#ifndef SAX_WhitespaceFilter_INCLUDED
#define SAX_WhitespaceFilter_INCLUDED


#include "Poco/XML/XML.h"
#include "Poco/SAX/XMLFilterImpl.h"
#include "Poco/SAX/LexicalHandler.h"


namespace Poco {
namespace XML {


class XML_API WhitespaceFilter: public XMLFilterImpl, public LexicalHandler
	/// This implementation of the SAX2 XMLFilter interface
	/// filters all whitespace-only character data element
	/// content.
{
public:
	WhitespaceFilter();
		/// Creates the WhitespaceFilter, with no parent.
		
	WhitespaceFilter(XMLReader* pReader);
		/// Creates the WhitespaceFilter with the specified parent.

	~WhitespaceFilter();
		/// Destroys the WhitespaceFilter.

	// XMLReader
	void setProperty(const XMLString& propertyId, const XMLString& value);
	void setProperty(const XMLString& propertyId, void* value);
	void* getProperty(const XMLString& propertyId) const;

	// ContentHandler
	void startDocument();
	void endDocument();
	void startElement(const XMLString& uri, const XMLString& localName, const XMLString& qname, const Attributes& attrList);
	void endElement(const XMLString& uri, const XMLString& localName, const XMLString& qname);
	void characters(const XMLChar ch[], int start, int length);
	void ignorableWhitespace(const XMLChar ch[], int start, int length);
	void processingInstruction(const XMLString& target, const XMLString& data);

	// LexicalHandler
	void startDTD(const XMLString& name, const XMLString& publicId, const XMLString& systemId);
	void endDTD();
	void startEntity(const XMLString& name);
	void endEntity(const XMLString& name);
	void startCDATA();
	void endCDATA();
	void comment(const XMLChar ch[], int start, int length);

protected:
	void setupParse();

private:
	LexicalHandler* _pLexicalHandler;
	XMLString       _data;
	bool            _filter;
};


} } // namespace Poco::XML


#endif // SAX_WhitespaceFilter_INCLUDED
