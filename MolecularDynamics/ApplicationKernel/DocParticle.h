#ifndef DocParticle_h__
#define DocParticle_h__

#include "DocumentObject.h"
#include "ApplicationKernelCommon.h"

class APPKERNEL_DLL DocParticle : public DocumentObject
{
public:
	DocParticle();
	~DocParticle();
	void add(std::shared_ptr<DocumentObject> pDocObj);
	void remove(std::shared_ptr<DocumentObject> pDocObj);
private:
	std::list<std::shared_ptr<DocumentObject>> m_children;
	std::shared_ptr<SceneObject> pSceObj;
};

#endif // DocParticle_h__

