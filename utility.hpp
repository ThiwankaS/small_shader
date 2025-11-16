#pragma once

#include <stdio.h>
#include <math.h>

struct vec4 {
    float x, y, z, w;
    vec4(float x = 0, float y = 0, float z = 0, float w = 0):
        x(x), y(y), z(z), w(w){}
};

struct vec3 {
    float x, y, z;
    vec3(float x = 0, float y = 0, float z = 0):
        x(x), y(y), z(z) {}

    vec3 xyy() const {
        return vec3(x, y, y);
    }
};

struct vec2 {
    float x, y;
    vec2(float x = 0, float y = 0):
        x(x), y(y){}
    vec2 yx() const {
        return vec2(y, x);
    }

    vec4 xyyx() const {
        return vec4(x, y, y, x);
    }
};

vec2 operator *(const vec2 &a, float s);
vec2 operator +(const vec2 &a, float s);
vec2 operator *(float s, const vec2 &a);
vec2 operator -(const vec2 &a, const vec2 &b);
vec2 operator +(const vec2 &a, const vec2 &b);
vec2 operator *(const vec2 &a, const vec2 &b);
vec2 operator /(const vec2 &a, float s);
vec2 &operator +=(vec2 &a, const vec2 &b);
vec2 &operator +=(vec2 &a, float s);

vec3 operator *(const vec3 &a, float s);
vec3 operator +(const vec3 &a, float s);
vec3 operator *(float s, const vec3 &a);
vec3 operator -(const vec3 &a, const vec3 &b);
vec3 operator +(const vec3 &a, const vec3 &b);
vec3 operator *(const vec3 &a, const vec3 &b);
vec3 operator /(const vec3 &a, float s);
vec3 operator /(const vec3 &a, const vec3 &b);
vec3 &operator +=(vec3 &a, const vec3 &b);
vec3 &operator +=(vec3 &a, float s);

vec4 operator +(const vec4 &a, float s);
vec4 operator *(const vec4 &a, float s);
vec4 operator *(float s, const vec4 &a);
vec4 operator +(const vec4 &a, const vec4 &b);
vec4 &operator +=(vec4 &a, const vec4 &b);
vec4 operator -(float s, const vec4 &a);
vec4 operator /(const vec4 &a, const vec4 &b);
vec4 operator /(const vec4 &a, float s);
vec4 operator +(float s, const vec4 &a);

vec2 abs(const vec2 &a);
vec2 cos(const vec2 &a);
vec3 abs(const vec3 &a);
vec3 fract(const vec3 &a);
vec3 normalize(const vec3 &a);
vec4 sin(const vec4 &a);
vec4 cos(const vec4 &a);
vec4 exp(const vec4 &a);
vec4 tanh(const vec4 &a);
float dot(const vec2 &a, const vec2 &b);
float dot(const vec3 &a, const vec3 &b);
float length(const vec3 &a);
