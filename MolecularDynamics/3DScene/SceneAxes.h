#ifndef SceneAxes_h__
#define SceneAxes_h__


#ifdef SCENEAXES_EXPORTS
#define SCENEAXES_DLL __declspec(dllexport)
#else
#define SCENEAXES_DLL __declspec(dllimport)
#endif

#include "Scene.h"
class SceneAxes :
	public Scene
{
public:
	SceneAxes();
	~SceneAxes();
};

#endif // SceneAxes_h__
