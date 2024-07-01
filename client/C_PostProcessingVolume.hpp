#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x858
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "HPostProcessingStrong m_hPostSettings"
// MNetworkVarNames "float m_flFadeDuration"
// MNetworkVarNames "float m_flMinLogExposure"
// MNetworkVarNames "float m_flMaxLogExposure"
// MNetworkVarNames "float m_flMinExposure"
// MNetworkVarNames "float m_flMaxExposure"
// MNetworkVarNames "float m_flExposureCompensation"
// MNetworkVarNames "float m_flExposureFadeSpeedUp"
// MNetworkVarNames "float m_flExposureFadeSpeedDown"
// MNetworkVarNames "float m_flTonemapEVSmoothingRange"
// MNetworkVarNames "bool m_bMaster"
// MNetworkVarNames "bool m_bExposureControl"
class C_PostProcessingVolume : public C_BaseTrigger
{
private:
	[[maybe_unused]] uint8_t __pad0818[0x10]; // 0x818
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostSettings; // 0x828	
	// MNetworkEnable
	float m_flFadeDuration; // 0x830	
	// MNetworkEnable
	float m_flMinLogExposure; // 0x834	
	// MNetworkEnable
	float m_flMaxLogExposure; // 0x838	
	// MNetworkEnable
	float m_flMinExposure; // 0x83c	
	// MNetworkEnable
	float m_flMaxExposure; // 0x840	
	// MNetworkEnable
	float m_flExposureCompensation; // 0x844	
	// MNetworkEnable
	float m_flExposureFadeSpeedUp; // 0x848	
	// MNetworkEnable
	float m_flExposureFadeSpeedDown; // 0x84c	
	// MNetworkEnable
	float m_flTonemapEVSmoothingRange; // 0x850	
	// MNetworkEnable
	bool m_bMaster; // 0x854	
	// MNetworkEnable
	bool m_bExposureControl; // 0x855	
};

