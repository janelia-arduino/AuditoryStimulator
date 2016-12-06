// ----------------------------------------------------------------------------
// AuditoryStimulator.h
//
//
// Authors:
// Peter Polidoro polidorop@janelia.hhmi.org
// ----------------------------------------------------------------------------
#ifndef AUDITORY_STIMULATOR_H
#define AUDITORY_STIMULATOR_H
#include "Flash.h"
#include <EEPROM.h>
#include "Streaming.h"
#include "ArduinoJson.h"
#include "JsonSanitizer.h"
#include "JsonStream.h"
#include "Array.h"
#include "Vector.h"
#include "MemoryFree.h"
#include "ConstantVariable.h"
#include "SavedVariable.h"
#include "Functor.h"
#include "IndexedContainer.h"
#include "FunctorCallbacks.h"

#include "EventController.h"

#include "ModularServer.h"
#include "ModularDevice.h"
#include "AudioController.h"

#include "utility/Constants.h"


class AuditoryStimulator : public AudioController
{
public:
  AuditoryStimulator();
  virtual void setup();
  virtual void update();
  void flip(const ConstantString * const polarity_ptr);

  // Handlers
  virtual void stopPwmHandler(int index);

private:
  modular_server::Property properties_[auditory_stimulator::constants::PROPERTY_COUNT_MAX];
  modular_server::Parameter parameters_[auditory_stimulator::constants::PARAMETER_COUNT_MAX];
  modular_server::Function functions_[auditory_stimulator::constants::FUNCTION_COUNT_MAX];
  modular_server::Callback callbacks_[auditory_stimulator::constants::CALLBACK_COUNT_MAX];

  volatile bool flipping_;
  volatile bool flip_enabled_;
  volatile long flipper_up_inc_;
  volatile long flipper_down_inc_;
  volatile bool flipper_is_up_;
  volatile long flipper_up_count_;

  // Handlers
  void flipEnabledHandler();
  void enableFlipHandler();
  void disableFlipHandler();
  void flipHandler();

};

#endif