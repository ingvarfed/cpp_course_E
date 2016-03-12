#ifndef DocProjectObject_h__
#define DocProjectObject_h__

#include "DocumentObject.h"
#include "ApplicationKernelCommon.h"

class APPKERNEL_DLL DocProjectObject : public DocumentObject
{
public:
	DocProjectObject();
	~DocProjectObject();
	void add(std::shared_ptr<DocumentObject> pDocObj);
	void remove(std::shared_ptr<DocumentObject> pDocObj);
private:
	std::list<std::shared_ptr<DocumentObject>> m_children;
	std::shared_ptr<SceneObject> pSceObj;
};

#endif // DocProjectObject_h__

