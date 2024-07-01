#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x28
// Has Trivial Destructor
// 
// MNetworkVarsAtomic
class CNetworkOriginQuantizedVector
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
public:
	// MNetworkBitCount "19"
	// MNetworkMinValue "-16384.000000"
	// MNetworkMaxValue "16384.000000"
	// MNetworkEncodeFlags "4"
	// MNetworkChangeCallback "CNetworkOriginQuantizedVector"
	CNetworkedQuantizedFloat m_vecX; // 0x10	
	// MNetworkBitCount "19"
	// MNetworkMinValue "-16384.000000"
	// MNetworkMaxValue "16384.000000"
	// MNetworkEncodeFlags "4"
	// MNetworkChangeCallback "CNetworkOriginQuantizedVector"
	CNetworkedQuantizedFloat m_vecY; // 0x18	
	// MNetworkBitCount "19"
	// MNetworkMinValue "-16384.000000"
	// MNetworkMaxValue "16384.000000"
	// MNetworkEncodeFlags "4"
	// MNetworkChangeCallback "CNetworkOriginQuantizedVector"
	CNetworkedQuantizedFloat m_vecZ; // 0x20	
};

