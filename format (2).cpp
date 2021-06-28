#include <string>

#include "format.h"

using std::string;
using std::to_string;
// To format the time  
string Format::TimeFormat(int t) {
  if (to_string(t).size() < 2) {
    return '0' + to_string(t);
  } else {
    return to_string(t);
  }
}
// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
string Format::ElapsedTime(long seconds) 
{  
  int hh, mm, ss;
  string time;
  hh = seconds / 3600;
  mm = (seconds % 3600) / 60;
  ss = (seconds % 3600) % 60;
  return TimeFormat(hh) + ':' + TimeFormat(mm) + ':' + TimeFormat(ss);
}