#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"
int main(int argc, char *argv[]){
    if (argc!=3) printf(1,"input type sp \"pid\" \"new priority\"");
    else set_priority(atoi(argv[1]),atoi(argv[2]));
    exit();
}
