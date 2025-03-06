#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x30
// Has Trivial Destructor
struct DynamicVolumeDef_t
{
public:
	Vector m_vAttachAnchorPos; // 0x0	
	CHandle< CBaseEntity > m_target; // 0xc	
private:
	[[maybe_unused]] uint8_t __pad0010[0x10]; // 0x10
public:
	int32_t m_nHullIdx; // 0x20	
	float m_flSrcDistToCenter; // 0x24	
	float m_flDstDistToCenter; // 0x28	
	bool m_bAttached; // 0x2c	
};

