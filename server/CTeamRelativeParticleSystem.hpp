#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xce0
// Has VTable
// 
// MNetworkExcludeByName "m_iEffectIndex"
// MNetworkIncludeByName "m_iTeamNum"
// MNetworkVarNames "HParticleSystemDefinitionStrong m_iFriendlyEffectIndex"
// MNetworkVarNames "HParticleSystemDefinitionStrong m_iEnemyEffectIndex"
class CTeamRelativeParticleSystem : public CParticleSystem
{
public:
	CUtlSymbolLarge m_iszFriendlyEffectName; // 0xcc0	
	CUtlSymbolLarge m_iszEnemyEffectName; // 0xcc8	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iFriendlyEffectIndex; // 0xcd0	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEnemyEffectIndex; // 0xcd8	
};

