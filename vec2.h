// vec2.h

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
