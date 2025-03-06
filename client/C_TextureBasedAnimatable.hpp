#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x840
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
class C_TextureBasedAnimatable : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	bool m_bLoop; // 0x808	
private:
	[[maybe_unused]] uint8_t __pad0809[0x3]; // 0x809
public:
	// MNetworkEnable
	float m_flFPS; // 0x80c	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hPositionKeys; // 0x810	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hRotationKeys; // 0x818	
	// MNetworkEnable
	Vector m_vAnimationBoundsMin; // 0x820	
	// MNetworkEnable
	Vector m_vAnimationBoundsMax; // 0x82c	
	// MNetworkEnable
	float m_flStartTime; // 0x838	
	// MNetworkEnable
	float m_flStartFrame; // 0x83c	
	
	// Datamap fields:
	// void InputStart; // 0x0
	// void InputStop; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

