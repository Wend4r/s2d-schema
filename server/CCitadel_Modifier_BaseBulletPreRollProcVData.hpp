#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x700
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertySuppressBaseClassField
class CCitadel_Modifier_BaseBulletPreRollProcVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyDescription "When true, we roll for a proc once per shot and apply that result to all bullets in the shot.  When false, we roll independently for each bullet in the shot."
	bool m_bRollOnceForAllBulletsInAShot; // 0x610	
private:
	[[maybe_unused]] uint8_t __pad0611[0x3]; // 0x611
public:
	// MPropertyDescription "When not rolling once for all shots, what's the max number of times we can proc in a single shot? 0 means no limit."
	float m_flMaxBulletsToProcInShot; // 0x614	
	// MPropertyDescription "When true, each bullet can apply its proc to any entities hit.  When false, we only apply the first proc to the first entity."
	bool m_bCanProcMultipleTimesFromSameShot; // 0x618	
	// MPropertyDescription "When true, will only call OnProc if the target hit passes the unit filter."
	bool m_bRequiresTargetFilter; // 0x619	
private:
	[[maybe_unused]] uint8_t __pad061a[0x6]; // 0x61a
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerAdditionParticle; // 0x620	
};

