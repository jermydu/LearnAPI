#include "UserFactory.h"
#include "RenderFactory.h"

int main(int argc, char* argv[])
{
	//注册一个新的渲染器
	RenderFactory::RegisterRender("user", UserRender::CreateUserRender);

	//创建实例
	IRender* r = RenderFactory::CreateRenderer("user");
	r->Render();
	delete r;
	r = nullptr;

	return 0;
}