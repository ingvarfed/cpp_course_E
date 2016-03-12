#ifndef Scene_h__
#define Scene_h__

#include "ApplicationKernelCommon.h"
#include "DocumentObject.h"

class APPKERNEL_DLL Scene
{
public:
	Scene();
	virtual ~Scene();
	virtual void draw(DocumentObject obj) = 0;
};

#endif // Scene_h__
