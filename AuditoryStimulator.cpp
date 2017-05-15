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

  // Variable Setup
  stimulus_0_playing_ = false;
  stimulus_1_playing_ = false;
  stimulus_2_playing_ = false;
  stimulus_3_playing_ = false;

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
  // stimulus_0
  modular_server::Property & stimulus_0_mode_property = modular_server_.createProperty(constants::stimulus_0_mode_property_name,constants::stimulus_0_mode_ptr_default);
  stimulus_0_mode_property.setSubset(constants::stimulus_mode_ptr_subset);

  modular_server::Property & stimulus_0_polarity_property = modular_server_.createProperty(constants::stimulus_0_polarity_property_name,constants::stimulus_0_polarity_ptr_default);
  stimulus_0_polarity_property.setSubset(constants::stimulus_polarity_ptr_subset);

  modular_server::Property & stimulus_0_frequency_property = modular_server_.createProperty(constants::stimulus_0_frequency_property_name,constants::stimulus_0_frequency_default);
  stimulus_0_frequency_property.setUnits(audio_controller::constants::hz_units);
  stimulus_0_frequency_property.setRange(constants::stimulus_frequency_min,constants::stimulus_frequency_max);

  modular_server::Property & stimulus_0_duration_property = modular_server_.createProperty(constants::stimulus_0_duration_property_name,constants::stimulus_0_duration_default);
  stimulus_0_duration_property.setUnits(audio_controller::constants::ms_units);
  stimulus_0_duration_property.setRange(constants::stimulus_duration_min,constants::stimulus_duration_max);

  modular_server::Property & stimulus_0_volume_property = modular_server_.createProperty(constants::stimulus_0_volume_property_name,constants::stimulus_0_volume_default);
  stimulus_0_volume_property.setRange(constants::stimulus_volume_min,constants::stimulus_volume_max);

  modular_server::Property & stimulus_0_bandwidth_property = modular_server_.createProperty(constants::stimulus_0_bandwidth_property_name,constants::stimulus_0_bandwidth_default);
  stimulus_0_bandwidth_property.setRange(constants::stimulus_bandwidth_min,constants::stimulus_bandwidth_max);

  modular_server::Property & stimulus_0_pwm_period_property = modular_server_.createProperty(constants::stimulus_0_pwm_period_property_name,constants::stimulus_0_pwm_period_default);
  stimulus_0_pwm_period_property.setUnits(audio_controller::constants::ms_units);
  stimulus_0_pwm_period_property.setRange(constants::stimulus_pwm_period_min,constants::stimulus_pwm_period_max);

  // stimulus_1
  modular_server::Property & stimulus_1_mode_property = modular_server_.createProperty(constants::stimulus_1_mode_property_name,constants::stimulus_1_mode_ptr_default);
  stimulus_1_mode_property.setSubset(constants::stimulus_mode_ptr_subset);

  modular_server::Property & stimulus_1_polarity_property = modular_server_.createProperty(constants::stimulus_1_polarity_property_name,constants::stimulus_1_polarity_ptr_default);
  stimulus_1_polarity_property.setSubset(constants::stimulus_polarity_ptr_subset);

  modular_server::Property & stimulus_1_frequency_property = modular_server_.createProperty(constants::stimulus_1_frequency_property_name,constants::stimulus_1_frequency_default);
  stimulus_1_frequency_property.setUnits(audio_controller::constants::hz_units);
  stimulus_1_frequency_property.setRange(constants::stimulus_frequency_min,constants::stimulus_frequency_max);

  modular_server::Property & stimulus_1_duration_property = modular_server_.createProperty(constants::stimulus_1_duration_property_name,constants::stimulus_1_duration_default);
  stimulus_1_duration_property.setUnits(audio_controller::constants::ms_units);
  stimulus_1_duration_property.setRange(constants::stimulus_duration_min,constants::stimulus_duration_max);

  modular_server::Property & stimulus_1_volume_property = modular_server_.createProperty(constants::stimulus_1_volume_property_name,constants::stimulus_1_volume_default);
  stimulus_1_volume_property.setRange(constants::stimulus_volume_min,constants::stimulus_volume_max);

  modular_server::Property & stimulus_1_bandwidth_property = modular_server_.createProperty(constants::stimulus_1_bandwidth_property_name,constants::stimulus_1_bandwidth_default);
  stimulus_1_bandwidth_property.setRange(constants::stimulus_bandwidth_min,constants::stimulus_bandwidth_max);

  modular_server::Property & stimulus_1_pwm_period_property = modular_server_.createProperty(constants::stimulus_1_pwm_period_property_name,constants::stimulus_1_pwm_period_default);
  stimulus_1_pwm_period_property.setUnits(audio_controller::constants::ms_units);
  stimulus_1_pwm_period_property.setRange(constants::stimulus_pwm_period_min,constants::stimulus_pwm_period_max);

  // stimulus_2
  modular_server::Property & stimulus_2_mode_property = modular_server_.createProperty(constants::stimulus_2_mode_property_name,constants::stimulus_2_mode_ptr_default);
  stimulus_2_mode_property.setSubset(constants::stimulus_mode_ptr_subset);

  modular_server::Property & stimulus_2_polarity_property = modular_server_.createProperty(constants::stimulus_2_polarity_property_name,constants::stimulus_2_polarity_ptr_default);
  stimulus_2_polarity_property.setSubset(constants::stimulus_polarity_ptr_subset);

  modular_server::Property & stimulus_2_frequency_property = modular_server_.createProperty(constants::stimulus_2_frequency_property_name,constants::stimulus_2_frequency_default);
  stimulus_2_frequency_property.setUnits(audio_controller::constants::hz_units);
  stimulus_2_frequency_property.setRange(constants::stimulus_frequency_min,constants::stimulus_frequency_max);

  modular_server::Property & stimulus_2_duration_property = modular_server_.createProperty(constants::stimulus_2_duration_property_name,constants::stimulus_2_duration_default);
  stimulus_2_duration_property.setUnits(audio_controller::constants::ms_units);
  stimulus_2_duration_property.setRange(constants::stimulus_duration_min,constants::stimulus_duration_max);

  modular_server::Property & stimulus_2_volume_property = modular_server_.createProperty(constants::stimulus_2_volume_property_name,constants::stimulus_2_volume_default);
  stimulus_2_volume_property.setRange(constants::stimulus_volume_min,constants::stimulus_volume_max);

  modular_server::Property & stimulus_2_bandwidth_property = modular_server_.createProperty(constants::stimulus_2_bandwidth_property_name,constants::stimulus_2_bandwidth_default);
  stimulus_2_bandwidth_property.setRange(constants::stimulus_bandwidth_min,constants::stimulus_bandwidth_max);

  modular_server::Property & stimulus_2_pwm_period_property = modular_server_.createProperty(constants::stimulus_2_pwm_period_property_name,constants::stimulus_2_pwm_period_default);
  stimulus_2_pwm_period_property.setUnits(audio_controller::constants::ms_units);
  stimulus_2_pwm_period_property.setRange(constants::stimulus_pwm_period_min,constants::stimulus_pwm_period_max);

  // stimulus_3
  modular_server::Property & stimulus_3_mode_property = modular_server_.createProperty(constants::stimulus_3_mode_property_name,constants::stimulus_3_mode_ptr_default);
  stimulus_3_mode_property.setSubset(constants::stimulus_mode_ptr_subset);

  modular_server::Property & stimulus_3_polarity_property = modular_server_.createProperty(constants::stimulus_3_polarity_property_name,constants::stimulus_3_polarity_ptr_default);
  stimulus_3_polarity_property.setSubset(constants::stimulus_polarity_ptr_subset);

  modular_server::Property & stimulus_3_frequency_property = modular_server_.createProperty(constants::stimulus_3_frequency_property_name,constants::stimulus_3_frequency_default);
  stimulus_3_frequency_property.setUnits(audio_controller::constants::hz_units);
  stimulus_3_frequency_property.setRange(constants::stimulus_frequency_min,constants::stimulus_frequency_max);

  modular_server::Property & stimulus_3_duration_property = modular_server_.createProperty(constants::stimulus_3_duration_property_name,constants::stimulus_3_duration_default);
  stimulus_3_duration_property.setUnits(audio_controller::constants::ms_units);
  stimulus_3_duration_property.setRange(constants::stimulus_duration_min,constants::stimulus_duration_max);

  modular_server::Property & stimulus_3_volume_property = modular_server_.createProperty(constants::stimulus_3_volume_property_name,constants::stimulus_3_volume_default);
  stimulus_3_volume_property.setRange(constants::stimulus_volume_min,constants::stimulus_volume_max);

  modular_server::Property & stimulus_3_bandwidth_property = modular_server_.createProperty(constants::stimulus_3_bandwidth_property_name,constants::stimulus_3_bandwidth_default);
  stimulus_3_bandwidth_property.setRange(constants::stimulus_bandwidth_min,constants::stimulus_bandwidth_max);

  modular_server::Property & stimulus_3_pwm_period_property = modular_server_.createProperty(constants::stimulus_3_pwm_period_property_name,constants::stimulus_3_pwm_period_default);
  stimulus_3_pwm_period_property.setUnits(audio_controller::constants::ms_units);
  stimulus_3_pwm_period_property.setRange(constants::stimulus_pwm_period_min,constants::stimulus_pwm_period_max);

  // Parameters

  // Functions

  // Callbacks
  modular_server::Callback & stimulus_0_callback = modular_server_.createCallback(constants::stimulus_0_callback_name);
  stimulus_0_callback.attachFunctor(makeFunctor((Functor1<modular_server::Interrupt *> *)0,*this,&AuditoryStimulator::stimulus0Handler));
  stimulus_0_callback.addProperty(stimulus_0_mode_property);
  stimulus_0_callback.addProperty(stimulus_0_polarity_property);
  stimulus_0_callback.addProperty(stimulus_0_frequency_property);
  stimulus_0_callback.addProperty(stimulus_0_duration_property);
  stimulus_0_callback.addProperty(stimulus_0_volume_property);
  stimulus_0_callback.addProperty(stimulus_0_bandwidth_property);
  stimulus_0_callback.addProperty(stimulus_0_pwm_period_property);
