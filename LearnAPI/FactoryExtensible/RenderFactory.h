#pragma once
#include <string>
#include <map>
#include "IRender.h"

class RenderFactory
{
public:
	//typedef IRender* (*CreateCallback)();
	using CreateCallback = IRender* (*)();
	static void RegisterRender(const std::string& type, CreateCallback cb);
	static void UnregisterRender(const std::string& type);
	static IRender* CreateRenderer(const std::string& type);

private:
	using CallbackMap = std::map<std::string, CreateCallback>;
	static CallbackMap m_Renders;
};
