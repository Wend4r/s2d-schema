#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdf8
// Has VTable
// 
// MNetworkExcludeByName "m_iEffectIndex"
// MNetworkIncludeByName "m_iTeamNum"
// MNetworkVarNames "HParticleSystemDefinitionStrong m_iFriendlyEffectIndex"
// MNetworkVarNames "HParticleSystemDefinitionStrong m_iEnemyEffectIndex"
class C_TeamRelativeParticleSystem : public C_ParticleSystem
{
private:
	[[maybe_unused]] uint8_t __pad0dc0[0x18]; // 0xdc0
public:
	CUtlSymbolLarge m_iszFriendlyEffectName; // 0xdd8	
	CUtlSymbolLarge m_iszEnemyEffectName; // 0xde0	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iFriendlyEffectIndex; // 0xde8	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEnemyEffectIndex; // 0xdf0	
};

