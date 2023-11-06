#include "RenderFactory02.h"

RenderFactory02::CallbackMap RenderFactory02::m_Renders = {};

void RenderFactory02::RegisterRender(const std::string& type, CreateCallback cb)
{
	m_Renders.emplace(std::make_pair(type,cb));
}

void RenderFactory02::UnregisterRender(const std::string& type)
{
	m_Renders.erase(type);
}

IRender* RenderFactory02::CreateRenderer(const std::string& type)
{
	auto itFind = m_Renders.find(type);
	if (itFind != m_Renders.end())
	{
		//调用回调以构造此派生类的对象
		return (itFind->second)();
	}
	return nullptr;
}