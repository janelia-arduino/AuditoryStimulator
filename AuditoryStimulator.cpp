// ----------------------------------------------------------------------------
// AuditoryStimulator.cpp
//
//
// Authors:
// Peter Polidoro polidorop@janelia.hhmi.org
// ----------------------------------------------------------------------------
#include "AuditoryStimulator.h"


using namespace auditory_stimulator;

AuditoryStimulator::AuditoryStimulator()
{
}

void AuditoryStimulator::setup()
{
  // Parent Setup
  AudioController::setup();

  // Pin Setup

  // Set Device ID
  modular_server_.setDeviceName(constants::device_name);

  // Add Hardware

  // Interrupts

  // Add Firmware
  modular_server_.addFirmware(constants::firmware_info,
                              properties_,
                              parameters_,
                              functions_,
                              callbacks_);

  // Properties

  // Parameters

  // Functions

  // Callbacks
  modular_server::Callback & stimulus_0_callback = modular_server_.createCallback(constants::stimulus_0_callback_name);
  stimulus_0_callback.attachFunctor(makeFunctor((Functor0 *)0,*this,&AuditoryStimulator::stimulus0Handler));
  // stimulus_0_callback.addProperty(rung_up_count_lower_property);
#if defined(__MK20DX256__)
  stimulus_0_callback.attachTo(audio_controller::constants::int_a_interrupt_name,modular_server::interrupt::mode_change);
#endif

}

void AuditoryStimulator::update()
{
  // Parent Update
  AudioController::update();
}

// Handlers must be non-blocking (avoid 'delay')
//
// modular_server_.parameter(parameter_name).getValue(value) value type must be either:
// fixed-point number (int, long, etc.)
// floating-point number (float, double)
// bool
// const char *
// ArduinoJson::JsonArray *
// ArduinoJson::JsonObject *
//
// For more info read about ArduinoJson parsing https://github.com/janelia-arduino/ArduinoJson
//
// modular_server_.property(property_name).getValue(value) value type must match the property default type
// modular_server_.property(property_name).setValue(value) value type must match the property default type
// modular_server_.property(property_name).getElementValue(value) value type must match the property array element default type
// modular_server_.property(property_name).setElementValue(value) value type must match the property array element default type

void AuditoryStimulator::stimulus0Handler()
{
}
