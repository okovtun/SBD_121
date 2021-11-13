#pragma once
#include"stdafx.h"
#include"Constants.h"

template<typename T>void Print(T arr[], const unsigned int n);
template<typename T>void Print(T arr[ROWS][COLS], const unsigned int ROWS, const unsigned int COLS);

#include"Print.cpp"