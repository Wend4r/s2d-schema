#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe18
// Has VTable
// 
// MNetworkExcludeByName "m_iEffectIndex"
// MNetworkIncludeByName "m_iTeamNum"
// MNetworkVarNames "HParticleSystemDefinitionStrong m_iFriendlyEffectIndex"
// MNetworkVarNames "HParticleSystemDefinitionStrong m_iEnemyEffectIndex"
class C_TeamRelativeParticleSystem : public C_ParticleSystem
{
private:
	[[maybe_unused]] uint8_t __pad0de0[0x18]; // 0xde0
public:
	CUtlSymbolLarge m_iszFriendlyEffectName; // 0xdf8	
	CUtlSymbolLarge m_iszEnemyEffectName; // 0xe00	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iFriendlyEffectIndex; // 0xe08	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEnemyEffectIndex; // 0xe10	
};

