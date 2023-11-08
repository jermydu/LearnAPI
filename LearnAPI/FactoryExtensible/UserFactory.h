#pragma once
#include "IRender.h"

//����������
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

	//�������������ķ��� ����ע�ᵽ������
	static IRender* CreateUserRender()
	{
		return new UserRender();
	}
};
