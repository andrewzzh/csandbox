#include <iostream>
#include <iomanip>
#include <array>

int main(int argc, char *argv[]){
    const unsigned int min_wt {100U};
    const unsigned int max_wt {250U};
    const unsigned int wt_step {10U};
    const size_t wt_count {1 + (max_wt - min_wt) / wt_step};

    const unsigned int min_ht {48U};
    const unsigned int max_ht {84U};
    const unsigned int ht_step {2U};
    const size_t ht_count {1 + (max_ht - min_ht) / ht_step};

    std::array<unsigned int, wt_count> weight_lbs;
    std::array<unsigned int, ht_count> height_ins;

    for(size_t i {}, w {min_wt}; i < wt_count; w += wt_step, ++i){
        weight_lbs.at(i) = w;
    }

    unsigned int h{min_ht};

    for (auto& height : height_ins){
        height = h;
        h += ht_step;
    }

    std::cout << std::setw(7) << " |";
    for(const auto& w: weight_lbs){
        std::cout << std::setw(5) << w << "  |";
    }
    std::cout << std::endl;

    for(size_t i {1}; i < wt_count; i++){
        std::cout << "---------";
    }
    std::cout << std::endl;
    return 0;

}