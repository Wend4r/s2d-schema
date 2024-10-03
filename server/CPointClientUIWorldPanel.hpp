#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x958
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
class CPointClientUIWorldPanel : public CBaseClientUIEntity
{
public:
	// MNetworkEnable
	bool m_bIgnoreInput; // 0x900	
	// MNetworkEnable
	bool m_bLit; // 0x901	
	// MNetworkEnable
	bool m_bFollowPlayerAcrossTeleport; // 0x902	
private:
	[[maybe_unused]] uint8_t __pad0903[0x1]; // 0x903
public:
	// MNetworkEnable
	float m_flWidth; // 0x904	
	// MNetworkEnable
	float m_flHeight; // 0x908	
	// MNetworkEnable
	float m_flDPI; // 0x90c	
	// MNetworkEnable
	float m_flInteractDistance; // 0x910	
	// MNetworkEnable
	float m_flDepthOffset; // 0x914	
	// MNetworkEnable
	uint32_t m_unOwnerContext; // 0x918	
	// MNetworkEnable
	uint32_t m_unHorizontalAlign; // 0x91c	
	// MNetworkEnable
	uint32_t m_unVerticalAlign; // 0x920	
	// MNetworkEnable
	uint32_t m_unOrientation; // 0x924	
	// MNetworkEnable
	bool m_bAllowInteractionFromAllSceneWorlds; // 0x928	
private:
	[[maybe_unused]] uint8_t __pad0929[0x7]; // 0x929
public:
	// MNetworkEnable
	CNetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // 0x930	
	// MNetworkEnable
	bool m_bOpaque; // 0x948	
	// MNetworkEnable
	bool m_bNoDepth; // 0x949	
	// MNetworkEnable
	bool m_bRenderBackface; // 0x94a	
	// MNetworkEnable
	bool m_bUseOffScreenIndicator; // 0x94b	
	// MNetworkEnable
	bool m_bExcludeFromSaveGames; // 0x94c	
	// MNetworkEnable
	bool m_bGrabbable; // 0x94d	
	// MNetworkEnable
	bool m_bOnlyRenderToTexture; // 0x94e	
	// MNetworkEnable
	bool m_bDisableMipGen; // 0x94f	
	// MNetworkEnable
	int32_t m_nExplicitImageLayout; // 0x950	
	
	// Datamap fields:
	// void InputIgnoreUserInput; // 0x0
	// void InputAcceptUserInput; // 0x0
	// CUtlSymbolLarge InputAddCSSClass; // 0x0
	// CUtlSymbolLarge InputRemoveCSSClass; // 0x0
	// CUtlSymbolLarge InputLocalPlayerAddCSSClass; // 0x0
	// CUtlSymbolLarge InputLocalPlayerRemoveCSSClass; // 0x0
};

