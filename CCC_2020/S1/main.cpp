#include <bits/stdc++.h>
using namespace std;

struct point{
    int time, position;
    bool operator<(const point& p){
        return time < p.time;
    }
};

int n;
double fastest = 0;
point points[100000];//problem description's restrictions
int main(){
    std::cin >> n;
    for(int i = 0;i < n;i++){
        std::cin >> points[i].time;
        std::cin >> points[i].position;
    }
    sort(points, points + n);
    for(int i = 1;i < n;i++){
        double time_dif = points[i].time - points[i - 1].time;
        double dist_dif = points[i].position - points[i - 1].position;
        double speed = std::abs(dist_dif/time_dif);
        if(speed > fastest)fastest = speed;
    }
    printf("%f", fastest);
    return 0;
}