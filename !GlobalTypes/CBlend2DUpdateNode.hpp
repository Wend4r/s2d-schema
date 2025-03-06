#pragma once

#include <cstdint>

struct CParamSpanUpdater;
struct CAnimInputDamping;
struct CAnimParamHandle;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0xf8
// Has VTable
// 
// MGetKV3ClassDefaults
class CBlend2DUpdateNode : public CAnimUpdateNodeBase
{
private:
	[[maybe_unused]] uint8_t __pad0058[0x8]; // 0x58
public:
	CUtlVector< BlendItem_t > m_items; // 0x60	
	CUtlVector< TagSpan_t > m_tags; // 0x78	
	CParamSpanUpdater m_paramSpans; // 0x90	
	CUtlVector< int32 > m_nodeItemIndices; // 0xa8	
	CAnimInputDamping m_damping; // 0xc0	
	AnimValueSource m_blendSourceX; // 0xd8	
	CAnimParamHandle m_paramX; // 0xdc	
private:
	[[maybe_unused]] uint8_t __pad00de[0x2]; // 0xde
public:
	AnimValueSource m_blendSourceY; // 0xe0	
	CAnimParamHandle m_paramY; // 0xe4	
private:
	[[maybe_unused]] uint8_t __pad00e6[0x2]; // 0xe6
public:
	Blend2DMode m_eBlendMode; // 0xe8	
	float m_playbackSpeed; // 0xec	
	bool m_bLoop; // 0xf0	
	bool m_bLockBlendOnReset; // 0xf1	
	bool m_bLockWhenWaning; // 0xf2	
	bool m_bAnimEventsAndTagsOnMostWeightedOnly; // 0xf3	
};

