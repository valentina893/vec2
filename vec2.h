// vec2.h

#include <math.h>

// 2D vector class for math, physics, and miscallaneous applications
typedef struct vec2 {
    float x, y;
} vec2;

vec2 vec2_add(vec2 a, vec2 b) {
    return (vec2){a.x + b.x, a.y + b.y};
}

vec2 vec2_sub(vec2 a, vec2 b) {
    return (vec2){a.x - b.x, a.y - b.y};
}

vec2 vec2_mult(vec2 a, vec2 b) {
    return (vec2){a.x * b.x, a.y * b.y};
}

vec2 vec2_div(vec2 a, vec2 b) {
    if (b.x == 0 || b.y == 0) return a;
    return (vec2){a.x / b.x, a.y / b.y};
}

vec2 vec2_scalar(vec2 a, float s) {
    return (vec2){a.x * s, a.y * s};
}

float vec2_magnitude(vec2 a) {
    return sqrtf(pow(a.x, 2) + pow(a.y, 2));
}

float vec2_dp(vec2 a, vec2 b) {
    return a.x * b.x + a.y * b.y;
}
