#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdf0
// Has VTable
// 
// MNetworkExcludeByName "m_iEffectIndex"
// MNetworkIncludeByName "m_iTeamNum"
// MNetworkVarNames "HParticleSystemDefinitionStrong m_iFriendlyEffectIndex"
// MNetworkVarNames "HParticleSystemDefinitionStrong m_iEnemyEffectIndex"
class C_TeamRelativeParticleSystem : public C_ParticleSystem
{
private:
	[[maybe_unused]] uint8_t __pad0db8[0x18]; // 0xdb8
public:
	CUtlSymbolLarge m_iszFriendlyEffectName; // 0xdd0	
	CUtlSymbolLarge m_iszEnemyEffectName; // 0xdd8	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iFriendlyEffectIndex; // 0xde0	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEnemyEffectIndex; // 0xde8	
};

