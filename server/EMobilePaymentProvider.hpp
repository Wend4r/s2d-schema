#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class EMobilePaymentProvider : uint32_t
{
	k_EMobilePaymentProvider_Invalid = 0x0,
	k_EMobilePaymentProvider_GooglePlay = 0x1,
	k_EMobilePaymentProvider_AppleAppStore = 0x2,
};

