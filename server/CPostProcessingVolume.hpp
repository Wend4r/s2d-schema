#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x970
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
// MNetworkVarNames "float m_flRate"
// MNetworkVarNames "float m_flTonemapPercentTarget"
// MNetworkVarNames "float m_flTonemapPercentBrightPixels"
// MNetworkVarNames "float m_flTonemapMinAvgLum"
class CPostProcessingVolume : public CBaseTrigger
{
private:
	[[maybe_unused]] uint8_t __pad0920[0x10]; // 0x920
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostSettings; // 0x930	
	// MNetworkEnable
	float m_flFadeDuration; // 0x938	
	// MNetworkEnable
	float m_flMinLogExposure; // 0x93c	
	// MNetworkEnable
	float m_flMaxLogExposure; // 0x940	
	// MNetworkEnable
	float m_flMinExposure; // 0x944	
	// MNetworkEnable
	float m_flMaxExposure; // 0x948	
	// MNetworkEnable
	float m_flExposureCompensation; // 0x94c	
	// MNetworkEnable
	float m_flExposureFadeSpeedUp; // 0x950	
	// MNetworkEnable
	float m_flExposureFadeSpeedDown; // 0x954	
	// MNetworkEnable
	float m_flTonemapEVSmoothingRange; // 0x958	
	// MNetworkEnable
	bool m_bMaster; // 0x95c	
	// MNetworkEnable
	bool m_bExposureControl; // 0x95d	
private:
	[[maybe_unused]] uint8_t __pad095e[0x2]; // 0x95e
public:
	// MNetworkEnable
	float m_flRate; // 0x960	
	// MNetworkEnable
	float m_flTonemapPercentTarget; // 0x964	
	// MNetworkEnable
	float m_flTonemapPercentBrightPixels; // 0x968	
	// MNetworkEnable
	float m_flTonemapMinAvgLum; // 0x96c	
};

