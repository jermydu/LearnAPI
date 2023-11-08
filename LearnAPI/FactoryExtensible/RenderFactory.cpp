#include "RenderFactory.h"

RenderFactory::CallbackMap RenderFactory::m_Renders = {};

void RenderFactory::RegisterRender(const std::string& type, CreateCallback cb)
{
	m_Renders.emplace(std::make_pair(type,cb));
}

void RenderFactory::UnregisterRender(const std::string& type)
{
	m_Renders.erase(type);
}

IRender* RenderFactory::CreateRenderer(const std::string& type)
{
	auto itFind = m_Renders.find(type);
	if (itFind != m_Renders.end())
	{
		//���ûص��Թ����������Ķ���
		return (itFind->second)();
	}
	return nullptr;
}