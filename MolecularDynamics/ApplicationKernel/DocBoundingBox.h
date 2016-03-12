#ifndef DocBoundingBox_h__
#define DocBoundingBox_h__


#include "DocumentObject.h"
#include "ApplicationKernelCommon.h"

class APPKERNEL_DLL DocBoundingBox : public DocumentObject
{
public:
	DocBoundingBox();
	~DocBoundingBox();
	void add(std::shared_ptr<DocumentObject> pDocObj);
	void remove(std::shared_ptr<DocumentObject> pDocObj);
private:
	std::list<std::shared_ptr<DocumentObject>> m_children;
	std::shared_ptr<SceneObject> pSceObj;
};

#endif // DocBoundingBox_h__

