// ----------------------------------------------------------------------------
// AuditoryStimulator.h
//
//
// Authors:
// Peter Polidoro peterpolidoro@gmail.com
// ----------------------------------------------------------------------------
#ifndef AUDITORY_STIMULATOR_H
#define AUDITORY_STIMULATOR_H
#include <ArduinoJson.h>
#include <JsonStream.h>
#include <Array.h>
#include <Vector.h>
#include <ConstantVariable.h>
#include <Functor.h>

#include <ModularServer.h>
#include <ModularDeviceBase.h>
#include <AudioController.h>

#include "AuditoryStimulator/Constants.h"


class AuditoryStimulator : public AudioController
{
public:
  AuditoryStimulator();
  virtual void setup();
  virtual void update();

  void stimulus(bool play,
    const ConstantString * const mode_ptr,
    long frequency,
    long duration,
    long volume,
    double bandwidth,
    long pwm_period);

  // Handlers
  virtual void stopPwmHandler(int index);

private:
  modular_server::Property properties_[auditory_stimulator::constants::PROPERTY_COUNT_MAX];
  modular_server::Parameter parameters_[auditory_stimulator::constants::PARAMETER_COUNT_MAX];
  modular_server::Function functions_[auditory_stimulator::constants::FUNCTION_COUNT_MAX];
  modular_server::Callback callbacks_[auditory_stimulator::constants::CALLBACK_COUNT_MAX];

  volatile bool stimulus_0_playing_;
  volatile bool stimulus_1_playing_;
  volatile bool stimulus_2_playing_;
  volatile bool stimulus_3_playing_;

  // Handlers
  void stimulus0Handler(modular_server::Pin * pin_ptr);
  void stimulus1Handler(modular_server::Pin * pin_ptr);
  void stimulus2Handler(modular_server::Pin * pin_ptr);
  void stimulus3Handler(modular_server::Pin * pin_ptr);

};

#endif