#if defined(__MK20DX256__)
  stimulus_0_callback.attachTo(audio_controller::constants::int_a_interrupt_name,modular_server::interrupt::mode_change);
#endif

  modular_server::Callback & stimulus_1_callback = modular_server_.createCallback(constants::stimulus_1_callback_name);
  stimulus_1_callback.attachFunctor(makeFunctor((Functor1<modular_server::Interrupt *> *)0,*this,&AuditoryStimulator::stimulus1Handler));
  stimulus_1_callback.addProperty(stimulus_1_mode_property);
  stimulus_1_callback.addProperty(stimulus_1_polarity_property);
  stimulus_1_callback.addProperty(stimulus_1_frequency_property);
  stimulus_1_callback.addProperty(stimulus_1_duration_property);
  stimulus_1_callback.addProperty(stimulus_1_volume_property);
  stimulus_1_callback.addProperty(stimulus_1_bandwidth_property);
  stimulus_1_callback.addProperty(stimulus_1_pwm_period_property);
#if defined(__MK20DX256__)
  stimulus_1_callback.attachTo(audio_controller::constants::int_b_interrupt_name,modular_server::interrupt::mode_change);
#endif

  modular_server::Callback & stimulus_2_callback = modular_server_.createCallback(constants::stimulus_2_callback_name);
  stimulus_2_callback.attachFunctor(makeFunctor((Functor1<modular_server::Interrupt *> *)0,*this,&AuditoryStimulator::stimulus2Handler));
  stimulus_2_callback.addProperty(stimulus_2_mode_property);
  stimulus_2_callback.addProperty(stimulus_2_polarity_property);
  stimulus_2_callback.addProperty(stimulus_2_frequency_property);
  stimulus_2_callback.addProperty(stimulus_2_duration_property);
  stimulus_2_callback.addProperty(stimulus_2_volume_property);
  stimulus_2_callback.addProperty(stimulus_2_bandwidth_property);
  stimulus_2_callback.addProperty(stimulus_2_pwm_period_property);
