//
// EventException.h
//
// $Id: //poco/svn/XML/include/Poco/DOM/EventException.h#2 $
//
// Library: XML
// Package: DOM
// Module:  DOMEvents
//
// Definition of the DOM EventException class.
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


#ifndef DOM_EventException_INCLUDED
#define DOM_EventException_INCLUDED


#include "Poco/XML/XML.h"
#include "Poco/XML/XMLException.h"


namespace Poco {
namespace XML {


class XML_API EventException: public XMLException
	/// Event operations may throw an EventException as 
	/// specified in their method descriptions.
{
public:
	enum
	{
		UNSPECIFIED_EVENT_TYPE_ERR = 0  /// If the Event's type was not specified by initializing the 
		                                /// event before the method was called. Specification of the Event's
                                        /// type as null or an empty string will also trigger this exception. 
	};

	EventException(int code);
		/// Creates an EventException with the given error code.

	EventException(const EventException& exc);
		/// Creates an EventException by copying another one.

	~EventException() throw();
		/// Destroys the EventException.

	EventException& operator = (const EventException& exc);

	const char* name() const throw();
		/// Returns a static string describing the exception.

	const char* className() const throw();
		/// Returns the name of the exception class.

	unsigned short code() const;
		/// Returns the Event exception code.

protected:
	Poco::Exception* clone() const;
	
private:
	EventException();
};


//
// inlines
//
inline unsigned short EventException::code() const
{
	return UNSPECIFIED_EVENT_TYPE_ERR;
}


} } // namespace Poco::XML


#endif // DOM_EventException_INCLUDED
