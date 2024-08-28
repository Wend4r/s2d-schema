#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1550
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Item_DivinersKevlar_VData : public CitadelItemVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x1530	
	CEmbeddedSubclass< CCitadelModifier > m_PrecastSpiritBuffModifier; // 0x1540	
};

