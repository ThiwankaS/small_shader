
## this project is only for fun and all the cedit should goes to original creators ! Understand the basic concepts.

## Instructions

01. Clone the repository
    ```sh
    git clone https://github.com/ThiwankaS/adventofcode/tree/master/check_sum

02. Compile and build the prgram
```sh
    cd small_shader
    make
```

03. Run the program
```sh
    ./small_shader
```

04. First check `mpv` and `ffmpeg` both alrady installed

```sh
ffmpeg -version
mpv -version
```

05. If not install both programs
```sh
sudo sudo apt update
sudo apt install ffmpeg mpv
```

06. First create the vedio using all the frames, the name of the final vedio will be `output.mp4`
```sh
ffmpeg -i output-%02d.ppm -r 60 output.mp4
```
07. Remove all the intemediary `ppm`files
```sh
rm -rf output-*.ppm
```

08. Run the vedio using `mpv`command
```sh
mpv output.mp4
```

09. Time for admiration
