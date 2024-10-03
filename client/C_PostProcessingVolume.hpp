#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd78
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
class C_PostProcessingVolume : public C_BaseTrigger
{
private:
	[[maybe_unused]] uint8_t __pad0d28[0x10]; // 0xd28
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostSettings; // 0xd38	
	// MNetworkEnable
	float m_flFadeDuration; // 0xd40	
	// MNetworkEnable
	float m_flMinLogExposure; // 0xd44	
	// MNetworkEnable
	float m_flMaxLogExposure; // 0xd48	
	// MNetworkEnable
	float m_flMinExposure; // 0xd4c	
	// MNetworkEnable
	float m_flMaxExposure; // 0xd50	
	// MNetworkEnable
	float m_flExposureCompensation; // 0xd54	
	// MNetworkEnable
	float m_flExposureFadeSpeedUp; // 0xd58	
	// MNetworkEnable
	float m_flExposureFadeSpeedDown; // 0xd5c	
	// MNetworkEnable
	float m_flTonemapEVSmoothingRange; // 0xd60	
	// MNetworkEnable
	bool m_bMaster; // 0xd64	
	// MNetworkEnable
	bool m_bExposureControl; // 0xd65	
private:
	[[maybe_unused]] uint8_t __pad0d66[0x2]; // 0xd66
public:
	// MNetworkEnable
	float m_flRate; // 0xd68	
	// MNetworkEnable
	float m_flTonemapPercentTarget; // 0xd6c	
	// MNetworkEnable
	float m_flTonemapPercentBrightPixels; // 0xd70	
	// MNetworkEnable
	float m_flTonemapMinAvgLum; // 0xd74	
};

