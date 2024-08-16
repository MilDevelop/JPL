#include "interpretator.h"

int main() { cout << "Hello World!"; return 0; }

template<class Type>
inline int Interp<Type>::get_instr_type(string comm)
{
  //ride a string while not meet (" ", "(", "[")
  //search command in data base and return this type
  return 0;
}

template<class Type>
vector<Type> Interp<Type>::find_data(static string instr ,int type)
{
  return vector<Type>();
}

template<class Type>
void Interp<Type>::execute(int type)
{
}

template<class Type>
void Interp<Type>::execute(int type, Type data, int Type_of_DataArgs)
{
}

template<class Type>
void Interp<Type>::interpret(vector<string> memory, int starting_address)
{
  PC = starting_address;
  while (run_bit) {
    instr = memory[PC];
    PC++;
    instr_type = get_instr_type(instr);
    data_loc = find_data(instr, instr_type);
    
    if (data_loc[0] > 0) {
      data = data_loc[1];
      execute(instr_type, data, data_loc[2]);
    }
    else if (data_loc[0] == 0) {
      execute(instr_type);
    }
    else {
      MessageBox(GetActiveWindow(), "No such command was found", "Syntax error", MB_ICONERROR);
    }
  }
}
