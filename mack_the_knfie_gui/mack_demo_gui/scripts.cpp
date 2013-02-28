#include "scripts.h"
#include "iostream"

std::string get_upload_script(){
    return upload;
}

std::string get_run_script(){
    return run;
}

void add_to_upload_script(std::string add){
	upload.append(" ");
	upload.append(add);
}

void add_to_run_script(std::string add){
	run.append(" ");
	run.append(add);
}

std::string get_default_run_script(){
    return run = "#! /bin/bash\n            echo \"Starting Mack the Knife\"\n            ssh dpollack@141.54.159.224 'export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/usr/local/cuda/lib64 && cd /home/dpollack/mtk_test && ' $*\n            echo \"Mack the Knife finished executing\"            ";
}

std::string get_default_upload_script(){
    return upload = "#! /bin/bash\n            echo  \"Uploading Hashes to cuda server\"\n            scp $1 dpollack@141.54.159.224:/home/dpollack/mack_demo/\n            echo -n \"Uploaded hashes from \"\n            echo $1            ";
}
