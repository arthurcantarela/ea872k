#ifndef MAZEMODEL_H
#define MAZEMODEL_H

#include <boost/multi_array.hpp>
#include <iostream>

class MazeModel {
    private:
        const int WIDTH = 8;
        const int HEIGHT = 6;
        typedef boost::multi_array_types::index_range range;
        typedef boost::multi_array<float, 2> matrix;
        matrix map;
    public:
        MazeModel();
        void generate();
        void print_for_debug();
};

#endif