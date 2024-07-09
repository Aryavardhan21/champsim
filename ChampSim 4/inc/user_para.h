 #include <iostream>
#include <vector>
#include <cstdint>
#include <utility>




    
    extern vector<std::vector<uint64_t>> set_map;
    extern vector<uint32_t> remappingtoset;
    extern vector<uint32_t> llc_set_accesses;
    extern vector<uint32_t> llc_set_evictions;
    extern vector<std::vector<uint32_t>> block_restore;
    extern vector<uint64_t> no_of_block_restores;
    extern vector<std::pair<uint64_t, float>> degree_of_usage;
     extern uint64_t llc_total_accesses;