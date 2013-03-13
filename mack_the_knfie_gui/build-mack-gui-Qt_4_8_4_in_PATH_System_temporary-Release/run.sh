#! /bin/bash
echo "Starting Mack the Knife"
ssh dpollack@141.54.159.224 'export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/usr/local/cuda/lib64 && cd /home/dpollack/mtk_run/mack/ && ' $*
echo "Mack the Knife finished executing"
