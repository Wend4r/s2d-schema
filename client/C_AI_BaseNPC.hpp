#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc98
// Has VTable
// 
// MNetworkIncludeByName "m_lifeState"
// MNetworkIncludeByName "m_spawnflags"
// MNetworkVarNames "NPC_STATE m_NPCState"
// MNetworkVarNames "bool m_bFadeCorpse"
// MNetworkVarNames "bool m_bImportantRagdoll"
class C_AI_BaseNPC : public C_BaseCombatCharacter
{
public:
	// MNetworkEnable
	NPC_STATE m_NPCState; // 0xc90	
	// MNetworkEnable
	bool m_bFadeCorpse; // 0xc94	
	// MNetworkEnable
	bool m_bImportantRagdoll; // 0xc95	
};

