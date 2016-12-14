// ----------------------------------------------------------------------------
// Constants.h
//
//
// Authors:
// Peter Polidoro polidorop@janelia.hhmi.org
// ----------------------------------------------------------------------------
#ifndef AUDITORY_STIMULATOR_CONSTANTS_H
#define AUDITORY_STIMULATOR_CONSTANTS_H
#include "ConstantVariable.h"
#include "AudioController.h"


namespace auditory_stimulator
{
namespace constants
{
//MAX values must be >= 1, >= created/copied count, < RAM limit
enum{PROPERTY_COUNT_MAX=16};
enum{PARAMETER_COUNT_MAX=1};
enum{FUNCTION_COUNT_MAX=1};
enum{CALLBACK_COUNT_MAX=4};

extern ConstantString device_name;

extern ConstantString firmware_name;
extern const modular_server::FirmwareInfo firmware_info;

extern const long stimulus_delay;

// Interrupts

// Units

// Properties
// Property values must be long, double, bool, long[], double[], bool[], char[], ConstantString *, (ConstantString *)[]
extern ConstantString stimulus_0_mode_property_name;
enum{STIMULUS_MODE_SUBSET_LENGTH=2};
extern ConstantString stimulus_mode_tone;
extern ConstantString stimulus_mode_noise;
extern modular_server::SubsetMemberType stimulus_mode_ptr_subset[STIMULUS_MODE_SUBSET_LENGTH];
extern const ConstantString * const stimulus_0_mode_ptr_default;

extern ConstantString stimulus_0_polarity_property_name;
enum{STIMULUS_POLARITY_SUBSET_LENGTH=2};
extern ConstantString stimulus_polarity_high;
extern ConstantString stimulus_polarity_low;
extern modular_server::SubsetMemberType stimulus_polarity_ptr_subset[STIMULUS_POLARITY_SUBSET_LENGTH];
extern const ConstantString * const stimulus_0_polarity_ptr_default;

extern ConstantString stimulus_0_frequency_property_name;
extern const long stimulus_frequency_min;
extern const long stimulus_frequency_max;
extern const long stimulus_0_frequency_default;

extern ConstantString stimulus_0_duration_property_name;
extern const long stimulus_duration_min;
extern const long stimulus_duration_max;
extern const long stimulus_0_duration_default;

extern ConstantString stimulus_1_mode_property_name;
extern const ConstantString * const stimulus_1_mode_ptr_default;

extern ConstantString stimulus_1_polarity_property_name;
extern const ConstantString * const stimulus_1_polarity_ptr_default;

extern ConstantString stimulus_1_frequency_property_name;
extern const long stimulus_1_frequency_default;

extern ConstantString stimulus_1_duration_property_name;
extern const long stimulus_1_duration_default;

extern ConstantString stimulus_2_mode_property_name;
extern const ConstantString * const stimulus_2_mode_ptr_default;

extern ConstantString stimulus_2_polarity_property_name;
extern const ConstantString * const stimulus_2_polarity_ptr_default;

extern ConstantString stimulus_2_frequency_property_name;
extern const long stimulus_2_frequency_default;

extern ConstantString stimulus_2_duration_property_name;
extern const long stimulus_2_duration_default;

extern ConstantString stimulus_3_mode_property_name;
extern const ConstantString * const stimulus_3_mode_ptr_default;

extern ConstantString stimulus_3_polarity_property_name;
extern const ConstantString * const stimulus_3_polarity_ptr_default;

extern ConstantString stimulus_3_frequency_property_name;
extern const long stimulus_3_frequency_default;

extern ConstantString stimulus_3_duration_property_name;
extern const long stimulus_3_duration_default;

// Parameters

// Functions

// Callbacks
extern ConstantString stimulus_0_callback_name;

extern ConstantString stimulus_1_callback_name;

extern ConstantString stimulus_2_callback_name;

extern ConstantString stimulus_3_callback_name;

// Errors
}
}
#include "5x3.h"
#include "3x2.h"
#endif
