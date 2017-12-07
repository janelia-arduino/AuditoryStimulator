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
    .version_patch=3,
  };

const long stimulus_delay = 10;

// Interrupts

// Units

// Properties
// stimulus_0
CONSTANT_STRING(stimulus_0_mode_property_name,"stimulus0Mode");
CONSTANT_STRING(stimulus_mode_tone,"TONE");
CONSTANT_STRING(stimulus_mode_noise,"NOISE");
CONSTANT_STRING(stimulus_mode_filtered_noise,"FILTERED_NOISE");
CONSTANT_STRING(stimulus_mode_tone_pwm,"TONE_PWM");
CONSTANT_STRING(stimulus_mode_noise_pwm,"NOISE_PWM");
CONSTANT_STRING(stimulus_mode_filtered_noise_pwm,"FILTERED_NOISE_PWM");
modular_server::SubsetMemberType stimulus_mode_ptr_subset[STIMULUS_MODE_SUBSET_LENGTH] =
  {
    {.cs_ptr=&stimulus_mode_tone},
    {.cs_ptr=&stimulus_mode_noise},
    {.cs_ptr=&stimulus_mode_filtered_noise},
    {.cs_ptr=&stimulus_mode_tone_pwm},
    {.cs_ptr=&stimulus_mode_noise_pwm},
    {.cs_ptr=&stimulus_mode_filtered_noise_pwm},
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

CONSTANT_STRING(stimulus_0_volume_property_name,"stimulus0Volume");
const double stimulus_volume_min = audio_controller::constants::volume_min;
const double stimulus_volume_max = audio_controller::constants::volume_max;
const double stimulus_0_volume_default = audio_controller::constants::volume_default;

CONSTANT_STRING(stimulus_0_bandwidth_property_name,"stimulus0Bandwidth");
const double stimulus_bandwidth_min = audio_controller::constants::bandwidth_min;
const double stimulus_bandwidth_max = audio_controller::constants::bandwidth_max;
const double stimulus_0_bandwidth_default = 0.5;

CONSTANT_STRING(stimulus_0_pwm_period_property_name,"stimulus0PwmPeriod");
const long stimulus_pwm_period_min = 2;
const long stimulus_pwm_period_max = 10000;
const long stimulus_0_pwm_period_default = 100;

// stimulus_1
CONSTANT_STRING(stimulus_1_mode_property_name,"stimulus1Mode");
const ConstantString * const stimulus_1_mode_ptr_default = &stimulus_mode_tone;

CONSTANT_STRING(stimulus_1_polarity_property_name,"stimulus1Polarity");
const ConstantString * const stimulus_1_polarity_ptr_default = &stimulus_polarity_high;

CONSTANT_STRING(stimulus_1_frequency_property_name,"stimulus1Frequency");
const long stimulus_1_frequency_default = 15000;

CONSTANT_STRING(stimulus_1_duration_property_name,"stimulus1Duration");
const long stimulus_1_duration_default = -1;

CONSTANT_STRING(stimulus_1_volume_property_name,"stimulus1Volume");
const double stimulus_1_volume_default = audio_controller::constants::volume_default;

CONSTANT_STRING(stimulus_1_bandwidth_property_name,"stimulus1Bandwidth");
const double stimulus_1_bandwidth_default = stimulus_0_bandwidth_default;

CONSTANT_STRING(stimulus_1_pwm_period_property_name,"stimulus1PwmPeriod");
const long stimulus_1_pwm_period_default = stimulus_0_pwm_period_default;

// stimulus_2
CONSTANT_STRING(stimulus_2_mode_property_name,"stimulus2Mode");
const ConstantString * const stimulus_2_mode_ptr_default = &stimulus_mode_tone;

CONSTANT_STRING(stimulus_2_polarity_property_name,"stimulus2Polarity");
const ConstantString * const stimulus_2_polarity_ptr_default = &stimulus_polarity_high;

CONSTANT_STRING(stimulus_2_frequency_property_name,"stimulus2Frequency");
const long stimulus_2_frequency_default = 7500;

CONSTANT_STRING(stimulus_2_duration_property_name,"stimulus2Duration");
const long stimulus_2_duration_default = -1;

CONSTANT_STRING(stimulus_2_volume_property_name,"stimulus2Volume");
const double stimulus_2_volume_default = audio_controller::constants::volume_default;

CONSTANT_STRING(stimulus_2_bandwidth_property_name,"stimulus2Bandwidth");
const double stimulus_2_bandwidth_default = stimulus_0_bandwidth_default;

CONSTANT_STRING(stimulus_2_pwm_period_property_name,"stimulus2PwmPeriod");
const long stimulus_2_pwm_period_default = stimulus_0_pwm_period_default;

// stimulus_3
CONSTANT_STRING(stimulus_3_mode_property_name,"stimulus3Mode");
const ConstantString * const stimulus_3_mode_ptr_default = &stimulus_mode_noise;

CONSTANT_STRING(stimulus_3_polarity_property_name,"stimulus3Polarity");
const ConstantString * const stimulus_3_polarity_ptr_default = &stimulus_polarity_high;

CONSTANT_STRING(stimulus_3_frequency_property_name,"stimulus3Frequency");
const long stimulus_3_frequency_default = 1000;

CONSTANT_STRING(stimulus_3_duration_property_name,"stimulus3Duration");
const long stimulus_3_duration_default = -1;

CONSTANT_STRING(stimulus_3_volume_property_name,"stimulus3Volume");
const double stimulus_3_volume_default = audio_controller::constants::volume_default;

CONSTANT_STRING(stimulus_3_bandwidth_property_name,"stimulus3Bandwidth");
const double stimulus_3_bandwidth_default = stimulus_0_bandwidth_default;

CONSTANT_STRING(stimulus_3_pwm_period_property_name,"stimulus3PwmPeriod");
const long stimulus_3_pwm_period_default = stimulus_0_pwm_period_default;

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
