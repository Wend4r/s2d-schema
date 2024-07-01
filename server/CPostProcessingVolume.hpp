#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x958
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
class CPostProcessingVolume : public CBaseTrigger
{
private:
	[[maybe_unused]] uint8_t __pad0918[0x10]; // 0x918
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostSettings; // 0x928	
	// MNetworkEnable
	float m_flFadeDuration; // 0x930	
	// MNetworkEnable
	float m_flMinLogExposure; // 0x934	
	// MNetworkEnable
	float m_flMaxLogExposure; // 0x938	
	// MNetworkEnable
	float m_flMinExposure; // 0x93c	
	// MNetworkEnable
	float m_flMaxExposure; // 0x940	
	// MNetworkEnable
	float m_flExposureCompensation; // 0x944	
	// MNetworkEnable
	float m_flExposureFadeSpeedUp; // 0x948	
	// MNetworkEnable
	float m_flExposureFadeSpeedDown; // 0x94c	
	// MNetworkEnable
	float m_flTonemapEVSmoothingRange; // 0x950	
	// MNetworkEnable
	bool m_bMaster; // 0x954	
	// MNetworkEnable
	bool m_bExposureControl; // 0x955	
};

