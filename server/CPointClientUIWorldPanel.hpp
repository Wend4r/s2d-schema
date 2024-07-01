#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x950
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
	bool m_bIgnoreInput; // 0x8f8	
	// MNetworkEnable
	bool m_bLit; // 0x8f9	
	// MNetworkEnable
	bool m_bFollowPlayerAcrossTeleport; // 0x8fa	
private:
	[[maybe_unused]] uint8_t __pad08fb[0x1]; // 0x8fb
public:
	// MNetworkEnable
	float m_flWidth; // 0x8fc	
	// MNetworkEnable
	float m_flHeight; // 0x900	
	// MNetworkEnable
	float m_flDPI; // 0x904	
	// MNetworkEnable
	float m_flInteractDistance; // 0x908	
	// MNetworkEnable
	float m_flDepthOffset; // 0x90c	
	// MNetworkEnable
	uint32_t m_unOwnerContext; // 0x910	
	// MNetworkEnable
	uint32_t m_unHorizontalAlign; // 0x914	
	// MNetworkEnable
	uint32_t m_unVerticalAlign; // 0x918	
	// MNetworkEnable
	uint32_t m_unOrientation; // 0x91c	
	// MNetworkEnable
	bool m_bAllowInteractionFromAllSceneWorlds; // 0x920	
private:
	[[maybe_unused]] uint8_t __pad0921[0x7]; // 0x921
public:
	// MNetworkEnable
	CNetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // 0x928	
	// MNetworkEnable
	bool m_bOpaque; // 0x940	
	// MNetworkEnable
	bool m_bNoDepth; // 0x941	
	// MNetworkEnable
	bool m_bRenderBackface; // 0x942	
	// MNetworkEnable
	bool m_bUseOffScreenIndicator; // 0x943	
	// MNetworkEnable
	bool m_bExcludeFromSaveGames; // 0x944	
	// MNetworkEnable
	bool m_bGrabbable; // 0x945	
	// MNetworkEnable
	bool m_bOnlyRenderToTexture; // 0x946	
	// MNetworkEnable
	bool m_bDisableMipGen; // 0x947	
	// MNetworkEnable
	int32_t m_nExplicitImageLayout; // 0x948	
	
	// Datamap fields:
	// void InputIgnoreUserInput; // 0x0
	// void InputAcceptUserInput; // 0x0
	// CUtlSymbolLarge InputAddCSSClass; // 0x0
	// CUtlSymbolLarge InputRemoveCSSClass; // 0x0
	// CUtlSymbolLarge InputLocalPlayerAddCSSClass; // 0x0
	// CUtlSymbolLarge InputLocalPlayerRemoveCSSClass; // 0x0
};

