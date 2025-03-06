#pragma once

#include <cstdint>

struct DOFDesc_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1620
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_PrimaryWeaponVData : public CitadelAbilityVData
{
private:
	[[maybe_unused]] uint8_t __pad15c8[0x8]; // 0x15c8
public:
	// MPropertyDescription "The DOF settings to apply while zoomed in."
	DOFDesc_t m_DOFWhileZoomed; // 0x15d0	
	// MPropertyDescription "When true, the 'Far Crisp' and 'Far Blurry' are added on top of the gun's range.  When false, use the values directly."
	bool m_bDOFFarSettingsAreOffsetByGunRange; // 0x15e0	
private:
	[[maybe_unused]] uint8_t __pad15e1[0x7]; // 0x15e1
public:
	// MPropertyStartGroup "Sounds"
	// MPropertyFriendlyName "Fire while disarmed sound"
	CSoundEventName m_sDisarmedSound; // 0x15e8	
	float m_flMinDisarmedSoundInterval; // 0x15f8	
private:
	[[maybe_unused]] uint8_t __pad15fc[0x4]; // 0x15fc
public:
	CSoundEventName m_sObstructedShotSound; // 0x1600	
	// MPropertyStartGroup "Action Reload"
	// MPropertyAttributeRange "0 1"
	// MPropertyDescription "If we have action reloads, at what fraction of our reload progress does the timing window start.  The window is centered on this time."
	float m_flActionReloadTimingStart; // 0x1610	
	// MPropertyDescription "If we have action reloads, how long is the window"
	float m_flActionReloadTimingDuration; // 0x1614	
	// MPropertyStartGroup "UI"
	CUtlString m_strCrosshairCSSClass; // 0x1618	
};

