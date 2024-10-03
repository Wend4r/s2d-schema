#pragma once

#include <cstdint>

struct CAttributeList;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x448
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
class C_EconItemView : public IEconItemInterface
{
private:
	[[maybe_unused]] uint8_t __pad0008[0x58]; // 0x8
public:
	bool m_bInventoryImageRgbaRequested; // 0x60	
	bool m_bInventoryImageTriedCache; // 0x61	
private:
	[[maybe_unused]] uint8_t __pad0062[0x1e]; // 0x62
public:
	int32_t m_nInventoryImageRgbaWidth; // 0x80	
	int32_t m_nInventoryImageRgbaHeight; // 0x84	
	char m_szCurrentLoadCachedFileName[260]; // 0x88	
private:
	[[maybe_unused]] uint8_t __pad018c[0x2c]; // 0x18c
public:
	bool m_bRestoreCustomMaterialAfterPrecache; // 0x1b8	
private:
	[[maybe_unused]] uint8_t __pad01b9[0x1]; // 0x1b9
public:
	// MNetworkEnable
	uint16_t m_iItemDefinitionIndex; // 0x1ba	
	// MNetworkEnable
	int32_t m_iEntityQuality; // 0x1bc	
	// MNetworkEnable
	uint32_t m_iEntityLevel; // 0x1c0	
private:
	[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
public:
	uint64_t m_iItemID; // 0x1c8	
	// MNetworkEnable
	uint32_t m_iItemIDHigh; // 0x1d0	
	// MNetworkEnable
	uint32_t m_iItemIDLow; // 0x1d4	
	// MNetworkEnable
	uint32_t m_iAccountID; // 0x1d8	
	// MNetworkEnable
	uint32_t m_iInventoryPosition; // 0x1dc	
private:
	[[maybe_unused]] uint8_t __pad01e0[0x8]; // 0x1e0
public:
	// MNetworkEnable
	bool m_bInitialized; // 0x1e8	
	bool m_bDisallowSOC; // 0x1e9	
	bool m_bIsStoreItem; // 0x1ea	
	bool m_bIsTradeItem; // 0x1eb	
	int32_t m_iEntityQuantity; // 0x1ec	
	int32_t m_iRarityOverride; // 0x1f0	
	int32_t m_iQualityOverride; // 0x1f4	
	int32_t m_iOriginOverride; // 0x1f8	
	uint8_t m_unClientFlags; // 0x1fc	
	uint8_t m_unOverrideStyle; // 0x1fd	
private:
	[[maybe_unused]] uint8_t __pad01fe[0x12]; // 0x1fe
public:
	// MNetworkEnable
	// -> m_Attributes - 0x218
	// -> m_pManager - 0x268
	CAttributeList m_AttributeList; // 0x210	
	// MNetworkEnable
	// -> m_Attributes - 0x278
	// -> m_pManager - 0x2c8
	CAttributeList m_NetworkedDynamicAttributes; // 0x270	
	// MNetworkEnable
	char m_szCustomName[161]; // 0x2d0	
	char m_szCustomNameOverride[161]; // 0x371	
private:
	[[maybe_unused]] uint8_t __pad0412[0x2e]; // 0x412
public:
	bool m_bInitializedTags; // 0x440	
	
	// Static fields:
	static bool &Get_m_sbHasCleanedInventoryImageCacheDir(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_EconItemView")->m_static_fields[0]->m_instance);};
};

