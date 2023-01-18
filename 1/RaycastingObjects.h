#pragma once
#include "Primitives.h"
#include "Materials.h"

struct SphereObject
{
	Sphere s;
	glm::vec3 color;
	Material m;
	SphereObject(glm::vec3 inputSphereCenter, glm::vec3 inputColor, float inputRadiusFloat, Material mat)
	{
		s = Sphere(inputSphereCenter, inputRadiusFloat);
		color = inputColor;
		m = mat;
	}
};
struct CameraObject
{
	glm::vec3 position;
	glm::vec3 target;
	glm::vec3 up;
	float focal_length;
	void SetCPosition(glm::vec3 & pos)
	{
		position = pos;
	}
	void SetTPosition(glm::vec3& t)
	{
		target = t;
	}
	void SetUpVector(glm::vec3& u)
	{
		up = u;
	}
	void SetFocalLength(float& f)
	{
		focal_length = f;
	}
};
glm::vec3 ThrowRay()
{

}
bool Ray_VS_Sphere(Ray & r, Sphere & s)
{

	return false;
}