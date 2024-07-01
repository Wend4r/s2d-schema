#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x870
// Has VTable
// 
// MNetworkIncludeByName "m_clrRender"
// MNetworkExcludeByName "CGameSceneNode::m_vecOrigin"
// MNetworkIncludeByUserGroup "Origin"
// MNetworkIncludeByName "CGameSceneNode::m_angRotation"
// MNetworkIncludeByName "CGameSceneNode::m_hParent"
// MNetworkIncludeByName "m_spawnflags"
// MNetworkVarNames "Vector m_vDirection"
// MNetworkVarNames "string_t m_iszEffectName"
// MNetworkVarNames "string_t m_iszSSEffectName"
// MNetworkVarNames "Color m_clrOverlay"
// MNetworkVarNames "bool m_bOn"
// MNetworkVarNames "bool m_bmaxColor"
// MNetworkVarNames "float32 m_flSize"
// MNetworkVarNames "float32 m_flHazeScale"
// MNetworkVarNames "float32 m_flRotation"
// MNetworkVarNames "float32 m_flHDRColorScale"
// MNetworkVarNames "float32 m_flAlphaHaze"
// MNetworkVarNames "float32 m_flAlphaScale"
// MNetworkVarNames "float32 m_flAlphaHdr"
// MNetworkVarNames "float32 m_flFarZScale"
class C_Sun : public C_BaseModelEntity
{
public:
	ParticleIndex_t m_fxSSSunFlareEffectIndex; // 0x810	
	ParticleIndex_t m_fxSunFlareEffectIndex; // 0x814	
	float m_fdistNormalize; // 0x818	
	Vector m_vSunPos; // 0x81c	
	// MNetworkEnable
	Vector m_vDirection; // 0x828	
private:
	[[maybe_unused]] uint8_t __pad0834[0x4]; // 0x834
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszEffectName; // 0x838	
	// MNetworkEnable
	CUtlSymbolLarge m_iszSSEffectName; // 0x840	
	// MNetworkEnable
	Color m_clrOverlay; // 0x848	
	// MNetworkEnable
	bool m_bOn; // 0x84c	
	// MNetworkEnable
	bool m_bmaxColor; // 0x84d	
private:
	[[maybe_unused]] uint8_t __pad084e[0x2]; // 0x84e
public:
	// MNetworkEnable
	// MNetworkBitCount "10"
	float m_flSize; // 0x850	
	// MNetworkEnable
	// MNetworkBitCount "10"
	float m_flHazeScale; // 0x854	
	// MNetworkEnable
	// MNetworkMinValue "-360.000000"
	// MNetworkMaxValue "360.000000"
	float m_flRotation; // 0x858	
	// MNetworkEnable
	// MNetworkChangeCallback "OnHDRScaleChanged"
	float m_flHDRColorScale; // 0x85c	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "2.000000"
	float m_flAlphaHaze; // 0x860	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "2.000000"
	float m_flAlphaScale; // 0x864	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "2.000000"
	float m_flAlphaHdr; // 0x868	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	float m_flFarZScale; // 0x86c	
};

