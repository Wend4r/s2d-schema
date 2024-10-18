#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd88
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
	ParticleIndex_t m_fxSSSunFlareEffectIndex; // 0xd28	
	ParticleIndex_t m_fxSunFlareEffectIndex; // 0xd2c	
	float m_fdistNormalize; // 0xd30	
	Vector m_vSunPos; // 0xd34	
	// MNetworkEnable
	Vector m_vDirection; // 0xd40	
private:
	[[maybe_unused]] uint8_t __pad0d4c[0x4]; // 0xd4c
public:
	// MNetworkEnable
	CUtlSymbolLarge m_iszEffectName; // 0xd50	
	// MNetworkEnable
	CUtlSymbolLarge m_iszSSEffectName; // 0xd58	
	// MNetworkEnable
	Color m_clrOverlay; // 0xd60	
	// MNetworkEnable
	bool m_bOn; // 0xd64	
	// MNetworkEnable
	bool m_bmaxColor; // 0xd65	
private:
	[[maybe_unused]] uint8_t __pad0d66[0x2]; // 0xd66
public:
	// MNetworkEnable
	// MNetworkBitCount "10"
	float m_flSize; // 0xd68	
	// MNetworkEnable
	// MNetworkBitCount "10"
	float m_flHazeScale; // 0xd6c	
	// MNetworkEnable
	// MNetworkMinValue "-360.000000"
	// MNetworkMaxValue "360.000000"
	float m_flRotation; // 0xd70	
	// MNetworkEnable
	// MNetworkChangeCallback "OnHDRScaleChanged"
	float m_flHDRColorScale; // 0xd74	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "2.000000"
	float m_flAlphaHaze; // 0xd78	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "2.000000"
	float m_flAlphaScale; // 0xd7c	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "2.000000"
	float m_flAlphaHdr; // 0xd80	
	// MNetworkEnable
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	float m_flFarZScale; // 0xd84	
};

