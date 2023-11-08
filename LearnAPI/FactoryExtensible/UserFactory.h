#pragma once
#include "IRender.h"

//新派生的类
class UserRender : public IRender
{
public:
	UserRender() {}
	~UserRender() {}

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

	//创建派生类对象的方法 用于注册到工厂类
	static IRender* CreateUserRender()
	{
		return new UserRender();
	}
};
