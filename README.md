#AuditoryStimulator

Authors:

    Peter Polidoro <polidorop@janelia.hhmi.org>

License:

    BSD

[Examples](./examples)

##API

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
      "stimulus1Mode",
      "stimulus1Polarity",
      "stimulus1Frequency",
      "stimulus1Duration",
      "stimulus2Mode",
      "stimulus2Polarity",
      "stimulus2Frequency",
      "stimulus2Duration",
      "stimulus3Mode",
      "stimulus3Polarity",
      "stimulus3Frequency",
      "stimulus3Duration"
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

##More Detailed Modular Device Information

[modular-devices](https://github.com/janelia-modular-devices/modular-devices)

##Install Library Dependencies

[arduino-libraries](https://github.com/janelia-arduino/arduino-libraries)
