#include "utils/utils.h"
#include "workers/workers.h"

void placeholder(){};
int main(int argc, char **argv) {
    auto args = Utils::parse_args(argv, argc);
    Utils::clear_console();

    if(args.first == -1){
        help();
        exit(-1);
    }
    return 0;
}
