#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd20
// Has VTable
// 
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
	[[maybe_unused]] uint8_t __pad0cd0[0x10]; // 0xcd0
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostSettings; // 0xce0	
	// MNetworkEnable
	float m_flFadeDuration; // 0xce8	
	// MNetworkEnable
	float m_flMinLogExposure; // 0xcec	
	// MNetworkEnable
	float m_flMaxLogExposure; // 0xcf0	
	// MNetworkEnable
	float m_flMinExposure; // 0xcf4	
	// MNetworkEnable
	float m_flMaxExposure; // 0xcf8	
	// MNetworkEnable
	float m_flExposureCompensation; // 0xcfc	
	// MNetworkEnable
	float m_flExposureFadeSpeedUp; // 0xd00	
	// MNetworkEnable
	float m_flExposureFadeSpeedDown; // 0xd04	
	// MNetworkEnable
	float m_flTonemapEVSmoothingRange; // 0xd08	
	// MNetworkEnable
	bool m_bMaster; // 0xd0c	
	// MNetworkEnable
	bool m_bExposureControl; // 0xd0d	
private:
	[[maybe_unused]] uint8_t __pad0d0e[0x2]; // 0xd0e
public:
	// MNetworkEnable
	float m_flRate; // 0xd10	
	// MNetworkEnable
	float m_flTonemapPercentTarget; // 0xd14	
	// MNetworkEnable
	float m_flTonemapPercentBrightPixels; // 0xd18	
	// MNetworkEnable
	float m_flTonemapMinAvgLum; // 0xd1c	
};

