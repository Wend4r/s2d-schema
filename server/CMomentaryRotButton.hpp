#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa18
// Has VTable
class CMomentaryRotButton : public CRotButton
{
public:
	CEntityOutputTemplate< float32 > m_Position; // 0x918	
	CEntityIOOutput m_OnUnpressed; // 0x940	
	CEntityIOOutput m_OnFullyOpen; // 0x968	
	CEntityIOOutput m_OnFullyClosed; // 0x990	
	CEntityIOOutput m_OnReachedPosition; // 0x9b8	
	int32_t m_lastUsed; // 0x9e0	
	QAngle m_start; // 0x9e4	
	QAngle m_end; // 0x9f0	
	float m_IdealYaw; // 0x9fc	
	CUtlSymbolLarge m_sNoise; // 0xa00	
	bool m_bUpdateTarget; // 0xa08	
private:
	[[maybe_unused]] uint8_t __pad0a09[0x3]; // 0xa09
public:
	int32_t m_direction; // 0xa0c	
	float m_returnSpeed; // 0xa10	
	float m_flStartPosition; // 0xa14	
	
	// Datamap fields:
	// bool m_bSolidBsp; // 0x820
	// void CMomentaryRotButtonUseMoveDone; // 0x0
	// void CMomentaryRotButtonReturnMoveDone; // 0x0
	// void CMomentaryRotButtonSetPositionMoveDone; // 0x0
	// void CMomentaryRotButtonUpdateThink; // 0x0
	// float InputSetPosition; // 0x0
	// float InputSetPositionImmediately; // 0x0
	// void InputDisableUpdateTarget; // 0x0
	// void InputEnableUpdateTarget; // 0x0
};

