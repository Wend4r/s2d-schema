#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MGetKV3ClassDefaults
// MVDataRoot
// MVDataNodeType
// MVDataOverlayType
class CScaleFunctionVData : public CEntitySubclassVDataBase
{
public:
	EStatsType m_eSpecificStatScaleType; // 0x28	
	float m_flStatScale; // 0x2c	
	bool m_bFunctionDisabled; // 0x30	
};

