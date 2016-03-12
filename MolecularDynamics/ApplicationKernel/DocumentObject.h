#ifndef DocumentObject_h__
#define DocumentObject_h__

#include <memory>
#include <list>
#include "SceneObject.h"
#include "ApplicationKernelCommon.h"

class APPKERNEL_DLL DocumentObject
{
public:
	DocumentObject();
	virtual ~DocumentObject();
	virtual void add(std::shared_ptr<DocumentObject> pDocObj) = 0;
	virtual void remove(std::shared_ptr<DocumentObject> pDocObj) = 0;
	virtual void getChild(int) = 0;
};

#endif // DocumentObject_h__

