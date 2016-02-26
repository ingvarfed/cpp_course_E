#include "stdafx.h"

#include "DocProjectObject.h"


DocProjectObject::DocProjectObject()
{
}


DocProjectObject::~DocProjectObject()
{
}

void DocProjectObject::add(std::shared_ptr<DocumentObject> pDocObj)
{
	m_children.push_back(pDocObj);
}

void DocProjectObject::remove(std::shared_ptr<DocumentObject> pDocObj)
{
	m_children.push_back(pDocObj);
}
