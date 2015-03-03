#include "CppUTest/TestHarness.h"

extern "C"
{
  #include "Decode.h"
}

TEST_GROUP(Roman)
{
  void setup()
  {
  }

  void teardown() 
  {
  }
};

TEST(Roman, Decode_I) {
  CHECK_EQUAL(1, roman_decode("I"));
}

TEST(Roman, Decode_V) {
	CHECK_EQUAL(5, roman_decode("V"));
}

TEST(Roman, Decode_X) {
	CHECK_EQUAL(10, roman_decode("X"));
}

TEST(Roman, Decode_L) {
	CHECK_EQUAL(50, roman_decode("L"));
}

TEST(Roman, Decode_C) {
	CHECK_EQUAL(100, roman_decode("C"));
}

TEST(Roman, Decode_D) {
	CHECK_EQUAL(500, roman_decode("D"));
}

TEST(Roman, Decode_M) {
	CHECK_EQUAL(1000, roman_decode("M"));
}

TEST(Roman, Decode_IX) {
  CHECK_EQUAL(4, roman_decode("IV"));
}

TEST(Roman, Decode_MCMXCVIII) {
  CHECK_EQUAL(1998, roman_decode("MCMXCVIII"));
}