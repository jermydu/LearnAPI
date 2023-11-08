#include "RenderFactory.h"

int main(int argc, char* argv[])
{
	//注册一个新的渲染器
	RenderFactory* f = new RenderFactory;

	//创建实例
	IRender* rOpengl = f->CreateRenderer("opengl");
	rOpengl->Render();
	delete rOpengl;
	rOpengl = nullptr;

	IRender* rDirectx = f->CreateRenderer("directx");
	rDirectx->Render();
	delete rDirectx;
	rDirectx = nullptr;

	IRender* rmesa = f->CreateRenderer("mesa");
	rmesa->Render();
	delete rmesa;
	rmesa = nullptr;

	delete f;
	f = nullptr;
	return 0;
}