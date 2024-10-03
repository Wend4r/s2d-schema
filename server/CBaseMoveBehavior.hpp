#pragma once

#include <cstdint>

struct CPathKeyFrame;
// Registered binary: server.dll (project 'server')
// Alignment: 16
// Size: 0x580
// Has VTable
class CBaseMoveBehavior : public CPathKeyFrame
{
public:
	int32_t m_iPositionInterpolator; // 0x540	
	int32_t m_iRotationInterpolator; // 0x544	
	float m_flAnimStartTime; // 0x548	
	float m_flAnimEndTime; // 0x54c	
	float m_flAverageSpeedAcrossFrame; // 0x550	
private:
	[[maybe_unused]] uint8_t __pad0554[0x4]; // 0x554
public:
	CPathKeyFrame* m_pCurrentKeyFrame; // 0x558	
	CPathKeyFrame* m_pTargetKeyFrame; // 0x560	
	CPathKeyFrame* m_pPreKeyFrame; // 0x568	
	CPathKeyFrame* m_pPostKeyFrame; // 0x570	
	float m_flTimeIntoFrame; // 0x578	
	int32_t m_iDirection; // 0x57c	
};

