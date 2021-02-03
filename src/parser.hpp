#pragma once

#include <stdint.h>

namespace RundS {

    template <typename T>
    class Parser {
        public:
            virtual T* parse(char* raw, int len, uint32_t* parsed_len) = 0;
        protected:
            void convertFromNetwork(int16_t* input, int16_t* output, uint32_t length);
            void convertFromNetwork(int32_t* input, int32_t* output, uint32_t length);
    };

}