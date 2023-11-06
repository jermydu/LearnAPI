#pragma once
#include "IRender.h"

class DirectxRenderer : public IRender
{
public:
	DirectxRenderer() {}
	~DirectxRenderer() {}

	bool LoasScene(const std::string& fileName) override
	{
		return true;
	}
	void SetViewportSize(int w, int h) override
	{

	}
	void SetCameraPositon(double x, double y, double z) override
	{

	}
	void SetLookAt(double x, double y, double z) override
	{

	}
	void Render() override
	{

	}
};