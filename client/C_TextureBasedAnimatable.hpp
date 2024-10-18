#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd60
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
	bool m_bLoop; // 0xd28	
private:
	[[maybe_unused]] uint8_t __pad0d29[0x3]; // 0xd29
public:
	// MNetworkEnable
	float m_flFPS; // 0xd2c	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hPositionKeys; // 0xd30	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hRotationKeys; // 0xd38	
	// MNetworkEnable
	Vector m_vAnimationBoundsMin; // 0xd40	
	// MNetworkEnable
	Vector m_vAnimationBoundsMax; // 0xd4c	
	// MNetworkEnable
	float m_flStartTime; // 0xd58	
	// MNetworkEnable
	float m_flStartFrame; // 0xd5c	
	
	// Datamap fields:
	// void InputStart; // 0x0
	// void InputStop; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

