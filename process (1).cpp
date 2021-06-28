#include <unistd.h>
#include <cctype>
#include <sstream>
#include <string>
#include <vector>

#include "process.h"
#include "linux_parser.h"

using std::string;
using std::to_string;
using std::vector;

 Process::Process(int pid=0):(pid_(pid), user_(LinuxParser::User(pid)), command_(LinuxParser::Command(pid)))
{
  Process::Ram();
  Process::UpTime();
  Process::CpuUtilization();
}


// TODO: Return this process's ID
int Process::Pid() 
{ return pid_; }

// TODO: Return this process's CPU utilization
float Process::CpuUtilization() 
{ cpuUtil_= LinuxParser::CpuUtilization(pid_);
  return cpuUtil_;
}

// TODO: Return the command that generated this process
string Process::Command() { return command_; }

// TODO: Return this process's memory utilization
string Process::Ram() 
{ ram_= LinuxParser::Ram(pid_);
  return ram_;
}

// TODO: Return the user (name) that generated this process
string Process::User() { return user_; }

// TODO: Return the age of this process (in seconds)
long int Process::UpTime() 
{ uptime_= LinuxParser::UpTime(pid_);
  return uptime_; 
}

// TODO: Overload the "less than" comparison operator for Process objects
// REMOVE: [[maybe_unused]] once you define the function
bool Process::operator<(Process const& a) const 
{ return cpuUtil_ > a.cpuUtil_;}