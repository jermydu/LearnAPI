#pragma once
#include "IRender.h"

class MesaRendreer : public IRender
{
public:
	MesaRendreer() {}
	~MesaRendreer() {}

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