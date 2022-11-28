#include <chrono>
#include <fstream>
#include <iostream>
#include <thread>


using namespace std;


void get_cpuinfo(unsigned long long int fields[]) {
    char line[3];
    ifstream in("/proc/stat", ios_base::in);
    in >> line;
    for (int i = 0; i != 10; i++) {
        if (in.is_open()) in >> fields[i];
        else exit(0);
    }
}


int main() {
    unsigned long long int fields[10], total_tick, total_tick_old, idle, idle_old,
        del_total_tick, del_idle;
    double percent_usage;

    get_cpuinfo(fields);

    total_tick = 0;

    for (int i = 0; i < 10; i++) total_tick += fields[i];

    idle = fields[3];

    while (true) {
        chrono::milliseconds timespan(1000);
        this_thread::sleep_for(timespan);

        total_tick_old = total_tick;
        idle_old = idle;

        get_cpuinfo(fields);

        total_tick = 0;

        for (int i = 0; i < 10; i++) total_tick += fields[i];

        idle = fields[3];

        del_total_tick = total_tick - total_tick_old;
        del_idle = idle - idle_old;

        percent_usage = ((del_total_tick - del_idle) / (double)del_total_tick) * 100;
        cout << "Total CPU Usage: %3.2lf%%" << endl << percent_usage;
    }

    return 0;
}
