#pragma once

#include <cstdint>

struct CPointOffScreenIndicatorUi;
// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0xf80
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
	[[maybe_unused]] uint8_t __pad0d50[0x8]; // 0xd50
public:
	bool m_bForceRecreateNextUpdate; // 0xd58	
	bool m_bMoveViewToPlayerNextThink; // 0xd59	
	bool m_bCheckCSSClasses; // 0xd5a	
private:
	[[maybe_unused]] uint8_t __pad0d5b[0x5]; // 0xd5b
public:
	CTransform m_anchorDeltaTransform; // 0xd60	
private:
	[[maybe_unused]] uint8_t __pad0d80[0x178]; // 0xd80
public:
	CPointOffScreenIndicatorUi* m_pOffScreenIndicator; // 0xef8	
private:
	[[maybe_unused]] uint8_t __pad0f00[0x20]; // 0xf00
public:
	// MNetworkEnable
	bool m_bIgnoreInput; // 0xf20	
	// MNetworkEnable
	bool m_bLit; // 0xf21	
	// MNetworkEnable
	bool m_bFollowPlayerAcrossTeleport; // 0xf22	
private:
	[[maybe_unused]] uint8_t __pad0f23[0x1]; // 0xf23
public:
	// MNetworkEnable
	float m_flWidth; // 0xf24	
	// MNetworkEnable
	float m_flHeight; // 0xf28	
	// MNetworkEnable
	float m_flDPI; // 0xf2c	
	// MNetworkEnable
	float m_flInteractDistance; // 0xf30	
	// MNetworkEnable
	float m_flDepthOffset; // 0xf34	
	// MNetworkEnable
	uint32_t m_unOwnerContext; // 0xf38	
	// MNetworkEnable
	uint32_t m_unHorizontalAlign; // 0xf3c	
	// MNetworkEnable
	uint32_t m_unVerticalAlign; // 0xf40	
	// MNetworkEnable
	uint32_t m_unOrientation; // 0xf44	
	// MNetworkEnable
	bool m_bAllowInteractionFromAllSceneWorlds; // 0xf48	
private:
	[[maybe_unused]] uint8_t __pad0f49[0x7]; // 0xf49
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // 0xf50	
	// MNetworkEnable
	bool m_bOpaque; // 0xf68	
	// MNetworkEnable
	bool m_bNoDepth; // 0xf69	
	// MNetworkEnable
	bool m_bRenderBackface; // 0xf6a	
	// MNetworkEnable
	bool m_bUseOffScreenIndicator; // 0xf6b	
	// MNetworkEnable
	bool m_bExcludeFromSaveGames; // 0xf6c	
	// MNetworkEnable
	bool m_bGrabbable; // 0xf6d	
	// MNetworkEnable
	bool m_bOnlyRenderToTexture; // 0xf6e	
	// MNetworkEnable
	bool m_bDisableMipGen; // 0xf6f	
	// MNetworkEnable
	int32_t m_nExplicitImageLayout; // 0xf70	
	
	// Datamap fields:
	// CStrongHandle< InfoForResourceTypeIMaterial2 > m_hPanelOverrideMaterial; // 0xef0
};

