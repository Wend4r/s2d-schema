#pragma once

#include <cstdint>

struct CitadelAbilityProjectileCreateInfo_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbc0
// Has VTable
class CCitadel_Item_BaseProjectileAOEModifier : public CCitadel_Item
{
public:
	Vector m_vLaunchPosition; // 0xb20	
	QAngle m_qLaunchAngle; // 0xb2c	
private:
	[[maybe_unused]] uint8_t __pad0b38[0x38]; // 0xb38
public:
	CitadelAbilityProjectileCreateInfo_t m_projInfo; // 0xb70	
};

