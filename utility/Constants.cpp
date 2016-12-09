// ----------------------------------------------------------------------------
// Constants.cpp
//
//
// Authors:
// Peter Polidoro polidorop@janelia.hhmi.org
// ----------------------------------------------------------------------------
#include "Constants.h"


namespace auditory_stimulator
{
namespace constants
{
CONSTANT_STRING(device_name,"auditory_stimulator");

CONSTANT_STRING(firmware_name,"AuditoryStimulator");
// Use semantic versioning http://semver.org/
const modular_server::FirmwareInfo firmware_info =
  {
    .name_ptr=&firmware_name,
    .version_major=1,
    .version_minor=0,
    .version_patch=0,
  };

const long stimulus_delay = 10;

// Interrupts

// Units

// Properties
CONSTANT_STRING(stimulus_0_mode_property_name,"stimulus0Mode");
CONSTANT_STRING(stimulus_mode_tone,"TONE");
CONSTANT_STRING(stimulus_mode_noise,"NOISE");
modular_server::SubsetMemberType stimulus_mode_ptr_subset[STIMULUS_MODE_SUBSET_LENGTH] =
  {
    {.cs_ptr=&stimulus_mode_tone},
    {.cs_ptr=&stimulus_mode_noise},
  };
const ConstantString * const stimulus_0_mode_ptr_default = &stimulus_mode_tone;

CONSTANT_STRING(stimulus_0_polarity_property_name,"stimulus0Polarity");
CONSTANT_STRING(stimulus_polarity_high,"HIGH");
CONSTANT_STRING(stimulus_polarity_low,"LOW");
modular_server::SubsetMemberType stimulus_polarity_ptr_subset[STIMULUS_POLARITY_SUBSET_LENGTH] =
  {
    {.cs_ptr=&stimulus_polarity_high},
    {.cs_ptr=&stimulus_polarity_low},
  };
const ConstantString * const stimulus_0_polarity_ptr_default = &stimulus_polarity_high;

CONSTANT_STRING(stimulus_0_frequency_property_name,"stimulus0Frequency");
const long stimulus_frequency_min = audio_controller::constants::frequency_min;
const long stimulus_frequency_max = audio_controller::constants::frequency_max;
const long stimulus_0_frequency_default = 10000;

CONSTANT_STRING(stimulus_0_duration_property_name,"stimulus0Duration");
const long stimulus_duration_min = -1;
const long stimulus_duration_max = 2000000000;
const long stimulus_0_duration_default = -1;

CONSTANT_STRING(stimulus_1_mode_property_name,"stimulus1Mode");
const ConstantString * const stimulus_1_mode_ptr_default = &stimulus_mode_tone;

CONSTANT_STRING(stimulus_1_polarity_property_name,"stimulus1Polarity");
const ConstantString * const stimulus_1_polarity_ptr_default = &stimulus_polarity_high;

CONSTANT_STRING(stimulus_1_frequency_property_name,"stimulus1Frequency");
const long stimulus_1_frequency_default = 15000;

CONSTANT_STRING(stimulus_1_duration_property_name,"stimulus1Duration");
const long stimulus_1_duration_default = -1;

CONSTANT_STRING(stimulus_2_mode_property_name,"stimulus2Mode");
const ConstantString * const stimulus_2_mode_ptr_default = &stimulus_mode_tone;

CONSTANT_STRING(stimulus_2_polarity_property_name,"stimulus2Polarity");
const ConstantString * const stimulus_2_polarity_ptr_default = &stimulus_polarity_high;

CONSTANT_STRING(stimulus_2_frequency_property_name,"stimulus2Frequency");
const long stimulus_2_frequency_default = 20000;

CONSTANT_STRING(stimulus_2_duration_property_name,"stimulus2Duration");
const long stimulus_2_duration_default = -1;

CONSTANT_STRING(stimulus_3_mode_property_name,"stimulus3Mode");
const ConstantString * const stimulus_3_mode_ptr_default = &stimulus_mode_noise;

CONSTANT_STRING(stimulus_3_polarity_property_name,"stimulus3Polarity");
const ConstantString * const stimulus_3_polarity_ptr_default = &stimulus_polarity_high;

CONSTANT_STRING(stimulus_3_frequency_property_name,"stimulus3Frequency");
const long stimulus_3_frequency_default = 1000;

CONSTANT_STRING(stimulus_3_duration_property_name,"stimulus3Duration");
const long stimulus_3_duration_default = -1;

// Parameters

// Functions

// Callbacks
CONSTANT_STRING(stimulus_0_callback_name,"stimulus0");

CONSTANT_STRING(stimulus_1_callback_name,"stimulus1");

CONSTANT_STRING(stimulus_2_callback_name,"stimulus2");

CONSTANT_STRING(stimulus_3_callback_name,"stimulus3");

// Errors
}
}
