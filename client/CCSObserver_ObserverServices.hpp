#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb0
// Has VTable
class CCSObserver_ObserverServices : public CPlayer_ObserverServices
{
public:
	CEntityHandle m_hLastObserverTarget; // 0x58	
	Vector m_vecObserverInterpolateOffset; // 0x5c	
	Vector m_vecObserverInterpStartPos; // 0x68	
	float m_flObsInterp_PathLength; // 0x74	
private:
	[[maybe_unused]] uint8_t __pad0078[0x8]; // 0x78
public:
	Quaternion m_qObsInterp_OrientationStart; // 0x80	
	Quaternion m_qObsInterp_OrientationTravelDir; // 0x90	
	ObserverInterpState_t m_obsInterpState; // 0xa0	
	bool m_bObserverInterpolationNeedsDeferredSetup; // 0xa4	
};

