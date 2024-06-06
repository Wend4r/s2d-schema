#pragma once

#include <cstdint>

struct CPointOffScreenIndicatorUi;
// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0xf30
// Has VTable
// 
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
	[[maybe_unused]] uint8_t __pad0cf8[0x8]; // 0xcf8
public:
	bool m_bForceRecreateNextUpdate; // 0xd00	
	bool m_bMoveViewToPlayerNextThink; // 0xd01	
	bool m_bCheckCSSClasses; // 0xd02	
private:
	[[maybe_unused]] uint8_t __pad0d03[0xd]; // 0xd03
public:
	CTransform m_anchorDeltaTransform; // 0xd10	
private:
	[[maybe_unused]] uint8_t __pad0d30[0x178]; // 0xd30
public:
	CPointOffScreenIndicatorUi* m_pOffScreenIndicator; // 0xea8	
private:
	[[maybe_unused]] uint8_t __pad0eb0[0x20]; // 0xeb0
public:
	// MNetworkEnable
	bool m_bIgnoreInput; // 0xed0	
	// MNetworkEnable
	bool m_bLit; // 0xed1	
	// MNetworkEnable
	bool m_bFollowPlayerAcrossTeleport; // 0xed2	
private:
	[[maybe_unused]] uint8_t __pad0ed3[0x1]; // 0xed3
public:
	// MNetworkEnable
	float m_flWidth; // 0xed4	
	// MNetworkEnable
	float m_flHeight; // 0xed8	
	// MNetworkEnable
	float m_flDPI; // 0xedc	
	// MNetworkEnable
	float m_flInteractDistance; // 0xee0	
	// MNetworkEnable
	float m_flDepthOffset; // 0xee4	
	// MNetworkEnable
	uint32_t m_unOwnerContext; // 0xee8	
	// MNetworkEnable
	uint32_t m_unHorizontalAlign; // 0xeec	
	// MNetworkEnable
	uint32_t m_unVerticalAlign; // 0xef0	
	// MNetworkEnable
	uint32_t m_unOrientation; // 0xef4	
	// MNetworkEnable
	bool m_bAllowInteractionFromAllSceneWorlds; // 0xef8	
private:
	[[maybe_unused]] uint8_t __pad0ef9[0x7]; // 0xef9
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // 0xf00	
	// MNetworkEnable
	bool m_bOpaque; // 0xf18	
	// MNetworkEnable
	bool m_bNoDepth; // 0xf19	
	// MNetworkEnable
	bool m_bRenderBackface; // 0xf1a	
	// MNetworkEnable
	bool m_bUseOffScreenIndicator; // 0xf1b	
	// MNetworkEnable
	bool m_bExcludeFromSaveGames; // 0xf1c	
	// MNetworkEnable
	bool m_bGrabbable; // 0xf1d	
	// MNetworkEnable
	bool m_bOnlyRenderToTexture; // 0xf1e	
	// MNetworkEnable
	bool m_bDisableMipGen; // 0xf1f	
	// MNetworkEnable
	int32_t m_nExplicitImageLayout; // 0xf20	
	
	// Datamap fields:
	// CStrongHandle< InfoForResourceTypeIMaterial2 > m_hPanelOverrideMaterial; // 0xea0
};

