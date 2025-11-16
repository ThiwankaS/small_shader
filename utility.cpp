#include "utility.hpp"

vec2 operator *(const vec2 &a, float s) {
    return vec2(a.x*s, a.y*s);
}

vec2 operator +(const vec2 &a, float s) {
    return vec2(a.x+s, a.y+s);
}

vec2 operator *(float s, const vec2 &a) {
    return (a*s);
}

vec2 operator -(const vec2 &a, const vec2 &b) {
    return vec2(a.x-b.x, a.y-b.y);
}

vec2 operator +(const vec2 &a, const vec2 &b) {
    return vec2(a.x+b.x, a.y+b.y);
}

vec2 operator *(const vec2 &a, const vec2 &b) {
    return vec2(a.x*b.x, a.y*b.y);
}

vec2 operator /(const vec2 &a, float s) {
    return vec2(a.x/s, a.y/s);
}

float dot(const vec2 &a, const vec2 &b) {
    return (a.x*b.x + a.y*b.y);
}

vec2 abs(const vec2 &a) {
    return vec2(fabsf(a.x), fabsf(a.y));
}

vec2 &operator +=(vec2 &a, const vec2 &b) {
    a = a + b;
    return (a);
}

vec2 &operator +=(vec2 &a, float s) {
    a = a + s;
    return (a);
}

vec2 cos(const vec2 &a) {
    return vec2(cosf(a.x), cosf(a.y));
}

vec4 sin(const vec4 &a) {
    return vec4(sinf(a.x), sinf(a.y), sinf(a.z), sinf(a.w));
}

// --- vec3 operators -------------------------------------------------

vec3 operator *(const vec3 &a, float s) {
    return vec3(a.x * s, a.y * s, a.z * s);
}

vec3 operator +(const vec3 &a, float s) {
    return vec3(a.x + s, a.y + s, a.z + s);
}

vec3 operator *(float s, const vec3 &a) {
    return a * s;
}

vec3 operator -(const vec3 &a, const vec3 &b) {
    return vec3(a.x - b.x, a.y - b.y, a.z - b.z);
}

vec3 operator +(const vec3 &a, const vec3 &b) {
    return vec3(a.x + b.x, a.y + b.y, a.z + b.z);
}

vec3 operator *(const vec3 &a, const vec3 &b) {
    return vec3(a.x * b.x, a.y * b.y, a.z * b.z);
}

vec3 operator /(const vec3 &a, float s) {
    return vec3(a.x / s, a.y / s, a.z / s);
}

vec3 operator /(const vec3 &a, const vec3 &b) {
    return vec3(a.x / b.x, a.y / b.y, a.z / b.z);
}

float dot(const vec3 &a, const vec3 &b) {
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

float length(const vec3 &a) {
    return sqrtf(dot(a, a));
}

vec3 abs(const vec3 &a) {
    return vec3(fabsf(a.x), fabsf(a.y), fabsf(a.z));
}

vec3 fract(const vec3 &a) {
    return vec3(a.x - floorf(a.x),
                a.y - floorf(a.y),
                a.z - floorf(a.z));
}

vec3 normalize(const vec3 &a) {
    float len = length(a);
    if (len > 0.0f)
        return a / len;
    return a;
}

vec3 &operator +=(vec3 &a, const vec3 &b) {
    a = a + b;
    return a;
}

vec3 &operator +=(vec3 &a, float s) {
    a = a + s;
    return a;
}



vec4 operator /(const vec4 &a, float s) {
    return vec4(a.x / s, a.y / s, a.z / s, a.w / s);
}

vec4 operator +(float s, const vec4 &a) {
    return vec4(a.x + s, a.y + s, a.z + s, a.w + s);
}


vec4 exp(const vec4 &a) {
    return vec4(expf(a.x), expf(a.y), expf(a.z), expf(a.w));
}

vec4 tanh(const vec4 &a) {
    return vec4(tanhf(a.x), tanhf(a.y), tanhf(a.z), tanhf(a.w));
}

vec4 operator +(const vec4 &a, float s) {
    return vec4(a.x+s, a.y+s, a.z+s, a.w+s);
}

vec4 operator *(const vec4 &a, float s) {
    return vec4(a.x*s, a.y*s, a.z*s, a.w*s);
}

vec4 operator *(float s, const vec4 &a) {
    return a*s;
}

vec4 operator +(const vec4 &a, const vec4 &b) {
    return vec4(a.x+b.x, a.y+b.y, a.z+b.z, a.w+b.w);
}

vec4 &operator +=(vec4 &a, const vec4 &b) {
    a = a + b;
    return a;
}

vec4 operator -(float s, const vec4 &a) {
    return vec4(s-a.x, s-a.y, s-a.z, s-a.w);
}

vec4 operator /(const vec4 &a, const vec4 &b) {
    return vec4(a.x/b.x, a.y/b.y, a.z/b.z, a.w/b.w);
}

vec4 cos(const vec4 &a) {
    return vec4(cosf(a.x), cosf(a.y), cosf(a.z), cosf(a.w));
}
