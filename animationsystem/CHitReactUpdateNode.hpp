#pragma once

#include <cstdint>

struct HitReactFixedSettings_t;
struct CAnimParamHandle;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0xc8
// Has VTable
// 
// MGetKV3ClassDefaults
class CHitReactUpdateNode : public CUnaryUpdateNode
{
public:
	HitReactFixedSettings_t m_opFixedSettings; // 0x68	
private:
	[[maybe_unused]] uint8_t __pad00ac[0x8]; // 0xac
public:
	CAnimParamHandle m_triggerParam; // 0xb4	
	CAnimParamHandle m_hitBoneParam; // 0xb6	
	CAnimParamHandle m_hitOffsetParam; // 0xb8	
	CAnimParamHandle m_hitDirectionParam; // 0xba	
	CAnimParamHandle m_hitStrengthParam; // 0xbc	
private:
	[[maybe_unused]] uint8_t __pad00be[0x2]; // 0xbe
public:
	float m_flMinDelayBetweenHits; // 0xc0	
	bool m_bResetChild; // 0xc4	
};

