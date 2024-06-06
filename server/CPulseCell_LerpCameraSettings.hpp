#pragma once

#include <cstdint>

struct PointCameraSettings_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa0
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
class CPulseCell_LerpCameraSettings : public CPulseCell_BaseLerp
{
public:
	float m_flSeconds; // 0x78	
	PointCameraSettings_t m_Start; // 0x7c	
	PointCameraSettings_t m_End; // 0x8c	
};

