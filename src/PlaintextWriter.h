#ifndef KALLISTO_PLAINTEXT_WRITER_H
#define KALLISTO_PLAINTEXT_WRITER_H

#include <cstdlib>

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

void plaintext_writer(
    const std::string& out_name,
    const std::vector<double>& alpha,
    const std::vector<double>& eff_lens,
    const std::vector<int>& lens
    );

#endif
