#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9e0
// Has VTable
class CMomentaryRotButton : public CRotButton
{
public:
	CEntityOutputTemplate< float32 > m_Position; // 0x8e0	
	CEntityIOOutput m_OnUnpressed; // 0x908	
	CEntityIOOutput m_OnFullyOpen; // 0x930	
	CEntityIOOutput m_OnFullyClosed; // 0x958	
	CEntityIOOutput m_OnReachedPosition; // 0x980	
	int32_t m_lastUsed; // 0x9a8	
	QAngle m_start; // 0x9ac	
	QAngle m_end; // 0x9b8	
	float m_IdealYaw; // 0x9c4	
	CUtlSymbolLarge m_sNoise; // 0x9c8	
	bool m_bUpdateTarget; // 0x9d0	
private:
	[[maybe_unused]] uint8_t __pad09d1[0x3]; // 0x9d1
public:
	int32_t m_direction; // 0x9d4	
	float m_returnSpeed; // 0x9d8	
	float m_flStartPosition; // 0x9dc	
	
	// Datamap fields:
	// bool m_bSolidBsp; // 0x7e8
	// void CMomentaryRotButtonUseMoveDone; // 0x0
	// void CMomentaryRotButtonReturnMoveDone; // 0x0
	// void CMomentaryRotButtonSetPositionMoveDone; // 0x0
	// void CMomentaryRotButtonUpdateThink; // 0x0
	// float InputSetPosition; // 0x0
	// float InputSetPositionImmediately; // 0x0
	// void InputDisableUpdateTarget; // 0x0
	// void InputEnableUpdateTarget; // 0x0
};

