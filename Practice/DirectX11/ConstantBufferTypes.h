#pragma once

#include <DirectXMath.h>

//16byte以内に収める必要がある
struct CB_VS_vertexShader
{
	DirectX::XMMATRIX mat;
};

struct CB_PS_pixelShader
{
	float alpha = 1.0f;
};