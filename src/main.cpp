#include <vector>
#include "Piquet/Limitation.h"
#include "Piquet/Piquet.h"
#include "Piquet/Curve.h"
int main()
{
  std::vector<Limitation*> limits;
Piquet piquet1 = Piquet(5, 50.5);
Piquet piquet2 = Piquet(20, 30.1);
Limitation *curve = new Curve(130, piquet1, piquet2);
limits.push_back(curve);
for (auto limit : limits)
  {
     std::cout << limit->ToString() << " ";
  }
  return 0;
}
