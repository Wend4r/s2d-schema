#pragma once

#include <cstdint>

// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x230
// Has VTable
// 
// MObsoleteParticleFunction
// MGetKV3ClassDefaults
class C_OP_RenderLights : public C_OP_RenderPoints
{
public:
	// MPropertyFriendlyName "animation rate"
	float m_flAnimationRate; // 0x210	
	// MPropertyFriendlyName "animation type"
	AnimationType_t m_nAnimationType; // 0x214	
	// MPropertyFriendlyName "set animation value in FPS"
	bool m_bAnimateInFPS; // 0x218	
private:
	[[maybe_unused]] uint8_t __pad0219[0x3]; // 0x219
public:
	// MPropertyFriendlyName "minimum visual size"
	float m_flMinSize; // 0x21c	
	// MPropertyFriendlyName "maximum visual size"
	float m_flMaxSize; // 0x220	
	// MPropertyFriendlyName "size at which to start fading"
	float m_flStartFadeSize; // 0x224	
	// MPropertyFriendlyName "size at which to fade away"
	float m_flEndFadeSize; // 0x228	
};

