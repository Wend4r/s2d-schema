#pragma once

#include <cstdint>

struct VMixFilterDesc_t;
// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x70
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Shoebox Reverb Node"
// MPropertyDescription "A simple reverb that approximates the reflections of a box-shaped room."
class CMixBoxverb : public CMixPropertyBase
{
public:
	// MPropertyDescription "The reverb can be parameterized either by a delay range (min/max delay in milliseconds) OR by a delay size for each dimension of a box (width/height/depth).<br>If you set width, height, or depth to anything other than zero, these min/max fields will not be used."
	// MPropertyFriendlyName "Max Size (milliseconds)"
	// MPropertyAttributeRange "0.0 1000.0"
	float m_flSizeMax; // 0x20	
	// MPropertyDescription "The reverb can be parameterized either by a delay range (min/max delay in milliseconds) OR by a delay size for each dimension of a box (width/height/depth).<br>If you set width, height, or depth to anything other than zero, these min/max fields will not be used."
	// MPropertyFriendlyName "Min Size (milliseconds)"
	// MPropertyAttributeRange "0.0 1000.0"
	float m_flSizeMin; // 0x24	
	// MPropertyDescription "The complexity is how many delays are spread along the total delay length.  Max is 12.  More delays will give your space more reflections (more geometric complexity)."
	// MPropertyFriendlyName "Complexity"
	// MPropertyAttributeRange "1.01 12.0"
	float m_flComplexity; // 0x28	
	// MPropertyDescription "This is a percentage of the delay length to modulate. 100 means you will modulate between 0 and the max delay.  10 means the delay will modulate between 90 and 100 percent of max delay."
	// MPropertyFriendlyName "Mod Depth (milliseconds)"
	// MPropertyAttributeRange "0.0 100"
	float m_flModDepth; // 0x2c	
	// MPropertyDescription "This is the rate at which the delay length changes.  1 means change the delay every delaytime milliseconds.  2 means change the delay after 2*delaytime milliseconds."
	// MPropertyFriendlyName "Mod Rate (# of delay intervals before mod)"
	// MPropertyAttributeRange "0.0 10.0"
	float m_flModRate; // 0x30	
	// MPropertyDescription "If true the filter is applied to the signal before output.  If false the filter is applied while feeding back into each delay line."
	// MPropertyFriendlyName "Parallalelize Filter"
	bool m_bParallel; // 0x34	
private:
	[[maybe_unused]] uint8_t __pad0035[0x3]; // 0x35
public:
	// MPropertyDescription "Configure the filter to apply to the delay output.  Usually this should be a lowpass filter."
	// MPropertyFriendlyName "Filter Type"
	// MPropertyGroupName "Filter"
	VMixFilterDesc_t m_filterType; // 0x38	
	// MPropertyDescription "If width, height, or depth is set min/max size will be ignored.  These dimensions are the size of the room in milliseconds to first reflection."
	// MPropertyFriendlyName "Width (milliseconds)"
	// MPropertyAttributeRange "0 1000.0"
	float m_flWidth; // 0x48	
	// MPropertyDescription "If width, height, or depth is set min/max size will be ignored.  These dimensions are the size of the room in milliseconds to first reflection."
	// MPropertyFriendlyName "Height (milliseconds)"
	// MPropertyAttributeRange "0 1000.0"
	float m_flHeight; // 0x4c	
	// MPropertyDescription "If width, height, or depth is set min/max size will be ignored.  These dimensions are the size of the room in milliseconds to first reflection."
	// MPropertyFriendlyName "Depth (milliseconds)"
	// MPropertyAttributeRange "0 1000.0"
	float m_flDepth; // 0x50	
	// MPropertyDescription "How much of the signal to send to the delay lines.  How loud the reflections are."
	// MPropertyFriendlyName "Feedback Scale"
	// MPropertyAttributeRange "0 1"
	float m_flFeedbackScale; // 0x54	
	// MPropertyDescription "Additional amp on the width dimension reflections.  Note negative numbers mean this feedback bypasses the filter (predelay)."
	// MPropertyFriendlyName "Width Reflectivity"
	// MPropertyAttributeRange "-1.0 1.0"
	float m_flFeedbackWidth; // 0x58	
	// MPropertyDescription "Additional amp on the height dimension reflections.  Note negative numbers mean this feedback bypasses the filter (predelay)."
	// MPropertyFriendlyName "Height Reflectivity"
	// MPropertyAttributeRange "-1.0 1.0"
	float m_flFeedbackHeight; // 0x5c	
	// MPropertyDescription "Additional amp on the depth dimension reflections.  Note negative numbers mean this feedback bypasses the filter (predelay)."
	// MPropertyFriendlyName "Depth  Reflectivity"
	// MPropertyAttributeRange "-1.0 1.0"
	float m_flFeedbackDepth; // 0x60	
	// MPropertyDescription "Amplification at output in dB for tuning."
	// MPropertyFriendlyName "Output Gain (dB)"
	// MPropertyAttributeRange "-24.0 -0.1"
	float m_flOutputGain; // 0x64	
	// MPropertyDescription "If zero there are no extra taps.  If non-zero there will be 3 extra taps and this value will adjust their relative phase."
	// MPropertyFriendlyName "Extra Tap Scale"
	// MPropertyAttributeRange "0 0.333"
	float m_flTaps; // 0x68	
};

