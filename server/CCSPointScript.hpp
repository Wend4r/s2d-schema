#pragma once

#include <cstdint>

struct CCSPointScriptEntity;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x100
// Has VTable
// 
// MPulseInstanceDomainInfo
// MPulseDomainHookInfo
// MPulseLibraryBindings
// MSourceTSDomain
// MPulseDomainHiddenInTool
// MPulseDomainOptInFeatureTag
class CCSPointScript : public CBasePulseGraphInstance
{
public:
	CCSPointScriptEntity* m_pParent; // 0xf8	
};

