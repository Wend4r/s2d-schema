#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x958
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertySuppressBaseClassField
class CCitadel_Modifier_Mirage_SandPhantom_Proc_VData : public CCitadelModifierVData
{
public:
	// MPropertyDescription "When true, we roll for a proc once per shot and apply that result to all bullets in the shot.  When false, we roll independently for each bullet in the shot."
	bool m_bRollOnceForAllBulletsInAShot; // 0x658	
private:
	[[maybe_unused]] uint8_t __pad0659[0x3]; // 0x659
public:
	// MPropertyDescription "When not rolling once for all shots, what's the max number of times we can proc in a single shot? 0 means no limit."
	float m_flMaxBulletsToProcInShot; // 0x65c	
	// MPropertyDescription "When true, each bullet can apply its proc to any entities hit.  When false, we only apply the first proc to the first entity."
	bool m_bCanProcMultipleTimesFromSameShot; // 0x660	
	// MPropertyDescription "When true, will only call OnProc if the target hit passes the unit filter."
	bool m_bRequiresTargetFilter; // 0x661	
private:
	[[maybe_unused]] uint8_t __pad0662[0x6]; // 0x662
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ProcReadyModifier; // 0x668	
	CEmbeddedSubclass< CCitadelModifier > m_PassiveVictimModifier; // 0x678	
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ProcReadyParticle; // 0x688	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerAdditionParticle; // 0x768	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x848	
	// MPropertyStartGroup "Sounds"
	// MPropertyDescription "Sound to play on the shooter when a bullet rolls a proc when fired."
	CSoundEventName m_OnBulletRolledProcSound; // 0x928	
	CSoundEventName m_ProcSound; // 0x938	
	CSoundEventName m_ExplodeSound; // 0x948	
};

