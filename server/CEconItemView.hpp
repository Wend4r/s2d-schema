#pragma once

#include <cstdint>

struct CAttributeList;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x278
// Has VTable
// 
// MNetworkVarNames "item_definition_index_t m_iItemDefinitionIndex"
// MNetworkVarNames "int m_iEntityQuality"
// MNetworkVarNames "uint32 m_iEntityLevel"
// MNetworkVarNames "uint32 m_iItemIDHigh"
// MNetworkVarNames "uint32 m_iItemIDLow"
// MNetworkVarNames "uint32 m_iAccountID"
// MNetworkVarNames "uint32 m_iInventoryPosition"
// MNetworkVarNames "bool m_bInitialized"
// MNetworkVarNames "CAttributeList m_AttributeList"
// MNetworkVarNames "CAttributeList m_NetworkedDynamicAttributes"
// MNetworkVarNames "char m_szCustomName"
class CEconItemView : public IEconItemInterface
{
private:
	[[maybe_unused]] uint8_t __pad0008[0x30]; // 0x8
public:
	// MNetworkEnable
	uint16_t m_iItemDefinitionIndex; // 0x38	
private:
	[[maybe_unused]] uint8_t __pad003a[0x2]; // 0x3a
public:
	// MNetworkEnable
	int32_t m_iEntityQuality; // 0x3c	
	// MNetworkEnable
	uint32_t m_iEntityLevel; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0044[0x4]; // 0x44
public:
	uint64_t m_iItemID; // 0x48	
	// MNetworkEnable
	uint32_t m_iItemIDHigh; // 0x50	
	// MNetworkEnable
	uint32_t m_iItemIDLow; // 0x54	
	// MNetworkEnable
	uint32_t m_iAccountID; // 0x58	
	// MNetworkEnable
	uint32_t m_iInventoryPosition; // 0x5c	
private:
	[[maybe_unused]] uint8_t __pad0060[0x8]; // 0x60
public:
	// MNetworkEnable
	bool m_bInitialized; // 0x68	
private:
	[[maybe_unused]] uint8_t __pad0069[0x7]; // 0x69
public:
	// MNetworkEnable
	// -> m_Attributes - 0x78
	// -> m_pManager - 0xc8
	CAttributeList m_AttributeList; // 0x70	
	// MNetworkEnable
	// -> m_Attributes - 0xd8
	// -> m_pManager - 0x128
	CAttributeList m_NetworkedDynamicAttributes; // 0xd0	
	// MNetworkEnable
	char m_szCustomName[161]; // 0x130	
	char m_szCustomNameOverride[161]; // 0x1d1	
};

