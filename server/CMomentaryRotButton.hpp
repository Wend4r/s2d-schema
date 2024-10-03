#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa20
// Has VTable
class CMomentaryRotButton : public CRotButton
{
public:
	CEntityOutputTemplate< float32 > m_Position; // 0x920	
	CEntityIOOutput m_OnUnpressed; // 0x948	
	CEntityIOOutput m_OnFullyOpen; // 0x970	
	CEntityIOOutput m_OnFullyClosed; // 0x998	
	CEntityIOOutput m_OnReachedPosition; // 0x9c0	
	int32_t m_lastUsed; // 0x9e8	
	QAngle m_start; // 0x9ec	
	QAngle m_end; // 0x9f8	
	float m_IdealYaw; // 0xa04	
	CUtlSymbolLarge m_sNoise; // 0xa08	
	bool m_bUpdateTarget; // 0xa10	
private:
	[[maybe_unused]] uint8_t __pad0a11[0x3]; // 0xa11
public:
	int32_t m_direction; // 0xa14	
	float m_returnSpeed; // 0xa18	
	float m_flStartPosition; // 0xa1c	
	
	// Datamap fields:
	// bool m_bSolidBsp; // 0x828
	// void CMomentaryRotButtonUseMoveDone; // 0x0
	// void CMomentaryRotButtonReturnMoveDone; // 0x0
	// void CMomentaryRotButtonSetPositionMoveDone; // 0x0
	// void CMomentaryRotButtonUpdateThink; // 0x0
	// float InputSetPosition; // 0x0
	// float InputSetPositionImmediately; // 0x0
	// void InputDisableUpdateTarget; // 0x0
	// void InputEnableUpdateTarget; // 0x0
};

