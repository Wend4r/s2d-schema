#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1010
// Has VTable
class C_PredictedViewModel : public C_BaseViewModel
{
public:
	Vector m_vPredictedLagOffset; // 0xfe8	
	QAngle m_targetSpeed; // 0xff4	
	QAngle m_currentSpeed; // 0x1000	
};

