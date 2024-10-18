#pragma once

#include <cstdint>

struct CPointOffScreenIndicatorUi;
// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0xf90
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "bool m_bIgnoreInput"
// MNetworkVarNames "bool m_bLit"
// MNetworkVarNames "bool m_bFollowPlayerAcrossTeleport"
// MNetworkVarNames "float m_flWidth"
// MNetworkVarNames "float m_flHeight"
// MNetworkVarNames "float m_flDPI"
// MNetworkVarNames "float m_flInteractDistance"
// MNetworkVarNames "float m_flDepthOffset"
// MNetworkVarNames "uint32 m_unOwnerContext"
// MNetworkVarNames "uint32 m_unHorizontalAlign"
// MNetworkVarNames "uint32 m_unVerticalAlign"
// MNetworkVarNames "uint32 m_unOrientation"
// MNetworkVarNames "bool m_bAllowInteractionFromAllSceneWorlds"
// MNetworkVarNames "string_t m_vecCSSClasses"
// MNetworkVarNames "bool m_bOpaque"
// MNetworkVarNames "bool m_bNoDepth"
// MNetworkVarNames "bool m_bRenderBackface"
// MNetworkVarNames "bool m_bUseOffScreenIndicator"
// MNetworkVarNames "bool m_bExcludeFromSaveGames"
// MNetworkVarNames "bool m_bGrabbable"
// MNetworkVarNames "bool m_bOnlyRenderToTexture"
// MNetworkVarNames "bool m_bDisableMipGen"
// MNetworkVarNames "int32 m_nExplicitImageLayout"
class C_PointClientUIWorldPanel : public C_BaseClientUIEntity
{
private:
	[[maybe_unused]] uint8_t __pad0d58[0x8]; // 0xd58
public:
	bool m_bForceRecreateNextUpdate; // 0xd60	
	bool m_bMoveViewToPlayerNextThink; // 0xd61	
	bool m_bCheckCSSClasses; // 0xd62	
private:
	[[maybe_unused]] uint8_t __pad0d63[0xd]; // 0xd63
public:
	CTransform m_anchorDeltaTransform; // 0xd70	
private:
	[[maybe_unused]] uint8_t __pad0d90[0x178]; // 0xd90
public:
	CPointOffScreenIndicatorUi* m_pOffScreenIndicator; // 0xf08	
private:
	[[maybe_unused]] uint8_t __pad0f10[0x20]; // 0xf10
public:
	// MNetworkEnable
	bool m_bIgnoreInput; // 0xf30	
	// MNetworkEnable
	bool m_bLit; // 0xf31	
	// MNetworkEnable
	bool m_bFollowPlayerAcrossTeleport; // 0xf32	
private:
	[[maybe_unused]] uint8_t __pad0f33[0x1]; // 0xf33
public:
	// MNetworkEnable
	float m_flWidth; // 0xf34	
	// MNetworkEnable
	float m_flHeight; // 0xf38	
	// MNetworkEnable
	float m_flDPI; // 0xf3c	
	// MNetworkEnable
	float m_flInteractDistance; // 0xf40	
	// MNetworkEnable
	float m_flDepthOffset; // 0xf44	
	// MNetworkEnable
	uint32_t m_unOwnerContext; // 0xf48	
	// MNetworkEnable
	uint32_t m_unHorizontalAlign; // 0xf4c	
	// MNetworkEnable
	uint32_t m_unVerticalAlign; // 0xf50	
	// MNetworkEnable
	uint32_t m_unOrientation; // 0xf54	
	// MNetworkEnable
	bool m_bAllowInteractionFromAllSceneWorlds; // 0xf58	
private:
	[[maybe_unused]] uint8_t __pad0f59[0x7]; // 0xf59
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // 0xf60	
	// MNetworkEnable
	bool m_bOpaque; // 0xf78	
	// MNetworkEnable
	bool m_bNoDepth; // 0xf79	
	// MNetworkEnable
	bool m_bRenderBackface; // 0xf7a	
	// MNetworkEnable
	bool m_bUseOffScreenIndicator; // 0xf7b	
	// MNetworkEnable
	bool m_bExcludeFromSaveGames; // 0xf7c	
	// MNetworkEnable
	bool m_bGrabbable; // 0xf7d	
	// MNetworkEnable
	bool m_bOnlyRenderToTexture; // 0xf7e	
	// MNetworkEnable
	bool m_bDisableMipGen; // 0xf7f	
	// MNetworkEnable
	int32_t m_nExplicitImageLayout; // 0xf80	
	
	// Datamap fields:
	// CStrongHandle< InfoForResourceTypeIMaterial2 > m_hPanelOverrideMaterial; // 0xf00
};

