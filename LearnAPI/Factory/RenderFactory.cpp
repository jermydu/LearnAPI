
#include "RenderFactory.h"
#include "OpenglRendreer.h"
#include "DirectxRenderer.h"
#include "MesaRendreer.h"

IRender* RenderFactory::CreateRenderer(const std::string& type)
{
	if (type == "opengl")
		return new OpenGlRenderer();
	if (type == "directx")
		return new DirectxRenderer();
	if (type == "mesa")
		return new MesaRendreer();
}