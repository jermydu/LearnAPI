#pragma once
#include <string>
//�������

class IRender
{
public:
	virtual ~IRender() {}				//��������������������Ϊ�麯��
	virtual bool LoasScene(const std::string&  fileName) = 0;
	virtual void SetViewportSize(int w,int h) = 0;
	virtual void SetCameraPositon(double x, double y, double z) = 0;
	virtual void SetLookAt(double x, double y, double z) = 0;
	virtual void Render() = 0;
};
