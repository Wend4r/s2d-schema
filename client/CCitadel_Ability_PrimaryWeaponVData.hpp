#pragma once

#include <cstdint>

struct DOFDesc_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1538
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_PrimaryWeaponVData : public CitadelAbilityVData
{
public:
	// MPropertyDescription "The DOF settings to apply while zoomed in."
	DOFDesc_t m_DOFWhileZoomed; // 0x14f0	
	// MPropertyDescription "When true, the 'Far Crisp' and 'Far Blurry' are added on top of the gun's range.  When false, use the values directly."
	bool m_bDOFFarSettingsAreOffsetByGunRange; // 0x1500	
private:
	[[maybe_unused]] uint8_t __pad1501[0x7]; // 0x1501
public:
	// MPropertyStartGroup "Sounds"
	// MPropertyFriendlyName "Fire while disarmed sound"
	CSoundEventName m_sDisarmedSound; // 0x1508	
	float m_flMinDisarmedSoundInterval; // 0x1518	
private:
	[[maybe_unused]] uint8_t __pad151c[0x4]; // 0x151c
public:
	CSoundEventName m_sObstructedShotSound; // 0x1520	
	// MPropertyStartGroup "Action Reload"
	// MPropertyAttributeRange "0 1"
	// MPropertyDescription "If we have action reloads, at what fraction of our reload progress does the timing window start.  The window is centered on this time."
	float m_flActionReloadTimingStart; // 0x1530	
	// MPropertyDescription "If we have action reloads, how long is the window"
	float m_flActionReloadTimingDuration; // 0x1534	
};

