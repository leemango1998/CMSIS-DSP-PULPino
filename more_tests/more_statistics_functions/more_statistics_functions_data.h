#ifndef MORE_BASIC_MATH_DATA_H
#define MORE_BASIC_MATH_DATA_H
#define BLOCK_SIZE_F32 15
#define BLOCK_SIZE_Q7 15
#define BLOCK_SIZE_Q15 15
#define BLOCK_SIZE_Q31 15

#define STATISTICS_SNR_THRESHOLD_float32_t 120
#define STATISTICS_SNR_THRESHOLD_q31_t 100
#define STATISTICS_SNR_THRESHOLD_q15_t 60
#define STATISTICS_SNR_THRESHOLD_q7_t 30

float32_t Arr_f32[BLOCK_SIZE_F32] = {
                    -0.0865129623056441 , -0.3331168756476194,
                    0.0250664612949661  , 0.0575352840717098,
                    -0.2292942701362928 , 0.2381830931285998,
                    0.2378328403304206  ,  -0.0075266553186635,
                    0.0654584722817308  , 0.0349278285641849,
                    -0.0373417155362879 , 0.1451581096586606,
                    -0.1176633086028378 , 0.4366371636394202,
                    -0.0272791766173191
};

q31_t Arr_q31[BLOCK_SIZE_Q31];
q15_t Arr_q15[BLOCK_SIZE_Q15];
q7_t Arr_q7[BLOCK_SIZE_Q7];
#endif
