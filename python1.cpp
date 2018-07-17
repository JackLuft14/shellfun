/*
 * python1.cpp
 *
 *  Created on: Jun 14, 2018
 *      Author: jack
 */
#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

const int SUCCESS = 0;

int main(int argc, char *argv[]){

	int counter;
	printf("Program name: %s",argv[0]);
	if(argc == 1)
		printf("\nThere are no more arguments");
	if(argc > 1){
		for(counter=0; counter < argc; counter++){
			printf("\nArgument number %2d is %s", counter, argv[counter]);
		}
	}
	cout << "\nDone!" << endl;

	string command = "echo \"Hello world!\"";
	system(command.c_str());

	return 12;
}

