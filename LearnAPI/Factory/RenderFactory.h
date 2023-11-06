#pragma once

#include "IRender.h"

class RenderFactory
{
public:
	IRender* CreateRenderer(const std::string& type);
};