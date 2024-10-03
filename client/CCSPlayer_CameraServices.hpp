#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x248
// Has VTable
class CCSPlayer_CameraServices : public CCSPlayerBase_CameraServices
{
public:
	float m_flDeathCamTilt; // 0x228	
private:
	[[maybe_unused]] uint8_t __pad022c[0x4]; // 0x22c
public:
	Vector m_vClientScopeInaccuracy; // 0x230	
};

