#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MNetworkVarNames "attrib_definition_index_t m_iAttributeDefinitionIndex"
// MNetworkVarNames "float m_flValue"
// MNetworkVarNames "float m_flInitialValue"
// MNetworkVarNames "int m_nRefundableCurrency"
// MNetworkVarNames "bool m_bSetBonus"
class CEconItemAttribute
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x30]; // 0x0
public:
	// MNetworkEnable
	uint16_t m_iAttributeDefinitionIndex; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0032[0x2]; // 0x32
public:
	// MNetworkEnable
	// MNetworkAlias "m_iRawValue32"
	float m_flValue; // 0x34	
	// MNetworkEnable
	float m_flInitialValue; // 0x38	
	// MNetworkEnable
	int32_t m_nRefundableCurrency; // 0x3c	
	// MNetworkEnable
	bool m_bSetBonus; // 0x40	
};

