#pragma once

#include <cstdint>

struct DOFDesc_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1530
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_PrimaryWeaponVData : public CitadelAbilityVData
{
private:
	[[maybe_unused]] uint8_t __pad14e0[0x8]; // 0x14e0
public:
	// MPropertyDescription "The DOF settings to apply while zoomed in."
	DOFDesc_t m_DOFWhileZoomed; // 0x14e8	
	// MPropertyDescription "When true, the 'Far Crisp' and 'Far Blurry' are added on top of the gun's range.  When false, use the values directly."
	bool m_bDOFFarSettingsAreOffsetByGunRange; // 0x14f8	
private:
	[[maybe_unused]] uint8_t __pad14f9[0x7]; // 0x14f9
public:
	// MPropertyStartGroup "Sounds"
	// MPropertyFriendlyName "Fire while disarmed sound"
	CSoundEventName m_sDisarmedSound; // 0x1500	
	float m_flMinDisarmedSoundInterval; // 0x1510	
private:
	[[maybe_unused]] uint8_t __pad1514[0x4]; // 0x1514
public:
	CSoundEventName m_sObstructedShotSound; // 0x1518	
	// MPropertyStartGroup "Action Reload"
	// MPropertyAttributeRange "0 1"
	// MPropertyDescription "If we have action reloads, at what fraction of our reload progress does the timing window start.  The window is centered on this time."
	float m_flActionReloadTimingStart; // 0x1528	
	// MPropertyDescription "If we have action reloads, how long is the window"
	float m_flActionReloadTimingDuration; // 0x152c	
};

