/*
Author                  : Chirag Acharya
Date                    : 14 Dec 2018
Compile instruction     : g++ mutex.cpp -pthread --std=c++11
Brief                   : This code illustrates example of multi threading with mutex synchronization.
*/


#include <iostream>
#include <string>
#include <thread>
#include <list>
#include <mutex>

std::list <int> g_Data;
const int SIZE = 100000;
std::mutex g_Mutex;
void FillOne()
{
	for (int i=0;i<SIZE;i++)
	{
		//As the object goes out of scope the object will be deleted and mutex will be unlocked
		std::lock_guard<std::mutex> mtx(g_Mutex);
		g_Data.push_back(i);
	}
}

void FillTwo()
{
	for(int i=0;i<SIZE;i++)
	{
		std::lock_guard<std::mutex> mtx(g_Mutex);
		g_Data.push_back(i);
	}
}
int main()
{
	std::thread Thread1(FillOne);
	std::thread Thread2(FillTwo);

	Thread1.join();
	Thread2.join();
	std::cout<<"Size is :"<<g_Data.size()<<std::endl;
	return 0;
}
