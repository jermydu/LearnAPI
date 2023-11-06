#include "IRender.h"
#include "RenderFactory02.h"

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

int main(int argc, char* argv[])
{
	//ע��һ���µ���Ⱦ��
	RenderFactory02::RegisterRender("user", UserRender::CreateUserRender);

	//����ʵ��
	IRender* r = RenderFactory02::CreateRenderer("user");
	r->Render();
	delete r;
	r = nullptr;

	return 0;
}