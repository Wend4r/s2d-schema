#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa60
// Has VTable
class CMomentaryRotButton : public CRotButton
{
public:
	CEntityOutputTemplate< float32 > m_Position; // 0x960	
	CEntityIOOutput m_OnUnpressed; // 0x988	
	CEntityIOOutput m_OnFullyOpen; // 0x9b0	
	CEntityIOOutput m_OnFullyClosed; // 0x9d8	
	CEntityIOOutput m_OnReachedPosition; // 0xa00	
	int32_t m_lastUsed; // 0xa28	
	QAngle m_start; // 0xa2c	
	QAngle m_end; // 0xa38	
	float m_IdealYaw; // 0xa44	
	CUtlSymbolLarge m_sNoise; // 0xa48	
	bool m_bUpdateTarget; // 0xa50	
private:
	[[maybe_unused]] uint8_t __pad0a51[0x3]; // 0xa51
public:
	int32_t m_direction; // 0xa54	
	float m_returnSpeed; // 0xa58	
	float m_flStartPosition; // 0xa5c	
	
	// Datamap fields:
	// bool m_bSolidBsp; // 0x868
	// void CMomentaryRotButtonUseMoveDone; // 0x0
	// void CMomentaryRotButtonReturnMoveDone; // 0x0
	// void CMomentaryRotButtonSetPositionMoveDone; // 0x0
	// void CMomentaryRotButtonUpdateThink; // 0x0
	// float InputSetPosition; // 0x0
	// float InputSetPositionImmediately; // 0x0
	// void InputDisableUpdateTarget; // 0x0
	// void InputEnableUpdateTarget; // 0x0
};

