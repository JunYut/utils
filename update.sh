echo "Updating utils library...\n"

make re
make clean

sudo cp include/utils.h /usr/local/include/
sudo cp libutils.a /usr/local/lib/
