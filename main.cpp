#include <cstdlib>
#include <iostream>
#include "IntCell.h"

int main()
{
    IntCell *cell_ptr;

    cell_ptr = new IntCell{ 0 };
    cell_ptr->write(5);
    std::cout << "Cell contents: " << cell_ptr->read() << std::endl;

    //delete everything created using new because it causes memory leaks
    //don't exactly understand pointers, look it up
    delete cell_ptr;
    return EXIT_SUCCESS;

}