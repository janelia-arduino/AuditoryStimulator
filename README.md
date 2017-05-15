# AuditoryStimulator

Authors:

    Peter Polidoro <polidorop@janelia.hhmi.org>

License:

    BSD

## Ancestors

[ModularServer](https://github.com/janelia-arduino/ModularServer)

[ModularDeviceBase](https://github.com/janelia-arduino/ModularDeviceBase)

[AudioController](https://github.com/janelia-arduino/AudioController)

## Clients

## Devices

[modular_device_base](https://github.com/janelia-modular-devices/modular_device_base.git)

[audio_controller](https://github.com/janelia-modular-devices/audio_controller.git)

## API

```json
{
  "id":"getApi",
  "result":{
    "firmware":["AuditoryStimulator"],
    "functions":[],
    "parameters":[],
    "properties":[
      "stimulus0Mode",
      "stimulus0Polarity",
      "stimulus0Frequency",
      "stimulus0Duration",
      "stimulus0Volume",
      "stimulus0Bandwidth",
      "stimulus0PwmPeriod",
      "stimulus1Mode",
      "stimulus1Polarity",
      "stimulus1Frequency",
      "stimulus1Duration",
      "stimulus1Volume",
      "stimulus1Bandwidth",
      "stimulus1PwmPeriod",
      "stimulus2Mode",
      "stimulus2Polarity",
      "stimulus2Frequency",
      "stimulus2Duration",
      "stimulus2Volume",
      "stimulus2Bandwidth",
      "stimulus2PwmPeriod",
      "stimulus3Mode",
      "stimulus3Polarity",
      "stimulus3Frequency",
      "stimulus3Duration",
      "stimulus3Volume",
      "stimulus3Bandwidth",
      "stimulus3PwmPeriod"
    ],
    "callbacks":[
      "stimulus0",
      "stimulus1",
      "stimulus2",
      "stimulus3"
    ]
  }
}
```

## API Verbose

```json
{
  "id":"getApiVerbose",
  "result":{
    "firmware":["AuditoryStimulator"],
    "functions":[],
    "parameters":[],
    "properties":[
      {
        "name":"stimulus0Mode",
        "type":"string"
      },
      {
        "name":"stimulus0Polarity",
        "type":"string"
      },
      {
        "name":"stimulus0Frequency",
        "units":"Hz",
        "type":"long"
      },
      {
        "name":"stimulus0Duration",
        "units":"ms",
        "type":"long"
      },
      {
        "name":"stimulus0Volume",
        "type":"double"
      },
      {
        "name":"stimulus0Bandwidth",
        "type":"double"
      },
      {
        "name":"stimulus0PwmPeriod",
        "units":"ms",
        "type":"long"
      },
      {
        "name":"stimulus1Mode",
        "type":"string"
      },
      {
        "name":"stimulus1Polarity",
        "type":"string"
      },
      {
        "name":"stimulus1Frequency",
        "units":"Hz",
        "type":"long"
      },
      {
        "name":"stimulus1Duration",
        "units":"ms",
        "type":"long"
      },
      {
        "name":"stimulus1Volume",
        "type":"double"
      },
      {
        "name":"stimulus1Bandwidth",
        "type":"double"
      },
      {
        "name":"stimulus1PwmPeriod",
        "units":"ms",
        "type":"long"
      },
      {
        "name":"stimulus2Mode",
        "type":"string"
      },
      {
        "name":"stimulus2Polarity",
        "type":"string"
      },
      {
        "name":"stimulus2Frequency",
        "units":"Hz",
        "type":"long"
      },
      {
        "name":"stimulus2Duration",
        "units":"ms",
        "type":"long"
      },
      {
        "name":"stimulus2Volume",
        "type":"double"
      },
      {
        "name":"stimulus2Bandwidth",
        "type":"double"
      },
      {
        "name":"stimulus2PwmPeriod",
        "units":"ms",
        "type":"long"
      },
      {
        "name":"stimulus3Mode",
        "type":"string"
      },
      {
        "name":"stimulus3Polarity",
        "type":"string"
      },
      {
        "name":"stimulus3Frequency",
        "units":"Hz",
        "type":"long"
      },
      {
        "name":"stimulus3Duration",
        "units":"ms",
        "type":"long"
      },
      {
        "name":"stimulus3Volume",
        "type":"double"
      },
      {
        "name":"stimulus3Bandwidth",
        "type":"double"
      },
      {
        "name":"stimulus3PwmPeriod",
        "units":"ms",
        "type":"long"
      }
    ],
    "callbacks":[
      {
        "name":"stimulus0",
        "properties":[
          "stimulus0Mode",
          "stimulus0Polarity",
          "stimulus0Frequency",
          "stimulus0Duration",
          "stimulus0Volume",
          "stimulus0Bandwidth",
          "stimulus0PwmPeriod"
        ]
      },
      {
        "name":"stimulus1",
        "properties":[
          "stimulus1Mode",
          "stimulus1Polarity",
          "stimulus1Frequency",
          "stimulus1Duration",
          "stimulus1Volume",
          "stimulus1Bandwidth",
          "stimulus1PwmPeriod"
        ]
      },
      {
        "name":"stimulus2",
        "properties":[
          "stimulus2Mode",
          "stimulus2Polarity",
          "stimulus2Frequency",
          "stimulus2Duration",
          "stimulus2Volume",
          "stimulus2Bandwidth",
          "stimulus2PwmPeriod"
        ]
      },
      {
        "name":"stimulus3",
        "properties":[
          "stimulus3Mode",
          "stimulus3Polarity",
          "stimulus3Frequency",
          "stimulus3Duration",
          "stimulus3Volume",
          "stimulus3Bandwidth",
          "stimulus3PwmPeriod"
        ]
      }
    ]
  }
}
```

## More Detailed Modular Device Information

[modular-devices](https://github.com/janelia-modular-devices/modular-devices)

## Install Library Dependencies

[arduino-libraries](https://github.com/janelia-arduino/arduino-libraries)
