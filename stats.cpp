#include "stats.h"
#include <numeric>
#include <algorithm>

Stats Statistics::ComputeStatistics(const std::vector<float>& numbers)
{
    //Implement statistics here
    Stats stats;
    if (numbers.empty()) {
        stats.average = NAN;
        stats.min = NAN;
        stats.max = NAN;
        return stats;
    }

    stats.average = std::accumulate(numbers.begin(), numbers.end(), 0.0f) / numbers.size();
    stats.min = *std::min_element(numbers.begin(), numbers.end());
    stats.max = *std::max_element(numbers.begin(), numbers.end());

    return stats;
}
