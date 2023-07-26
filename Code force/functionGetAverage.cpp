#include <vector>

double calcAverage(const std::vector<int>& values){
float op=0;
int limit= values.size();
for (int i= 0;i<limit;i++){
op = op + values[i];
}
op = op*1.0/(limit);
return op;
}