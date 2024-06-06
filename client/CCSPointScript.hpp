#pragma once

#include <cstdint>

struct CCSPointScriptEntity;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x100
// Has VTable
// 
// MPulseInstanceDomainInfo
// MPulseDomainHookInfo
// MPulseLibraryBindings
// MPulseDomainOptInFeatureTag
class CCSPointScript : public CBasePulseGraphInstance
{
public:
	CCSPointScriptEntity* m_pParent; // 0xf8	
};

