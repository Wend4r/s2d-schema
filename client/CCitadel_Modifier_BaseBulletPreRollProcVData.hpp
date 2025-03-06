#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x788
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertySuppressBaseClassField
class CCitadel_Modifier_BaseBulletPreRollProcVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyDescription "When true, we roll for a proc once per shot and apply that result to all bullets in the shot.  When false, we roll independently for each bullet in the shot."
	bool m_bRollOnceForAllBulletsInAShot; // 0x688	
private:
	[[maybe_unused]] uint8_t __pad0689[0x3]; // 0x689
public:
	// MPropertyDescription "When not rolling once for all shots, what's the max number of times we can proc in a single shot? 0 means no limit."
	float m_flMaxBulletsToProcInShot; // 0x68c	
	// MPropertyDescription "When true, each bullet can apply its proc to any entities hit.  When false, we only apply the first proc to the first entity."
	bool m_bCanProcMultipleTimesFromSameShot; // 0x690	
	// MPropertyDescription "When true, will only call OnProc if the target hit passes the unit filter."
	bool m_bRequiresTargetFilter; // 0x691	
	// MPropertyDescription "When false, Proc'd bullets cannot be evaded"
	bool m_bCanBeEvaded; // 0x692	
private:
	[[maybe_unused]] uint8_t __pad0693[0x5]; // 0x693
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerAdditionParticle; // 0x698	
	// MPropertyStartGroup "Sounds"
	// MPropertyDescription "Sound to play on the shooter when a bullet rolls a proc when fired."
	CSoundEventName m_OnBulletRolledProcSound; // 0x778	
};

