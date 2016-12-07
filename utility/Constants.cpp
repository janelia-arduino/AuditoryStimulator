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

// Interrupts

// Units

// Properties

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
