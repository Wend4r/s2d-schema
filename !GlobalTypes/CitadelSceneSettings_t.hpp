#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x18
// 
// MGetKV3ClassDefaults
struct CitadelSceneSettings_t
{
public:
	// MPropertyStartGroup "Camera Settings"
	// MPropertyFriendlyName "Camera Attachment"
	// MPropertyCustomFGDType "model_attachment"
	CUtlString m_strAttachmentName; // 0x0	
	// MPropertyFriendlyName "FOV"
	float m_flFOV; // 0x8	
	// MPropertyFriendlyName "Z-Near"
	float m_flZNear; // 0xc	
	// MPropertyFriendlyName "Z-Far"
	float m_flZFar; // 0x10	
};

