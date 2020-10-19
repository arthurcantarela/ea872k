#include "maze/MazeModel.h"

MazeModel::MazeModel() {
    map.resize(boost::extents[HEIGHT][WIDTH]);
}

void MazeModel::generate() {
    // Fill boundaries
    matrix::array_view<1>::type boundaries[4] = {
        map[boost::indices[range()][0]], //left column
        map[boost::indices[range()][map[0].size() - 1]], //right column
        map[boost::indices[0][range()]], //top row
        map[boost::indices[map.size()-1][range()]] //bottom row
    };

    for (unsigned i = 0; i != sizeof(boundaries)/sizeof(boundaries[0]); ++i) {
        std::fill ( boundaries[i].begin(), boundaries[i].end(), 1 );
    }
}

void MazeModel::print_for_debug() {
    for (unsigned i = 0; i < map.size(); i++) {
        for (unsigned j = 0; j < map[i].size(); j++) {
            std::cout << map[i][j] << " ";
        }
        std::cout << std::endl;
    }
}