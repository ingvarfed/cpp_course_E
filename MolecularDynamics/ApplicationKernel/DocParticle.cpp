#include "stdafx.h"

#include "DocParticle.h"


DocParticle::DocParticle()
{
}


DocParticle::~DocParticle()
{
}

void DocParticle::add(std::shared_ptr<DocumentObject> pDocObj)
{
	m_children.push_back(pDocObj);
}

void DocParticle::remove(std::shared_ptr<DocumentObject> pDocObj)
{
	m_children.remove(pDocObj);
}

