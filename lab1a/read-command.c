// UCLA CS 111 Lab 1 command reading

#include "command.h"
#include "command-internals.h"
#include <ctype.h>
#include <error.h>
#include <stdio.h>

/* FIXME: You may need to add #include directives, macro definitions,
   static function definitions, etc.  */

/* FIXME: Define the type 'struct command_stream' here.  This should
   complete the incomplete type declaration in command.h.  */

/* =====================================
   ========== Helper functions ========= 
   ===================================== */

/* Check each byte if it is a valid char here */
bool check_char(char single_byte)
{
  if(!isalpha(single_byte) && !isdigit(single_byte) && !isspace(single_byte))
  {
    switch (single_byte){
      case '!':
      case '%':
      case '+':
      case ',':
      case '-':
      case '.':
      case '/':
      case ':':
      case '@':
      case '^':
      case '_':
        return true;
      default:
        return false;
    }
  }
  else
    return true;
}

command_stream_t
make_command_stream (int (*get_next_byte) (void *),
		     void *get_next_byte_argument)
{
  /* FIXME: Replace this with your implementation.  You may need to
     add auxiliary functions and otherwise modify the source code.
     You can also use external functions defined in the GNU C Library.  */
  
  error (1, 0, "command reading not yet implemented");
  return 0;
}

command_t
read_command_stream (command_stream_t s)
{
  /* FIXME: Replace this with your implementation too.  */
  error (1, 0, "command reading not yet implemented");
  return 0;
}
