#include<iostream>
using namespace std;
struct LpuHostel{
    int HostelNum;
    char NameOfBlock;
    int TotalRooms;
    int TotalFloors;
    double TotalArea;
} gh;
int main(){
    cout<< "Actual size of struct : "<<sizeof(gh)<<endl;
    cout<<sizeof(gh.HostelNum)<<endl;
    cout<<sizeof(gh.NameOfBlock)<<endl;
    cout<<sizeof(gh.TotalFloors)<<endl;
    cout<<sizeof(gh.TotalRooms)<<endl;
    cout<<sizeof(gh.TotalArea)<<endl;
    cout<<"sum of all variables in struct : " <<(sizeof(gh.HostelNum) + sizeof(gh.NameOfBlock) + sizeof(gh.TotalFloors) + sizeof(gh.TotalRooms) + sizeof(gh.TotalArea));
    return 0;
}
// question arises why the size of actual struct is different from sum of all variables in struct ?
// answer : this adujestment in memory is called padding