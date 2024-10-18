#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1018
// Has VTable
class C_PredictedViewModel : public C_BaseViewModel
{
public:
	Vector m_vPredictedLagOffset; // 0xff0	
	QAngle m_targetSpeed; // 0xffc	
	QAngle m_currentSpeed; // 0x1008	
};

