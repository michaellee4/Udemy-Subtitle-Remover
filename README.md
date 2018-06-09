# Udemy-Subtitle-Remover

Whenever you download a udemy course, the directories are always clogged with useless, messy subtitle files.

This is a C++ tool for linux users to quickly remove all these files. 

Note, I've only every encountered .srt and .vtt, feel free to add any extensions you need

To compile simply run 
g++ driver.cpp -o driver -std=c++17 -lstdc++fs

And to use call ./driver <course path here>
