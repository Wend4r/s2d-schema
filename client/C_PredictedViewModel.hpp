#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf60
// Has VTable
class C_PredictedViewModel : public C_BaseViewModel
{
public:
	Vector m_vPredictedLagOffset; // 0xf38	
	QAngle m_targetSpeed; // 0xf44	
	QAngle m_currentSpeed; // 0xf50	
};