#if defined(__MK20DX256__)
  stimulus_2_callback.attachTo(audio_controller::constants::int_c_interrupt_name,modular_server::interrupt::mode_change);
#endif

  modular_server::Callback & stimulus_3_callback = modular_server_.createCallback(constants::stimulus_3_callback_name);
  stimulus_3_callback.attachFunctor(makeFunctor((Functor1<modular_server::Interrupt *> *)0,*this,&AuditoryStimulator::stimulus3Handler));
  stimulus_3_callback.addProperty(stimulus_3_mode_property);
  stimulus_3_callback.addProperty(stimulus_3_polarity_property);
  stimulus_3_callback.addProperty(stimulus_3_frequency_property);
  stimulus_3_callback.addProperty(stimulus_3_duration_property);
  stimulus_3_callback.addProperty(stimulus_3_volume_property);
  stimulus_3_callback.addProperty(stimulus_3_bandwidth_property);
  stimulus_3_callback.addProperty(stimulus_3_pwm_period_property);
#if defined(__MK20DX256__)
  stimulus_3_callback.attachTo(audio_controller::constants::int_d_interrupt_name,modular_server::interrupt::mode_change);
#endif

}

void AuditoryStimulator::update()
{
  // Parent Update
  AudioController::update();
}

void AuditoryStimulator::stimulus(bool play,
                                  const ConstantString * mode_ptr,
                                  long frequency,
                                  long duration,
                                  double volume,
                                  double bandwidth,
                                  long pwm_period)
{
  stimulus_0_playing_ = false;
  stimulus_1_playing_ = false;
  stimulus_2_playing_ = false;
  stimulus_3_playing_ = false;
  stopAllPwm();
  stop();
  if (play)
  {
    if (mode_ptr == &constants::stimulus_mode_tone)
    {
      if (duration <= 0)
      {
        playToneAt(frequency,
                   &audio_controller::constants::speaker_all,
                   volume);
      }
      else
      {
        addTonePwmAt(frequency,
                     &audio_controller::constants::speaker_all,
                     volume,
                     constants::stimulus_delay,
                     duration*2,
                     duration,
                     1);
      }
    }
    else if (mode_ptr == &constants::stimulus_mode_noise)
    {
      if (duration <= 0)
      {
        playNoiseAt(&audio_controller::constants::speaker_all,
                    volume);
      }
      else
      {
        addNoisePwmAt(&audio_controller::constants::speaker_all,
                      volume,
                      constants::stimulus_delay,
                      duration*2,
                      duration,
                      1);
      }
    }
    else if (mode_ptr == &constants::stimulus_mode_filtered_noise)
    {
      if (duration <= 0)
      {
        playFilteredNoiseAt(frequency,
                            bandwidth,
                            &audio_controller::constants::speaker_all,
                            volume);
      }
      else
      {
        addFilteredNoisePwmAt(frequency,
                              bandwidth,
                              &audio_controller::constants::speaker_all,
                              volume,
                              constants::stimulus_delay,
                              duration*2,
                              duration,
                              1);
      }
    }
    else if (mode_ptr == &constants::stimulus_mode_tone_pwm)
    {
      if (duration <= 0)
      {
        startTonePwmAt(frequency,
                       &audio_controller::constants::speaker_all,
                       volume,
                       constants::stimulus_delay,
                       pwm_period,
                       pwm_period/2);
      }
      else
      {
        addTonePwmAt(frequency,
                     &audio_controller::constants::speaker_all,
                     volume,
                     constants::stimulus_delay,
                     pwm_period,
                     pwm_period/2,
                     duration/pwm_period);
      }
    }
    else if (mode_ptr == &constants::stimulus_mode_noise_pwm)
    {
      if (duration <= 0)
      {
        startNoisePwmAt(&audio_controller::constants::speaker_all,
                        volume,
                        constants::stimulus_delay,
                        pwm_period,
                        pwm_period/2);
      }
      else
      {
        addNoisePwmAt(&audio_controller::constants::speaker_all,
                      volume,
                      constants::stimulus_delay,
                      pwm_period,
                      pwm_period/2,
                      duration/pwm_period);
      }
    }
    else if (mode_ptr == &constants::stimulus_mode_filtered_noise_pwm)
    {
      if (duration <= 0)
      {
        startFilteredNoisePwmAt(frequency,
                                bandwidth,
                                &audio_controller::constants::speaker_all,
                                volume,
                                constants::stimulus_delay,
                                pwm_period,
                                pwm_period/2);
      }
      else
      {
        addFilteredNoisePwmAt(frequency,
                              bandwidth,
                              &audio_controller::constants::speaker_all,
                              volume,
                              constants::stimulus_delay,
                              pwm_period,
                              pwm_period/2,
                              duration/pwm_period);
      }
    }
  }
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
// modular_server_.property(property_name).getElementValue(element_index,value) value type must match the property array element default type
// modular_server_.property(property_name).setElementValue(element_index,value) value type must match the property array element default type

void AuditoryStimulator::stopPwmHandler(int index)
{
  AudioController::stopPwmHandler(index);
  stimulus_0_playing_ = false;
  stimulus_1_playing_ = false;
  stimulus_2_playing_ = false;
  stimulus_3_playing_ = false;
}

void AuditoryStimulator::stimulus0Handler(modular_server::Interrupt * interrupt_ptr)
{
  const ConstantString * stimulus_mode_ptr;
  modular_server_.property(constants::stimulus_0_mode_property_name).getValue(stimulus_mode_ptr);
  const ConstantString * stimulus_polarity_ptr;
  modular_server_.property(constants::stimulus_0_polarity_property_name).getValue(stimulus_polarity_ptr);
  long frequency;
  modular_server_.property(constants::stimulus_0_frequency_property_name).getValue(frequency);
  long duration;
  modular_server_.property(constants::stimulus_0_duration_property_name).getValue(duration);
  double volume;
  modular_server_.property(constants::stimulus_0_volume_property_name).getValue(volume);
  double bandwidth;
  modular_server_.property(constants::stimulus_0_bandwidth_property_name).getValue(bandwidth);
  long pwm_period;
  modular_server_.property(constants::stimulus_0_pwm_period_property_name).getValue(pwm_period);
  bool play = false;
  if (interrupt_ptr)
  {
    int pin_value = digitalRead(interrupt_ptr->getPin());
    if (((pin_value == HIGH) && (stimulus_polarity_ptr == &constants::stimulus_polarity_high)) ||
        ((pin_value == LOW) && (stimulus_polarity_ptr == &constants::stimulus_polarity_low)))
    {
      play = true;
    }
  }
  else
  {
    play = !stimulus_0_playing_;
  }
  if ((!play) && (!stimulus_0_playing_))
  {
    return;
  }
  stimulus(play,
           stimulus_mode_ptr,
           frequency,
           duration,
           volume,
           bandwidth,
           pwm_period);
  stimulus_0_playing_ = play;
}

void AuditoryStimulator::stimulus1Handler(modular_server::Interrupt * interrupt_ptr)
{
  const ConstantString * stimulus_mode_ptr;
  modular_server_.property(constants::stimulus_1_mode_property_name).getValue(stimulus_mode_ptr);
  const ConstantString * stimulus_polarity_ptr;
  modular_server_.property(constants::stimulus_1_polarity_property_name).getValue(stimulus_polarity_ptr);
  long frequency;
  modular_server_.property(constants::stimulus_1_frequency_property_name).getValue(frequency);
  long duration;
  modular_server_.property(constants::stimulus_1_duration_property_name).getValue(duration);
  double volume;
  modular_server_.property(constants::stimulus_1_volume_property_name).getValue(volume);
  double bandwidth;
  modular_server_.property(constants::stimulus_1_bandwidth_property_name).getValue(bandwidth);
  long pwm_period;
  modular_server_.property(constants::stimulus_1_pwm_period_property_name).getValue(pwm_period);
  bool play = false;
  if (interrupt_ptr)
  {
    int pin_value = digitalRead(interrupt_ptr->getPin());
    if (((pin_value == HIGH) && (stimulus_polarity_ptr == &constants::stimulus_polarity_high)) ||
        ((pin_value == LOW) && (stimulus_polarity_ptr == &constants::stimulus_polarity_low)))
    {
      play = true;
    }
  }
  else
  {
    play = !stimulus_1_playing_;
  }
  if ((!play) && (!stimulus_1_playing_))
  {
    return;
  }
  stimulus(play,
           stimulus_mode_ptr,
           frequency,
           duration,
           volume,
           bandwidth,
           pwm_period);
  stimulus_1_playing_ = play;
}

void AuditoryStimulator::stimulus2Handler(modular_server::Interrupt * interrupt_ptr)
{
  const ConstantString * stimulus_mode_ptr;
  modular_server_.property(constants::stimulus_2_mode_property_name).getValue(stimulus_mode_ptr);
  const ConstantString * stimulus_polarity_ptr;
  modular_server_.property(constants::stimulus_2_polarity_property_name).getValue(stimulus_polarity_ptr);
  long frequency;
  modular_server_.property(constants::stimulus_2_frequency_property_name).getValue(frequency);
  long duration;
  modular_server_.property(constants::stimulus_2_duration_property_name).getValue(duration);
  double volume;
  modular_server_.property(constants::stimulus_2_volume_property_name).getValue(volume);
  double bandwidth;
  modular_server_.property(constants::stimulus_2_bandwidth_property_name).getValue(bandwidth);
  long pwm_period;
  modular_server_.property(constants::stimulus_2_pwm_period_property_name).getValue(pwm_period);
  bool play = false;
  if (interrupt_ptr)
  {
    int pin_value = digitalRead(interrupt_ptr->getPin());
    if (((pin_value == HIGH) && (stimulus_polarity_ptr == &constants::stimulus_polarity_high)) ||
        ((pin_value == LOW) && (stimulus_polarity_ptr == &constants::stimulus_polarity_low)))
    {
      play = true;
    }
  }
  else
  {
    play = !stimulus_2_playing_;
  }
  if ((!play) && (!stimulus_2_playing_))
  {
    return;
  }
  stimulus(play,
           stimulus_mode_ptr,
           frequency,
           duration,
           volume,
           bandwidth,
           pwm_period);
  stimulus_2_playing_ = play;
}

void AuditoryStimulator::stimulus3Handler(modular_server::Interrupt * interrupt_ptr)
{
  const ConstantString * stimulus_mode_ptr;
  modular_server_.property(constants::stimulus_3_mode_property_name).getValue(stimulus_mode_ptr);
  const ConstantString * stimulus_polarity_ptr;
  modular_server_.property(constants::stimulus_3_polarity_property_name).getValue(stimulus_polarity_ptr);
  long frequency;
  modular_server_.property(constants::stimulus_3_frequency_property_name).getValue(frequency);
  long duration;
  modular_server_.property(constants::stimulus_3_duration_property_name).getValue(duration);
  double volume;
  modular_server_.property(constants::stimulus_3_volume_property_name).getValue(volume);
  double bandwidth;
  modular_server_.property(constants::stimulus_3_bandwidth_property_name).getValue(bandwidth);
  long pwm_period;
  modular_server_.property(constants::stimulus_3_pwm_period_property_name).getValue(pwm_period);
  bool play = false;
  if (interrupt_ptr)
  {
    int pin_value = digitalRead(interrupt_ptr->getPin());
    if (((pin_value == HIGH) && (stimulus_polarity_ptr == &constants::stimulus_polarity_high)) ||
        ((pin_value == LOW) && (stimulus_polarity_ptr == &constants::stimulus_polarity_low)))
    {
      play = true;
    }
  }
  else
  {
    play = !stimulus_3_playing_;
  }
  if ((!play) && (!stimulus_3_playing_))
  {
    return;
  }
  stimulus(play,
           stimulus_mode_ptr,
           frequency,
           duration,
           volume,
           bandwidth,
           pwm_period);
  stimulus_3_playing_ = play;
}
