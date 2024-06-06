#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd00
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
	bool m_bLoop; // 0xcc8	
private:
	[[maybe_unused]] uint8_t __pad0cc9[0x3]; // 0xcc9
public:
	// MNetworkEnable
	float m_flFPS; // 0xccc	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hPositionKeys; // 0xcd0	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hRotationKeys; // 0xcd8	
	// MNetworkEnable
	Vector m_vAnimationBoundsMin; // 0xce0	
	// MNetworkEnable
	Vector m_vAnimationBoundsMax; // 0xcec	
	// MNetworkEnable
	float m_flStartTime; // 0xcf8	
	// MNetworkEnable
	float m_flStartFrame; // 0xcfc	
	
	// Datamap fields:
	// void InputStart; // 0x0
	// void InputStop; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

