#ifndef SceneParticle_h__
#define SceneParticle_h__


#ifdef SCENEPARTICLE_EXPORTS
#define SCENEPARTICLE_DLL __declspec(dllexport)
#else
#define SCENEPARTICLE_DLL __declspec(dllimport)
#endif

#include "Scene.h"
class SceneParticle :
	public Scene
{
public:
	SceneParticle();
	~SceneParticle();
};

#endif // SceneParticle_h__
