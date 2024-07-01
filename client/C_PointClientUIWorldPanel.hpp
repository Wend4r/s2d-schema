#pragma once

#include <cstdint>

struct CPointOffScreenIndicatorUi;
// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0xa70
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
	[[maybe_unused]] uint8_t __pad0840[0x8]; // 0x840
public:
	bool m_bForceRecreateNextUpdate; // 0x848	
	bool m_bMoveViewToPlayerNextThink; // 0x849	
	bool m_bCheckCSSClasses; // 0x84a	
private:
	[[maybe_unused]] uint8_t __pad084b[0x5]; // 0x84b
public:
	CTransform m_anchorDeltaTransform; // 0x850	
private:
	[[maybe_unused]] uint8_t __pad0870[0x178]; // 0x870
public:
	CPointOffScreenIndicatorUi* m_pOffScreenIndicator; // 0x9e8	
private:
	[[maybe_unused]] uint8_t __pad09f0[0x20]; // 0x9f0
public:
	// MNetworkEnable
	bool m_bIgnoreInput; // 0xa10	
	// MNetworkEnable
	bool m_bLit; // 0xa11	
	// MNetworkEnable
	bool m_bFollowPlayerAcrossTeleport; // 0xa12	
private:
	[[maybe_unused]] uint8_t __pad0a13[0x1]; // 0xa13
public:
	// MNetworkEnable
	float m_flWidth; // 0xa14	
	// MNetworkEnable
	float m_flHeight; // 0xa18	
	// MNetworkEnable
	float m_flDPI; // 0xa1c	
	// MNetworkEnable
	float m_flInteractDistance; // 0xa20	
	// MNetworkEnable
	float m_flDepthOffset; // 0xa24	
	// MNetworkEnable
	uint32_t m_unOwnerContext; // 0xa28	
	// MNetworkEnable
	uint32_t m_unHorizontalAlign; // 0xa2c	
	// MNetworkEnable
	uint32_t m_unVerticalAlign; // 0xa30	
	// MNetworkEnable
	uint32_t m_unOrientation; // 0xa34	
	// MNetworkEnable
	bool m_bAllowInteractionFromAllSceneWorlds; // 0xa38	
private:
	[[maybe_unused]] uint8_t __pad0a39[0x7]; // 0xa39
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // 0xa40	
	// MNetworkEnable
	bool m_bOpaque; // 0xa58	
	// MNetworkEnable
	bool m_bNoDepth; // 0xa59	
	// MNetworkEnable
	bool m_bRenderBackface; // 0xa5a	
	// MNetworkEnable
	bool m_bUseOffScreenIndicator; // 0xa5b	
	// MNetworkEnable
	bool m_bExcludeFromSaveGames; // 0xa5c	
	// MNetworkEnable
	bool m_bGrabbable; // 0xa5d	
	// MNetworkEnable
	bool m_bOnlyRenderToTexture; // 0xa5e	
	// MNetworkEnable
	bool m_bDisableMipGen; // 0xa5f	
	// MNetworkEnable
	int32_t m_nExplicitImageLayout; // 0xa60	
	
	// Datamap fields:
	// CStrongHandle< InfoForResourceTypeIMaterial2 > m_hPanelOverrideMaterial; // 0x9e0
};

