#include <AuditoryStimulator.h>


AuditoryStimulator dev;

void setup()
{
  dev.setup();
  dev.startServer();
}

void loop()
{
  dev.update();
}
