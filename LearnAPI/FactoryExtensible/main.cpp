#include "UserFactory.h"
#include "RenderFactory.h"

int main(int argc, char* argv[])
{
	//ע��һ���µ���Ⱦ��
	RenderFactory::RegisterRender("user", UserRender::CreateUserRender);

	//����ʵ��
	IRender* r = RenderFactory::CreateRenderer("user");
	r->Render();
	delete r;
	r = nullptr;

	return 0;
}