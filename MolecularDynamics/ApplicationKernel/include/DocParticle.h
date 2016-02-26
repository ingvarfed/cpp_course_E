#ifndef DocParticle_h__
#define DocParticle_h__


#ifdef DOCPARTICLE_EXPORTS
#define DOCPARTICLE_DLL __declspec(dllexport)
#else
#define DOCPARTICLE_DLL __declspec(dllimport)
#endif

#include "DocumentObject.h"

class DocParticle : public DocumentObject
{
public:
	DocParticle();
	~DocParticle();
	void add(std::shared_ptr<DocumentObject> pDocObj);
	void remove(std::shared_ptr<DocumentObject> pDocObj);
private:
	std::list<std::shared_ptr<DocumentObject>> m_children;
};

#endif // DocParticle_h__

