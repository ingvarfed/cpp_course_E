#ifndef SceneObject_h__
#define SceneObject_h__

#include <memory>
#include "DocumentObject.h"
#include "ApplicationKernelCommon.h"

class DocumentObject;

class APPKERNEL_DLL SceneObject
{
public:
	SceneObject();
	virtual ~SceneObject();
	virtual void draw(DocumentObject obj) = 0;
	std::weak_ptr<DocumentObject> pDocObj;
};

#endif // SceneObject_h__
