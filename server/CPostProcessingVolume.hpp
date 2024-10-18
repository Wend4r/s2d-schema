#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9b0
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
	[[maybe_unused]] uint8_t __pad0960[0x10]; // 0x960
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostSettings; // 0x970	
	// MNetworkEnable
	float m_flFadeDuration; // 0x978	
	// MNetworkEnable
	float m_flMinLogExposure; // 0x97c	
	// MNetworkEnable
	float m_flMaxLogExposure; // 0x980	
	// MNetworkEnable
	float m_flMinExposure; // 0x984	
	// MNetworkEnable
	float m_flMaxExposure; // 0x988	
	// MNetworkEnable
	float m_flExposureCompensation; // 0x98c	
	// MNetworkEnable
	float m_flExposureFadeSpeedUp; // 0x990	
	// MNetworkEnable
	float m_flExposureFadeSpeedDown; // 0x994	
	// MNetworkEnable
	float m_flTonemapEVSmoothingRange; // 0x998	
	// MNetworkEnable
	bool m_bMaster; // 0x99c	
	// MNetworkEnable
	bool m_bExposureControl; // 0x99d	
private:
	[[maybe_unused]] uint8_t __pad099e[0x2]; // 0x99e
public:
	// MNetworkEnable
	float m_flRate; // 0x9a0	
	// MNetworkEnable
	float m_flTonemapPercentTarget; // 0x9a4	
	// MNetworkEnable
	float m_flTonemapPercentBrightPixels; // 0x9a8	
	// MNetworkEnable
	float m_flTonemapMinAvgLum; // 0x9ac	
};

