#include "utility.hpp"

#define SIZE 480

int main()
{
    char buf[256];
    for (int i = 0; i < SIZE; ++i) {
        snprintf(buf, sizeof(buf), "output-%02d.ppm", i);
        const char *output_path = buf;
        FILE *f = fopen(output_path, "wb");
        int w = 16*60;
        int h = 9*60;
        fprintf(f, "P6\n");
        fprintf(f, "%d %d\n", w, h);
        fprintf(f, "255\n");
        // shader code converted
        float t = ((float)i / (float)SIZE) * 2.0f * (float)M_PI;
        vec2 r = {(float)w, (float)h};
        for (int y = 0; y < h; ++y) {
            for (int x = 0; x < w; ++x) {
                vec4 o;
                vec2 FC = {(float)x, (float)y};
                vec2 p = (FC * 2.0-r) / r.y, l, i, v = p * (l += 4.0-4.0 * abs(.7-dot(p,p)));
                for(;i.y++<8.0; o+=(sin(v.xyyx()) + 1.0) * abs(v.x-v.y))v +=cos(v.yx() * i.y + i + t) / i.y + 0.7;

                o=tanh(5.0 *exp(l.x - 4.0 - p.y * vec4(-1.0, 1.0, 2.0, 0.0)) / o);

                fputc(o.x*255, f);
                fputc(o.y*255, f);
                fputc(o.z*255, f);
            }
        }
        fclose(f);
        printf("Generated %s (%3d/%3d)\n", output_path, i + 1, SIZE);
    }
    return 0;
}
