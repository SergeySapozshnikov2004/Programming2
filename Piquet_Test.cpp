#include <sstream>
#include "clove-unit.h"
#include "Piquet.h"

auto piquet = Piquet(5, 20.5, 100);

CLOVE_TEST(Ctor_Default) {
  CLOVE_IS_TRUE(piquet.IsStandart())
}

CLOVE_TEST(ToString_Correct) {
  CLOVE_STRING_EQ(ToString(piquet).c_str(), "(ПК 5+20.5)");

  auto negativePiquet = Piquet(-5, 20.5, 100);
  CLOVE_STRING_EQ(ToString(piquet).c_str(), "(ПК 05+20.5)");
}

CLOVE_TEST(Equals_Piquets_ExceptTrue) {
  auto piquet1 = Piquet(5, 20.5, 100);
  auto piquet2 = Piquet(5, 20.5, 100);

  CLOVE_IS_TRUE(piquet1 == piquet2);
}

CLOVE_TEST(Equals_Piquets_ExceptFalse) {
  auto piquet1 = Piquet(5, 20.5, 100);
  auto piquet2 = Piquet(5, 20.5, 90);

  CLOVE_IS_FALSE(piquet1 == piquet2);
}

CLOVE_TEST(NotEquals_Piquets_ExceptFalse) {
  auto piquet1 = Piquet(5, 20.5, 100);
  auto piquet2 = Piquet(5, 20.5, 100);

  CLOVE_IS_FALSE(piquet1 != piquet2);
}

CLOVE_TEST(NotEquals_Piquets_ExceptTrue) {
  auto piquet1 = Piquet(5, 20.5, 100);
  auto piquet2 = Piquet(5, 20.5, 90);

  CLOVE_IS_TRUE(piquet1 != piquet2);
}

CLOVE_TEST(Output_Piquet_Correct) {
  std::stringstream ss;

  ss << piquet;

  CLOVE_STRING_EQ(ss.str().c_str(), ToString(piquet).c_str());
}