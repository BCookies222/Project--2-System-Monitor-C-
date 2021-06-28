#include "processor.h"
#include <vector>
#include <iostream>

using std::vector;

#include "linux_parser.h"

Processor::Processor() {
  Processor::Utilization();
}
// TODO: Return the aggregate CPU utilization
float Processor::Utilization() {
  vector<long> active{activeJiffies_, LinuxParser::ActiveJiffies()};
  vector<long> total{totalJiffies_, LinuxParser::Jiffies()};
  float util = 1.0 * (active[1] - active[0]) / (total[1] - total[0]);
  activeJiffies_ = active[1];
  totalJiffies_ = total[1];
  return util;
}
