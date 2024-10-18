#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x7c8
// Has VTable
// 
// MNetworkVarNames "bool m_bLoop"
// MNetworkVarNames "float m_flFPS"
// MNetworkVarNames "HRenderTextureStrong m_hPositionKeys"
// MNetworkVarNames "HRenderTextureStrong m_hRotationKeys"
// MNetworkVarNames "Vector m_vAnimationBoundsMin"
// MNetworkVarNames "Vector m_vAnimationBoundsMax"
// MNetworkVarNames "float m_flStartTime"
// MNetworkVarNames "float m_flStartFrame"
class CTextureBasedAnimatable : public CBaseModelEntity
{
public:
	// MNetworkEnable
	bool m_bLoop; // 0x790	
private:
	[[maybe_unused]] uint8_t __pad0791[0x3]; // 0x791
public:
	// MNetworkEnable
	float m_flFPS; // 0x794	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hPositionKeys; // 0x798	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hRotationKeys; // 0x7a0	
	// MNetworkEnable
	Vector m_vAnimationBoundsMin; // 0x7a8	
	// MNetworkEnable
	Vector m_vAnimationBoundsMax; // 0x7b4	
	// MNetworkEnable
	float m_flStartTime; // 0x7c0	
	// MNetworkEnable
	float m_flStartFrame; // 0x7c4	
	
	// Datamap fields:
	// void InputStart; // 0x0
	// void InputStop; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

