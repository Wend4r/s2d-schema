#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x930
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
class CPostProcessingVolume : public CBaseTrigger
{
private:
	[[maybe_unused]] uint8_t __pad08e0[0x10]; // 0x8e0
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostSettings; // 0x8f0	
	// MNetworkEnable
	float m_flFadeDuration; // 0x8f8	
	// MNetworkEnable
	float m_flMinLogExposure; // 0x8fc	
	// MNetworkEnable
	float m_flMaxLogExposure; // 0x900	
	// MNetworkEnable
	float m_flMinExposure; // 0x904	
	// MNetworkEnable
	float m_flMaxExposure; // 0x908	
	// MNetworkEnable
	float m_flExposureCompensation; // 0x90c	
	// MNetworkEnable
	float m_flExposureFadeSpeedUp; // 0x910	
	// MNetworkEnable
	float m_flExposureFadeSpeedDown; // 0x914	
	// MNetworkEnable
	float m_flTonemapEVSmoothingRange; // 0x918	
	// MNetworkEnable
	bool m_bMaster; // 0x91c	
	// MNetworkEnable
	bool m_bExposureControl; // 0x91d	
private:
	[[maybe_unused]] uint8_t __pad091e[0x2]; // 0x91e
public:
	// MNetworkEnable
	float m_flRate; // 0x920	
	// MNetworkEnable
	float m_flTonemapPercentTarget; // 0x924	
	// MNetworkEnable
	float m_flTonemapPercentBrightPixels; // 0x928	
	// MNetworkEnable
	float m_flTonemapMinAvgLum; // 0x92c	
};

