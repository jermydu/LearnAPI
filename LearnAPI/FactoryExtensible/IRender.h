#pragma once
#include <string>
//抽象基类

class IRender
{
public:
	virtual ~IRender() {}				//抽象基类的析构函数必须为虚函数
	virtual bool LoasScene(const std::string&  fileName) = 0;
	virtual void SetViewportSize(int w,int h) = 0;
	virtual void SetCameraPositon(double x, double y, double z) = 0;
	virtual void SetLookAt(double x, double y, double z) = 0;
	virtual void Render() = 0;
};
