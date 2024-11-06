# !/bin/bash

# Compile source files
g++ -std=c++14 -c main.cpp -o main.o
g++ -std=c++14 -c RestClient.cpp -o RestClient.o
g++ -std=c++14 -c env_loader.cpp -o env_loader.o

# Link object files to create the executable
g++ -std=c++14 main.o RestClient.o env_loader.o -o DeribitClient -lcurl

# Clean up object files
rm *.o

echo "Build complete. Run ./DeribitClient to start."
