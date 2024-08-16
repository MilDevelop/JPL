#ifndef INTERPRETATOR_H
#define INTERPRETATOR_H

#include "Commands/commands.h"


template <class Type>
class Interp {
public:
  static Type data; 
  static int PC;
  static int AC;
  static string instr;
  static int instr_type;
  static vector<Type> data_loc;
  static bool run_bit; //while we don't meet #END
  static int get_instr_type(string comm); //We'll get data-index our command
  static vector<Type> find_data(static string instr, int type); //first value is mean that command need agrs or needn't
  //second value is mean argument index
  //third value is mean type of data
  static void execute(int type); //execute command without args
  static void execute(int type, Type data, int Type_of_DataArgs); //execute command with args
  static void interpret(vector<string> memory, int starting_address); //main loop with interpetation JPL-code
};

#endif

