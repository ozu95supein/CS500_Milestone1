#pragma once
#include <vector>
#include "RaycastingObjects.h"

struct SceneStruct
{
	std::vector<SphereObject> mSphereObjs;
	CameraObject c;
};