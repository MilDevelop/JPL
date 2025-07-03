#ifndef INTERPRETATOR_H
#define INTERPRETATOR_H

#include "Commands/commands.h"


template <class Type>
class Interp {
public:
  static Type data; 
  static int PC; ////PC содержит адрес следующей команды
  static int AC;// аккумулятор, регистр для арифметики
  static string instr; //регистр для текущей команды
  static int instr_type; //тип команды (код операции)
  static vector<Type> data_loc; //адрес данных или -1 , если его нет
  static bool run_bit; //while we don't meet #END
  static int get_instr_type(string comm); //We'll get data-index our command
  static vector<Type> find_data(static string instr, int type); //first value is mean that command need agrs or needn't
  //second value is mean argument index
  //third value is mean type of data
  static void execute(int type); //execute command without args
  static void execute(int type, Type data, int Type_of_DataArgs); //execute command with args
  static void interpret(vector<string> memory, int starting_address); //main loop with interpetation JPL-code
//Эта процедура интепретирует программы для простой машины.
// которая содержит команды только с одним операндом из памяти Машина содержит регистр АС
// (аккумулятор) Он используется для арифметических действий Например, команда ADD суммирует
// число из памяти с АС. Интерпретатор работает до тех пор. пока не будет выполнена команда
// END, вследствие чего бит run_bit поменяет значение на false. Машина состоит из памяти,
// счетчика команд, бита run bit и аккумулятора АС Входные параметры состоят из копии
// содержимого памяти и начального адреса

};

#endif

