#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd00
// Has VTable
// 
// MNetworkExcludeByName "m_iEffectIndex"
// MNetworkIncludeByName "m_iTeamNum"
// MNetworkVarNames "HParticleSystemDefinitionStrong m_iFriendlyEffectIndex"
// MNetworkVarNames "HParticleSystemDefinitionStrong m_iEnemyEffectIndex"
class CTeamRelativeParticleSystem : public CParticleSystem
{
public:
	CUtlSymbolLarge m_iszFriendlyEffectName; // 0xce0	
	CUtlSymbolLarge m_iszEnemyEffectName; // 0xce8	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iFriendlyEffectIndex; // 0xcf0	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEnemyEffectIndex; // 0xcf8	
};

