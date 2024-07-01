#pragma once

#include <cstdint>

struct CPathKeyFrame;
// Registered binary: server.dll (project 'server')
// Alignment: 16
// Size: 0x550
// Has VTable
class CBaseMoveBehavior : public CPathKeyFrame
{
public:
	int32_t m_iPositionInterpolator; // 0x510	
	int32_t m_iRotationInterpolator; // 0x514	
	float m_flAnimStartTime; // 0x518	
	float m_flAnimEndTime; // 0x51c	
	float m_flAverageSpeedAcrossFrame; // 0x520	
private:
	[[maybe_unused]] uint8_t __pad0524[0x4]; // 0x524
public:
	CPathKeyFrame* m_pCurrentKeyFrame; // 0x528	
	CPathKeyFrame* m_pTargetKeyFrame; // 0x530	
	CPathKeyFrame* m_pPreKeyFrame; // 0x538	
	CPathKeyFrame* m_pPostKeyFrame; // 0x540	
	float m_flTimeIntoFrame; // 0x548	
	int32_t m_iDirection; // 0x54c	
};

