#ifndef MODULE_H
#define MODULE_H

#define Module_load_success_message "Output stream module load: success\n"
#define Log_prefix "[LOG]"

void print_log(char (*print)(char), char* message);

char print_char(char ch);

#endif