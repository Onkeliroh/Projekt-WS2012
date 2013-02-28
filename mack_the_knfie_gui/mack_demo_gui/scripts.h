#ifndef SCRIPTS_H
#define SCRIPTS_H

#include "iostream"

std::string upload;
std::string run;

std::string get_upload_script();
std::string get_run_script();

void add_to_upload_script(std::string);
void add_to_run_script(std::string);

std::string get_default_run_script();
std::string get_default_upload_script();


#endif // SCRIPTS_H
