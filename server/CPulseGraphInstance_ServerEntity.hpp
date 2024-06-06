#pragma once

#include <cstdint>

struct CPulseGraphComponentBase;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x150
// Has VTable
// 
// MPulseInstanceDomainInfo
// MPulseDomainHookInfo
// MPulseLibraryBindings
// MPulseDomainOptInFeatureTag
// MPulseDomainOptInGameBlackboard
// MPulseDomainOptInValueType
class CPulseGraphInstance_ServerEntity : public CBasePulseGraphInstance
{
private:
	[[maybe_unused]] uint8_t __pad00f8[0x8]; // 0xf8
public:
	CPulseGraphComponentBase* m_pComponent; // 0x100	
};

