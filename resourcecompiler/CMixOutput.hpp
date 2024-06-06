#pragma once

#include <cstdint>

// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Output Node"
// MPropertyDescription "This is where your audio is output from the graph"
class CMixOutput : public CMixPropertyBase
{
public:
	// MPropertyDescription "Volume for audio.Input1.<br>Range is 0 - 1"
	float m_flVolume1; // 0x20	
	// MPropertyDescription "Volume for audio.Input2.<br>Range is 0 - 1"
	float m_flVolume2; // 0x24	
	// MPropertyDescription "Optional name of a send in your main mix graph.  When set this node's mix will be sent to the named track in your main mix graph.
Most voice graphs have a single output, that is routed by the sound operator stack.You should only use this for special cases where the vmix graph needs to route additional unique mixes to specific tracks.e.g.bypass HRTF andsend a different mix to the reverb send"
	// MPropertyFriendlyName "Send To Track"
	// MPropertyAttributeChoiceName "send_to_track"
	CUtlString m_sendTo; // 0x28	
};

