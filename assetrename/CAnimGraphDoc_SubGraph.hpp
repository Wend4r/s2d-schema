#pragma once

#include <cstdint>

struct CAnimGraphDoc_NodeManager;
struct CAnimGraphDoc_ComponentManager;
// Registered binary: assetrename.dll (project 'animgraphdoclib')
// Alignment: 8
// Size: 0xe0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAnimGraphDoc_SubGraph
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CAnimGraphDoc_NodeManager m_nodeManager; // 0x8	
	CAnimGraphDoc_ComponentManager m_componentManager; // 0x50	
	CUtlVector< CSmartPtr< CAnimParameterBase > > m_localParameters; // 0x78	
	CUtlVector< CSmartPtr< CAnimTagBase > > m_localTags; // 0x90	
	CUtlVector< CUtlString > m_referencedParamGroups; // 0xa8	
	CUtlVector< CUtlString > m_referencedTagGroups; // 0xc0	
};

