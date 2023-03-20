#!/bin/bash

protoc -I=./ --cpp_out=./ ./msg.proto

g++ receive.cpp msg.pb.cc -o receive -I ./ -L ./ -lprotobuf -pthread

g++ send.cpp msg.pb.cc -o send -I ./ -L ./ -lprotobuf -pthread