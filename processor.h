#ifndef PROCESSOR_H
#define PROCESSOR_H

#include <vector>
using std::vector;

class Processor {
 public:
  Processor();
  float Utilization();  // TODO: See src/processor.cpp

  // TODO: Declare any necessary private members
 private:
  long activeJiffies_{0};
  long totalJiffies_{0};
};

#endif