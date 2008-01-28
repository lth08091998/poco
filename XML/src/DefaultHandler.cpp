//
// DefaultHandler.cpp
//
// $Id: //poco/svn/XML/src/DefaultHandler.cpp#2 $
//
// Library: XML
// Package: SAX
// Module:  SAX
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


#include "Poco/SAX/DefaultHandler.h"


namespace Poco {
namespace XML {


DefaultHandler::DefaultHandler()
{
}


DefaultHandler::~DefaultHandler()
{
}


InputSource* DefaultHandler::resolveEntity(const XMLString* publicId, const XMLString& systemId)
{
	return 0;
}


void DefaultHandler::releaseInputSource(InputSource* pSource)
{
}


void DefaultHandler::notationDecl(const XMLString& name, const XMLString* publicId, const XMLString* systemId)
{
}


void DefaultHandler::unparsedEntityDecl(const XMLString& name, const XMLString* publicId, const XMLString& systemId, const XMLString& notationName)
{
}


void DefaultHandler::setDocumentLocator(const Locator* loc)
{
}


void DefaultHandler::startDocument()
{
}


void DefaultHandler::endDocument()
{
}


void DefaultHandler::startElement(const XMLString& uri, const XMLString& localName, const XMLString& qname, const Attributes& attributes)
{
}


void DefaultHandler::endElement(const XMLString& uri, const XMLString& localName, const XMLString& qname)
{
}


void DefaultHandler::characters(const XMLChar ch[], int start, int length)
{
}


void DefaultHandler::ignorableWhitespace(const XMLChar ch[], int start, int length)
{
}


void DefaultHandler::processingInstruction(const XMLString& target, const XMLString& data)
{
}


void DefaultHandler::startPrefixMapping(const XMLString& prefix, const XMLString& uri)
{
}


void DefaultHandler::endPrefixMapping(const XMLString& prefix)
{
}


void DefaultHandler::skippedEntity(const XMLString& name)
{
}


void DefaultHandler::warning(const SAXException& exc)
{
}


void DefaultHandler::error(const SAXException& exc)
{
}


void DefaultHandler::fatalError(const SAXException& exc)
{
}


} } // namespace Poco::XML
