#include "stdafx.h"

#include "DocBoundingBox.h"


DocBoundingBox::DocBoundingBox()
{
}


DocBoundingBox::~DocBoundingBox()
{
}

void DocBoundingBox::add(std::shared_ptr<DocumentObject> pDocObj)
{
	m_children.push_back(pDocObj);
}

void DocBoundingBox::remove(std::shared_ptr<DocumentObject> pDocObj)
{
	m_children.remove(pDocObj);
}
